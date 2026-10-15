# 3Dfx/x86/Napalm/Glide3x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x5562d`.
- Supplied SHA-256: `d651809ad4bd748644de4e104f0ecfdbdd8610f0683b35efe88141650effe248`.
- Prepared SHA-256: `d651809ad4bd748644de4e104f0ecfdbdd8610f0683b35efe88141650effe248`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../../inventory/metadata/3Dfx/x86/Napalm/Glide3x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/full_decompilation.c) | 1,689 | 1,689 | 0 | 1,679 | 1,678 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions.tsv) · [Calls](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/calls.tsv) · [Assembly](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/assembly.tsv) · [Strings](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/strings.tsv) · [Symbols](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/symbols.tsv) · [Coverage](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../../resources/3Dfx/x86/Napalm/Glide3x.dll/manifest.json) and [byte-offset string index](../../../../../resources/3Dfx/x86/Napalm/Glide3x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x52589` | `0x525d4` | `b000` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10052589_FUN_10052589.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_grAADrawTriangle@24` | `0x13c5` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100013c5_grAADrawTriangle.c) |
| 2 | `_grAlphaBlendFunction@16` | `0x15b0` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100015b0_grAlphaBlendFunction.c) |
| 3 | `_grAlphaBlendFunctionExt@24` | `0x2435` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002435_grAlphaBlendFunctionExt.c) |
| 4 | `_grAlphaCombine@20` | `0x15cf` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100015cf_grAlphaCombine.c) |
| 5 | `_grAlphaCombineExt@40` | `0x2383` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002383_grAlphaCombineExt.c) |
| 6 | `_grAlphaControlsITRGBLighting@4` | `0x15f1` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100015f1_grAlphaControlsITRGBLighting.c) |
| 7 | `_grAlphaTestFunction@4` | `0x1634` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001634_grAlphaTestFunction.c) |
| 8 | `_grAlphaTestReferenceValue@4` | `0x164a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000164a_grAlphaTestReferenceValue.c) |
| 9 | `_grAuxBufferExt@4` | `0x1465` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001465_grAuxBufferExt.c) |
| 10 | `_grBufferClear@12` | `0x1411` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001411_grBufferClear.c) |
| 11 | `_grBufferClearExt@16` | `0x2523` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002523_grBufferClearExt.c) |
| 12 | `_grBufferSwap@4` | `0x142d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000142d_grBufferSwap.c) |
| 13 | `_grChromaRangeExt@12` | `0x1709` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001709_grChromaRangeExt.c) |
| 14 | `_grChromaRangeModeExt@4` | `0x16b9` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100016b9_grChromaRangeModeExt.c) |
| 15 | `_grChromakeyMode@4` | `0x168d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000168d_grChromakeyMode.c) |
| 16 | `_grChromakeyValue@4` | `0x16a3` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100016a3_grChromakeyValue.c) |
| 17 | `_grClipWindow@16` | `0x17a2` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100017a2_grClipWindow.c) |
| 18 | `_grColorCombine@20` | `0x17c1` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100017c1_grColorCombine.c) |
| 19 | `_grColorCombineExt@40` | `0x2352` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002352_grColorCombineExt.c) |
| 20 | `_grColorMask@8` | `0x17e4` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100017e4_grColorMask.c) |
| 21 | `_grColorMaskExt@16` | `0x2504` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002504_grColorMaskExt.c) |
| 22 | `_grConstantColorValue@4` | `0x185b` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000185b_grConstantColorValue.c) |
| 23 | `_grConstantColorValueExt@8` | `0x241c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000241c_grConstantColorValueExt.c) |
| 24 | `_grCoordinateSpace@4` | `0x1b6a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001b6a_grCoordinateSpace.c) |
| 25 | `_grCullMode@4` | `0x17fd` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100017fd_grCullMode.c) |
| 26 | `_grDepthBiasLevel@4` | `0x18ac` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100018ac_grDepthBiasLevel.c) |
| 27 | `_grDepthBufferFunction@4` | `0x18ef` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100018ef_grDepthBufferFunction.c) |
| 28 | `_grDepthBufferMode@4` | `0x1935` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001935_grDepthBufferMode.c) |
| 29 | `_grDepthMask@4` | `0x194b` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000194b_grDepthMask.c) |
| 30 | `_grDepthRange@8` | `0x1b9d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001b9d_grDepthRange.c) |
| 31 | `_grDeviceQueryExt@8` | `0x257c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000257c_grDeviceQueryExt.c) |
| 32 | `_grDisable@4` | `0x1b54` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001b54_grDisable.c) |
| 33 | `_grDisableAllEffects@0` | `0x1961` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001961_grDisableAllEffects.c) |
| 34 | `_grDitherMode@4` | `0x19ae` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100019ae_grDitherMode.c) |
| 35 | `_grDrawLine@8` | `0x129d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000129d_grDrawLine.c) |
| 36 | `_grDrawPoint@4` | `0x1260` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001260_grDrawPoint.c) |
| 37 | `_grDrawTriangle@12` | `0x12dd` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100012dd_grDrawTriangle.c) |
| 38 | `_grDrawVertexArray@12` | `0x133c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000133c_grDrawVertexArray.c) |
| 39 | `_grDrawVertexArrayContiguous@16` | `0x137f` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000137f_grDrawVertexArrayContiguous.c) |
| 40 | `_grEnable@4` | `0x1b3e` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001b3e_grEnable.c) |
| 41 | `_grErrorSetCallback@4` | `0x144c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 42 | `_grFinish@0` | `0x14fa` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100014fa_grFinish.c) |
| 43 | `_grFlush@0` | `0x1525` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001525_grFlush.c) |
| 44 | `_grFogColorValue@4` | `0x19c4` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100019c4_grFogColorValue.c) |
| 45 | `_grFogMode@4` | `0x1a15` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001a15_grFogMode.c) |
| 46 | `_grFogTable@4` | `0x1a2b` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001a2b_grFogTable.c) |
| 47 | `_grGet@12` | `0x1ac5` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001ac5_grGet.c) |
| 48 | `_grGetGammaTableExt@16` | `0x22b8` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100022b8_grGetGammaTableExt.c) |
| 49 | `_grGetProcAddress@4` | `0x231c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000231c_grGetProcAddress.c) |
| 50 | `_grGetRegistryOrEnvironmentStringExt@4` | `0x256a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000256a_grGetRegistryOrEnvironmentStringExt.c) |
| 51 | `_grGetString@4` | `0x1ae1` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001ae1_grGetString.c) |
| 52 | `_grGlideGetState@4` | `0x2124` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002124_grGlideGetState.c) |
| 53 | `_grGlideGetVertexLayout@4` | `0x2152` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002152_grGlideGetVertexLayout.c) |
| 54 | `_grGlideInit@0` | `0x210c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000210c_grGlideInit.c) |
| 55 | `_grGlideSetState@4` | `0x213a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000213a_grGlideSetState.c) |
| 56 | `_grGlideSetVertexLayout@4` | `0x216f` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000216f_grGlideSetVertexLayout.c) |
| 57 | `_grGlideShutdown@0` | `0x2118` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002118_grGlideShutdown.c) |
| 58 | `_grLfbConstantAlpha@4` | `0x203a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000203a_grLfbConstantAlpha.c) |
| 59 | `_grLfbConstantDepth@4` | `0x2050` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002050_grLfbConstantDepth.c) |
| 60 | `_grLfbConstantStencilExt@4` | `0x24e2` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100024e2_grLfbConstantStencilExt.c) |
| 61 | `_grLfbLock@24` | `0x1f8d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001f8d_grLfbLock.c) |
| 62 | `_grLfbReadRegion@28` | `0x20e4` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100020e4_grLfbReadRegion.c) |
| 63 | `_grLfbUnlock@8` | `0x1fdb` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001fdb_grLfbUnlock.c) |
| 64 | `_grLfbWriteColorFormat@4` | `0x2096` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002096_grLfbWriteColorFormat.c) |
| 65 | `_grLfbWriteColorSwizzle@8` | `0x2093` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002093_grLfbWriteColorSwizzle.c) |
| 66 | `_grLfbWriteRegion@36` | `0x20ac` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100020ac_grLfbWriteRegion.c) |
| 67 | `_grLoadGammaTable@16` | `0x1a74` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001a74_grLoadGammaTable.c) |
| 68 | `_grQueryResolutions@8` | `0x1af0` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001af0_grQueryResolutions.c) |
| 69 | `_grRenderBuffer@4` | `0x144f` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144f_grRenderBuffer.c) |
| 70 | `_grReset@4` | `0x1b09` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001b09_grReset.c) |
| 71 | `_grSelectContext@4` | `0x1581` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001581_grSelectContext.c) |
| 72 | `_grSetNumPendingBuffers@4` | `0x144c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 73 | `_grSplash@20` | `0x1a91` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001a91_grSplash.c) |
| 74 | `_grSstOrigin@4` | `0x159a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000159a_grSstOrigin.c) |
| 75 | `_grSstSelect@4` | `0x144c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 76 | `_grSstWinClose@4` | `0x1568` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001568_grSstWinClose.c) |
| 77 | `_grSstWinOpen@28` | `0x1544` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001544_grSstWinOpen.c) |
| 78 | `_grSstWinOpenExt@32` | `0x232b` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000232b_grSstWinOpenExt.c) |
| 79 | `_grStencilFuncExt@12` | `0x245a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000245a_grStencilFuncExt.c) |
| 80 | `_grStencilMaskExt@4` | `0x2476` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002476_grStencilMaskExt.c) |
| 81 | `_grStencilOpExt@12` | `0x24c6` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100024c6_grStencilOpExt.c) |
| 82 | `_grSurfaceCalcTextureWHDExt@16` | `0x2577` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002577_grSurfaceCalcTextureWHDExt.c) |
| 83 | `_grSurfaceCreateContextExt@4` | `0x2572` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002572_grSurfaceCreateContextExt.c) |
| 84 | `_grSurfaceReleaseContextExt@4` | `0x144c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 85 | `_grSurfaceSetAuxSurfaceExt@4` | `0x144c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 86 | `_grSurfaceSetRenderingSurfaceExt@8` | `0x2093` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002093_grLfbWriteColorSwizzle.c) |
| 87 | `_grSurfaceSetTextureSurfaceExt@8` | `0x2093` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002093_grLfbWriteColorSwizzle.c) |
| 88 | `_grTBufferWriteMaskExt@4` | `0x2554` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002554_grTBufferWriteMaskExt.c) |
| 89 | `_grTexAlphaCombineExt@44` | `0x23e8` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100023e8_grTexAlphaCombineExt.c) |
| 90 | `_grTexCalcMemRequired@16` | `0x1c08` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001c08_grTexCalcMemRequired.c) |
| 91 | `_grTexChromaModeExt@8` | `0x1723` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001723_grTexChromaModeExt.c) |
| 92 | `_grTexChromaRangeExt@16` | `0x1785` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001785_grTexChromaRangeExt.c) |
| 93 | `_grTexClampMode@12` | `0x1d49` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001d49_grTexClampMode.c) |
| 94 | `_grTexColorCombineExt@44` | `0x23b4` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100023b4_grTexColorCombineExt.c) |
| 95 | `_grTexCombine@28` | `0x1d65` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001d65_grTexCombine.c) |
| 96 | `_grTexDetailControl@16` | `0x1d8d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001d8d_grTexDetailControl.c) |
| 97 | `_grTexDownloadMipMap@16` | `0x1de9` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001de9_grTexDownloadMipMap.c) |
| 98 | `_grTexDownloadMipMapLevel@32` | `0x1e16` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001e16_grTexDownloadMipMapLevel.c) |
| 99 | `_grTexDownloadMipMapLevelPartial@40` | `0x1e55` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001e55_grTexDownloadMipMapLevelPartial.c) |
| 100 | `_grTexDownloadTable@8` | `0x1e86` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001e86_grTexDownloadTable.c) |
| 101 | `_grTexDownloadTablePartial@16` | `0x1ed2` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001ed2_grTexDownloadTablePartial.c) |
| 102 | `_grTexFilterMode@12` | `0x1db0` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001db0_grTexFilterMode.c) |
| 103 | `_grTexLodBiasValue@8` | `0x1dcc` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001dcc_grTexLodBiasValue.c) |
| 104 | `_grTexMaxAddress@4` | `0x1c66` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001c66_grTexMaxAddress.c) |
| 105 | `_grTexMinAddress@4` | `0x1c5c` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001c5c_grTexMinAddress.c) |
| 106 | `_grTexMipMapMode@12` | `0x1ef1` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001ef1_grTexMipMapMode.c) |
| 107 | `_grTexMultibase@8` | `0x1f07` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001f07_grTexMultibase.c) |
| 108 | `_grTexMultibaseAddress@20` | `0x1f60` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001f60_grTexMultibaseAddress.c) |
| 109 | `_grTexNCCTable@4` | `0x1cc0` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001cc0_grTexNCCTable.c) |
| 110 | `_grTexSource@16` | `0x1d1d` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001d1d_grTexSource.c) |
| 111 | `_grTexTextureMemRequired@8` | `0x1c31` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001c31_grTexTextureMemRequired.c) |
| 112 | `_grTextureAuxBufferExt@28` | `0x14d2` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100014d2_grTextureAuxBufferExt.c) |
| 113 | `_grTextureBufferExt@28` | `0x14aa` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100014aa_grTextureBufferExt.c) |
| 114 | `_grVertexLayout@12` | `0x1320` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001320_grVertexLayout.c) |
| 115 | `_grViewport@16` | `0x1bd4` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10001bd4_grViewport.c) |
| 116 | `_gu3dfGetInfo@8` | `0x22d7` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/100022d7_gu3dfGetInfo.c) |
| 117 | `_gu3dfLoad@8` | `0x230a` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000230a_gu3dfLoad.c) |
| 118 | `_guFogGenerateExp2@8` | `0x2222` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002222_guFogGenerateExp2.c) |
| 119 | `_guFogGenerateExp@8` | `0x2194` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002194_guFogGenerateExp.c) |
| 120 | `_guFogGenerateLinear@12` | `0x2239` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002239_guFogGenerateLinear.c) |
| 121 | `_guFogTableIndexToW@4` | `0x2185` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/10002185_guFogTableIndexToW.c) |
| 122 | `_guGammaCorrectionRGB@12` | `0x228e` | [x86](../../../../../decompiled/3Dfx/x86/Napalm/Glide3x.dll/functions/1000228e_guGammaCorrectionRGB.c) |
