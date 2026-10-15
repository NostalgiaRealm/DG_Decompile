# Reading the control-panel executables

There are two native control-panel programs in the supplied tree:

| Input | PE architecture | Entry-point VA | Size |
|---|---|---:|---:|
| `dgVoodooCpl.exe` | x64 | `0x140023ec0` | 451,072 bytes |
| `Cpl/arm64/dgVoodooCpl.exe` | ARM64 | `0x14000f1b0` | 446,464 bytes |

Neither required UPX decompression. Their embedded About dialogs both identify **v2.87.5** and distinguish the x64 and arm64 builds. Their CodeView debug records name `dgVoodooCpl.pdb` in architecture-specific build directories; those are embedded build-path strings, not PDB files recovered in this package.

## Evidence and scope

These notes come from parsed PE metadata, resource bytes, and the address-anchored decompiled functions linked below. No control panel was launched, no setting was applied, and no runtime UI state was observed. Dialog labels describe the interface present in the binaries; help strings describe the shipped author's intended behavior. The code examples below trace selected option-handling paths; they do not validate runtime behavior.

Each program contains **49 resource payloads**, **103 nonempty string-table entries**, and **10 extended dialog templates with 238 controls**. Comparing payload SHA-256 values shows **47 of 49 resources are byte-identical** between builds. The differences are About dialog 103, whose architecture label differs, and application manifest 24/1, whose processor architecture differs. All string-table entries are identical.

The complete decoded controls, IDs, coordinates, classes, template-relative offsets, and raw resource identities are available here:

- [x64 dialogs](control-panel/dgVoodooCpl.exe/dialogs.json) and [control index](control-panel/dgVoodooCpl.exe/controls.tsv)
- [ARM64 dialogs](control-panel/Cpl/arm64/dgVoodooCpl.exe/dialogs.json) and [control index](control-panel/Cpl/arm64/dgVoodooCpl.exe/controls.tsv)
- [x64 resource manifest](../resources/dgVoodooCpl.exe/manifest.json) and [full help strings](../resources/dgVoodooCpl.exe/strings.tsv)
- [ARM64 resource manifest](../resources/Cpl/arm64/dgVoodooCpl.exe/manifest.json) and [full help strings](../resources/Cpl/arm64/dgVoodooCpl.exe/strings.tsv)

These structured indexes were produced by [`inspect_control_panels.py`](../scripts/inspect_control_panels.py), which checked template lengths, item counts, and trailing bytes. Dialogs use `DLGTEMPLATEEX` version 1. A control ID of `4294967295` (`0xffffffff`) is the common static-label sentinel, not a useful unique event identifier. Other IDs also repeat across pages, so locate the owning dialog before interpreting a numeric control ID.

## Dialog map

Only dialogs 103 and 117 have nonempty resource captions. The remaining page descriptions below are inferred from their control labels, not recovered C++ class names or observed tab captions.

| Dialog resource ID | Controls | Caption or inferred role | Useful anchors |
|---|---:|---|---|
| 103 | 10 | `About dgVoodoo` | Version, credits, architecture label |
| 104 | 31 | General rendering settings | Output API, adapter selection, fullscreen output, scaling, color, capture mouse |
| 117 | 13 | `dgVoodoo 2.87.5 - Control Panel` | Config folder/running instance selector; OK, Cancel, Apply, About |
| 118 | 25 | Glide settings | 3Dfx card, TMUs, onboard memory, filtering, gamma, PCI access, splash/watermark |
| 119 | 25 | DirectX settings | Passthrough, video card/VRAM, fullscreen behavior, filtering, MSAA, Phong shading |
| 120 | 37 | Extended general settings | Environment, ROI, resampling, presentation model, color space, FPS limit, system hooks |
| 121 | 7 | Extended Glide dithering | Dithering, effect, ordered matrix size |
| 122 | 12 | Debug settings | INFO/WARNING/ERROR severity, trace level, Log to file |
| 123 | 77 | Extended DirectX settings | Adapter IDs, resolutions/bit depths, render formats, D3D12 bounds checking, tessellation |
| 124 | 1 | Scroll-container template | One `SCROLLBAR`, control ID 1054; no caption |

The main dialog's action IDs are useful when reading message dispatch: **1003 = OK, 1002 = Cancel, 1005 = Apply, 1004 = About**. Its folder actions include **1018 = `.\`, 1019 = `x`, 1020 = Add, 1021 = `->`, 1022 = `O`**. Help strings 1018–1022 describe adding the control panel's folder, removing the selected folder, choosing another folder, refreshing running instances, and opening the selected folder. String 1026 describes the running-instance list as a startup snapshot. These are resource claims; this audit did not exercise discovery or persistence.

## Useful help-string anchors

The shipped help text is a practical glossary for unnamed constants and dispatch branches. Search both the string text and its resource ID, then follow the references in the matching architecture's decompiled output.

| String IDs | Topic | Why it helps reading the code |
|---|---|---|
| 5099–5104 | Rendering backend, adapters, screen state, scaling | Separates output-backend selection from the legacy API being wrapped |
| 9202, 9207, 9209–9212 | Glide memory, TMUs, card models, PCI/palette options | Explains distinct configuration fields that can otherwise look like arbitrary integers |
| 13313–13327 | DirectX passthrough, cards, VRAM, filtering, TnL, CPU surface access | Distinguishes wrapper disable/passthrough from individual quality and compatibility settings |
| 17393–17419 | Extended presentation, ROI, color space, hooks, FPS | Defines expected textual/numeric inputs and the scope of several advanced options |
| 17676–17678 | Glide dithering | Describes policy, effect, and matrix scale as separate options |
| 17935–17939 | Debug severity, trace, file logging | Separates advertised control presence from implemented capability |
| 18166 onward | Extended DirectX hardware identity and rendering | Gives names for emulated IDs, resolution policy, depth formats, and device limits |

Some help text carries explicit qualifications. For example, **17939 says file logging is not implemented**, even though a `Log to file` control exists. Dialog 122 says its settings affect debug and special-release builds. Strings **17416/17417 describe the GDI/cursor hooks as x86 DirectX-only**, although the text is included in both native control-panel builds. Neither a visible control nor shared resource text proves an option works in every runtime or architecture.

## Three concrete code paths

**1. Loading configuration and handling Apply.** The x64 [initialization routine at `0x14000b1b4`](../decompiled/dgVoodooCpl.exe/functions/14000b1b4_FUN_14000b1b4.c) builds `dgVoodoo.conf` paths, reads the separate `dgVoodooSetupPaths.dat` list in `0x208`-byte records (capped at `0x800` records), and calls [the configuration loader at `0x140014464`](../decompiled/dgVoodooCpl.exe/functions/140014464_FUN_140014464.c). That loader opens the supplied path for reading and first calls another reader; when it returns false, it invokes an INI-parser path carrying the literal `[dgVoodoo IniParser] `. This establishes a fallback parsing path without recovering the original parser class names.

The [action handler at `0x14000c354`](../decompiled/dgVoodooCpl.exe/functions/14000c354_FUN_14000c354.c) has a branch for **`0x3ed` = 1005**, matching the main dialog's **Apply** control. After collecting page state, it either builds the selected folder's `dgVoodoo.conf` path and calls [the writer at `0x140014848`](../decompiled/dgVoodooCpl.exe/functions/140014848_FUN_140014848.c), or sends message **`0x409`** to a stored window handle. The latter is the observed alternative dispatch path; its receiving implementation is not established by this branch alone. A nonzero result disables Apply. The [ARM64 handler at `0x14000d968`](../decompiled/Cpl/arm64/dgVoodooCpl.exe/functions/14000d968_FUN_14000d968.c) contains the corresponding `0x3ed` branch, filename, and message. For I/O details, [x64 `0x140023fa0`](../decompiled/dgVoodooCpl.exe/functions/140023fa0_FUN_140023fa0.c) selects `CreateFileW` read/open-existing or write/create-always parameters; [the ReadFile wrapper](../decompiled/dgVoodooCpl.exe/functions/1400240e0_FUN_1400240e0.c) and [WriteFile wrapper](../decompiled/dgVoodooCpl.exe/functions/1400241c0_FUN_1400241c0.c) return zero for their successful operation, which is a different return convention from the higher-level configuration functions.

**2. Persisting control-panel preferences.** The x64 [writer at `0x14000d7d4`](../decompiled/dgVoodooCpl.exe/functions/14000d7d4_FUN_14000d7d4.c) appends **`dgVoodooSettings.ini`**, opens it for writing, emits `DataFolderRedirection = "..."`, then the `[Cpl]` section and `ShowExtendedTabs = true/false`, and closes the file. This is a distinct file from `dgVoodoo.conf` and `dgVoodooSetupPaths.dat`. The [ARM64 routine at `0x14000f038`](../decompiled/Cpl/arm64/dgVoodooCpl.exe/functions/14000f038_FUN_14000f038.c) has the same literal keys and write sequence. Its reconstructed stack and argument expressions are much less readable, so use the x64 version as a reading aid while retaining the architecture-specific evidence. The decompiler's pointer types do not establish the original preference-structure layout.

**3. Shared dialog-message dispatch.** The x64 [callback at `0x14000d9e0`](../decompiled/dgVoodooCpl.exe/functions/14000d9e0_FUN_14000d9e0.c) handles **`0x110` (`WM_INITDIALOG`)** by storing the supplied object pointer through `SetWindowLongPtrW(..., -21, ...)`, creating a `tooltips_class32` tooltip window, and calling an object-table method. Later messages retrieve the stored pointer. For **`0x111` (`WM_COMMAND`)**, it separates notifications with a child-window handle from commands without one, inspects the child class, and dispatches through different object-table offsets. Other branches handle notifications, scrolling, mouse-wheel forwarding, resizing, and destruction of the tooltip window. The [ARM64 counterpart at `0x14000f5f8`](../decompiled/Cpl/arm64/dgVoodooCpl.exe/functions/14000f5f8_FUN_14000f5f8.c) has the same message anchors. Ghidra represents the stored object as `HWND` in several expressions; pointer arithmetic on that inferred type should not be copied as a recovered C++ structure definition.

## Code and import landmarks

Both EXEs import the same set of **102 symbols from six DLLs**. Import order differs in a few places; addresses are architecture-specific. The following are useful search seeds, not proof of a particular call path:

- `DialogBoxParamW`, `CreateDialogParamW`, `DialogBoxIndirectParamW`, `CreateDialogIndirectParamW`, `GetDlgItem`, `SendMessageW`, and `LoadStringW` identify dialog construction, message dispatch, and tooltip/string use.
- `CreateFileA/W`, `ReadFile`, `WriteFile`, `GetFileSizeEx`, and `SetFilePointer` are starting points for configuration-file I/O. Follow callers to determine actual paths, serialization, validation, and error handling.
- `LoadLibraryA/W`, `GetProcAddress`, and `FreeLibrary` indicate dynamic API resolution. Imports alone do not identify all libraries used by the control panel.
- `CoCreateInstance`, `SHGetFolderPathW`, `PathAppendW`, and `ShellExecuteW` are starting points for folder selection, paths, and shell actions. Their presence alone does not prove each particular UI action uses them.

The PE application manifests declare `asInvoker`, Windows Common Controls 6.0, and per-monitor DPI awareness (`True/PM` plus `PerMonitorV2, PerMonitorV`). Those are requested process attributes encoded in the resources; they are not observations of OS behavior on this machine.

Full imports, RVAs/VAs, section layout, debug records, and runtime-function metadata are in the [x64 metadata](../inventory/metadata/dgVoodooCpl.exe.json) and [ARM64 metadata](../inventory/metadata/Cpl/arm64/dgVoodooCpl.exe.json). For x64, pefile reports one chained-unwind parser warning; the raw exception-table records are still retained. The binaries contain no managed CLI directory, so their decompiled output is native pseudocode rather than recovered managed-language source.

To reproduce the dialog index after resource extraction:

```sh
python3 scripts/inspect_control_panels.py
```
