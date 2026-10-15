# dgVoodoo2 2.87.5 Wine compatibility fix

Completed 11 October 2026.

**The supplied 2.87.5 still contains the Wine-specific condition implicated in the 2.82 failure. The complete fixed distribution is at:**

`/home/rick/Downloads/dgVoodoo/dgVoodoo2_87_5_FIXED/`

All 32 original distribution files and their directory layout are included. **22 of 24 DLLs are patched**, covering Direct3D 8/9, DirectDraw, and Glide across x86, x64, ARM64, ARM64 CHPE x86, and ARM64X. The ARM64X Direct3D 9 DLL contains two copies of the routine; both are patched. The two D3DImm DLLs lack the identified predicate and are copied unchanged. Both control-panel executables, configuration, and other non-DLL files are copied unchanged.

The original directory `/home/rick/Downloads/dgVoodoo/dgVoodoo2_87_5/` remains byte-for-byte unchanged. `Wine-fix/` in the new folder contains this report, the reproducible patcher, manifests, and validation evidence.

## Finding and patch

The concealed export-name test is still present. It searches for `wine_get` using two four-byte comparisons after adding constants, against `0xb9da14ba` and `0x0f1bdb2c`. Its caller recognizes `NTDLL.DLL` and walks its exports. On Wine, the result causes callers to skip clearing graphics-state words. In the x86 D3D8 implementation, this can be seen at RVAs `0x935E2–0x935F4` and `0xA469B–0xA46B5`. These are new offsets and a refactored implementation relative to 2.82.

The patch makes this local export predicate return false on a match, so the wrapper follows the normal clearing path. It preserves the existing non-match behavior and calling convention. A separate module-name check decodes to `VULKAN-1`; that check is unchanged.

Each predicate needs exactly **one changed instruction byte**:

- x86: `mov al,1` becomes `mov al,0` (`B0 01` → `B0 00`).
- x64: the successful comparison now branches to the false-result instruction (`74 0A` → `74 08`).
- ARM64, CHPE x86, and ARM64X: `mov w0,1` becomes `mov w0,0` (`20 00 80 52` → `00 00 80 52`).

For the packed x86 and x64 DLLs, the erased UPX header fields were restored and UPX 5.2.0 was used to decompress them before patching. The delivered affected x86/x64 DLLs are unpacked and therefore larger. No import sections were added. The unaffected packed x86 D3DImm DLL remains in its original packed form.

This modifies dgVoodoo's own predicate only. It makes no change to Wine, NTDLL, system DLLs, or global DLL overrides.

## Validation

Environment: Wine 10.0, 32-bit Wine prefix `/home/rick/.wine32`, AMD Radeon 760M, Mesa 26.0.8, KDE Wayland/Xwayland.

| Check | Result |
|---|---|
| Original packed 2.87.5 D3D8, Snail Mail with DXVK | Startup page fault reproduced. |
| Fixed 2.87.5 D3D8, same game/configuration/backend | Intro, menus, and Tutorial level render. User confirmed gameplay renders and responds normally. |
| Original unpacked 2.87.5 DDraw, DirectDraw 7 probe | DLL loads and adapter query succeeds; process exits with code 5 during primary-surface creation. |
| Fixed 2.87.5 DDraw, same probe with Wine D3D11 | Primary/offscreen creation, 120 fills/blits, pixel readback `0x00204080`, and teardown pass. |
| All eight x86 DLLs, original and fixed | DLL loading passes in Wine. All seven affected predicates return true for Wine export names before patching and false after patching. D3DImm loads unchanged. |
| All 23 predicate copies, original and patched | 3,220 machine-code executions in Unicorn pass, including matching names, ordinary names, short inputs, and generated inputs. Stack and selected nonvolatile-register checks pass. |
| Binary integrity | Exactly 23 instruction-byte differences across the 22 affected DLLs, relative to their unpacked originals. |
| Relocations | No ordinary base relocation overlaps a patch. ARM64X dynamic relocation blocks do not cover either patched code page. |
| Distribution integrity | All 32 source hashes unchanged; all 32 files included; the 10 unaffected files are byte-identical. |
| Independent rebuild | Every distribution file matches the delivered fixed copy byte-for-byte. |

**Validation limits:** x64 and ARM variants were checked through disassembly and execution of their detector machine code in an emulator, not through complete games on those architectures. Loading the Glide and D3D9 x86 DLLs and testing their predicates does not constitute full rendering coverage of those APIs. The complete game test covers x86 D3D8; the drawing probe covers x86 DirectDraw 7. Native Windows and every possible game/backend combination were not tested.

## Snail Mail test setup

The test used a working copy of the user's Snail Mail game under the task workspace (`work/2875/game/`), leaving the previously configured 2.82 installation beside the original game untouched. The tested copy contains the fixed 2.87.5 x86 D3D8 DLL, DXVK 2.6.2's x86 `d3d11.dll` and `dxgi.dll`, and the configuration used for the earlier successful test. DXVK supplies dgVoodoo's Direct3D 11 backend; it is not bundled into the fixed dgVoodoo distribution.

Launch settings used:

```bash
WINEPREFIX=/home/rick/.wine32 \
WINEDLLOVERRIDES='d3d8,d3d11,dxgi=n,b' \
WINEDEBUG=-all \
wine explorer /desktop=Snail2875,1024x768 SnailMail.exe
```

The command is run from the test game directory. As established in the earlier 2.82 investigation, this machine needs DXVK for correct Snail Mail rendering and a Wine virtual desktop to avoid its separate fullscreen/Xwayland swapchain-sizing failure. Those backend/display issues are separate from the patched predicate.

For other games, use the DLLs from the matching architecture/API subfolder, following the distribution's original usage instructions. The folder layout deliberately keeps similarly named DLLs for different architectures and the Napalm Glide variant separate.

## Reproduce the fixed distribution

Run the included Python patcher with the original directory, a new destination, and UPX 5.2.0:

```bash
python3 patch_dgvoodoo_2875.py \
  /home/rick/Downloads/dgVoodoo/dgVoodoo2_87_5 \
  /path/to/new-destination \
  --upx /path/to/upx
```

The patcher uses Python's standard library only. It verifies the complete input file list and all source SHA-256 hashes, verifies unpacked DLL hashes and original instructions, refuses an existing destination, and publishes the complete directory only after patching succeeds. It never edits source files. The build creates `Wine-fix/patch-manifest.json`, `source-sha256.json`, and a copy of itself. This report and test evidence were added after validation.

`patch-manifest.json` records each DLL's source/output hashes, patch RVA, unpacked file offset, and before/after instruction bytes. `source-sha256.json` covers all 32 original files. Evidence includes original/fixed test logs, disassembly, emulation results, the probe source, and the Tutorial screenshot.

The original investigation was prompted by [Wine bug 58731](https://bugs.winehq.org/show_bug.cgi?id=58731), with the relevant explanation available in [the Wine bug-mail archive](https://list.winehq.org/hyperkitty/list/wine-bugs@list.winehq.org/message/5JCMKEDWKCSHO2RW2PSSYSWDNOFP2ZD7/). This 2.87.5 patch and its validation are based on the supplied local binaries.

## Patch locations

RVAs refer to the unpacked PE image. Detailed hashes and file offsets are in `patch-manifest.json`.

| DLL | Patch RVA(s) |
|---|---|
| `3Dfx/arm64/Glide.dll` | `0x5d5c4` |
| `3Dfx/arm64/Glide2x.dll` | `0x5c774` |
| `3Dfx/arm64/Glide3x.dll` | `0x60044` |
| `3Dfx/arm64_chpe_x86/Glide.dll` | `0x763a4` |
| `3Dfx/arm64_chpe_x86/Glide2x.dll` | `0x75f24` |
| `3Dfx/arm64_chpe_x86/Glide3x.dll` | `0x79bc4` |
| `3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll` | `0x7f264` |
| `3Dfx/x64/Glide.dll` | `0x5a1ff` |
| `3Dfx/x64/Glide2x.dll` | `0x59d57` |
| `3Dfx/x64/Glide3x.dll` | `0x5c363` |
| `3Dfx/x86/Glide.dll` | `0x4ca73` |
| `3Dfx/x86/Glide2x.dll` | `0x4c6e3` |
| `3Dfx/x86/Glide3x.dll` | `0x4f1cb` |
| `3Dfx/x86/Napalm/Glide3x.dll` | `0x525d4` |
| `MS/arm64_chpe_x86/D3D8.dll` | `0xf01b4` |
| `MS/arm64_chpe_x86/D3D9.dll` | `0x123784` |
| `MS/arm64_chpe_x86/D3DImm.dll` | Unchanged; predicate absent |
| `MS/arm64_chpe_x86/DDraw.dll` | `0x71914` |
| `MS/arm64x/D3D9.dll` | `0xf6164`, `0x21520c` |
| `MS/x64/D3D9.dll` | `0xee587` |
| `MS/x86/D3D8.dll` | `0xa1e13` |
| `MS/x86/D3D9.dll` | `0xc46e8` |
| `MS/x86/D3DImm.dll` | Unchanged; predicate absent |
| `MS/x86/DDraw.dll` | `0x4aa81` |
