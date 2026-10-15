# 3Dfx/x86/Glide3x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x5221d`.
- Supplied SHA-256: `219146fa0f1f9ab7a2c85d54e844c609530b33e5a11323cc7948a674e04df438`.
- Prepared SHA-256: `219146fa0f1f9ab7a2c85d54e844c609530b33e5a11323cc7948a674e04df438`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x86/Glide3x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/full_decompilation.c) | 1,619 | 1,619 | 0 | 1,681 | 1,697 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x86/Glide3x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x86/Glide3x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x86/Glide3x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x86/Glide3x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x86/Glide3x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x86/Glide3x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x86/Glide3x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x4f180` | `0x4f1cb` | `b000` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1004f180_FUN_1004f180.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_grAADrawTriangle@24` | `0x13c5` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100013c5_grAADrawTriangle.c) |
| 2 | `_grAlphaBlendFunction@16` | `0x15b0` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100015b0_grAlphaBlendFunction.c) |
| 3 | `_grAlphaCombine@20` | `0x15cf` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100015cf_grAlphaCombine.c) |
| 4 | `_grAlphaControlsITRGBLighting@4` | `0x15f1` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100015f1_grAlphaControlsITRGBLighting.c) |
| 5 | `_grAlphaTestFunction@4` | `0x1634` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001634_grAlphaTestFunction.c) |
| 6 | `_grAlphaTestReferenceValue@4` | `0x164a` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000164a_grAlphaTestReferenceValue.c) |
| 7 | `_grAuxBufferExt@4` | `0x1465` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001465_grAuxBufferExt.c) |
| 8 | `_grBufferClear@12` | `0x1411` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001411_grBufferClear.c) |
| 9 | `_grBufferSwap@4` | `0x142d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000142d_grBufferSwap.c) |
| 10 | `_grChromaRangeExt@12` | `0x1709` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001709_grChromaRangeExt.c) |
| 11 | `_grChromaRangeModeExt@4` | `0x16b9` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100016b9_grChromaRangeModeExt.c) |
| 12 | `_grChromakeyMode@4` | `0x168d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000168d_grChromakeyMode.c) |
| 13 | `_grChromakeyValue@4` | `0x16a3` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100016a3_grChromakeyValue.c) |
| 14 | `_grClipWindow@16` | `0x179f` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000179f_grClipWindow.c) |
| 15 | `_grColorCombine@20` | `0x17be` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100017be_grColorCombine.c) |
| 16 | `_grColorMask@8` | `0x17e1` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100017e1_grColorMask.c) |
| 17 | `_grConstantColorValue@4` | `0x1858` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001858_grConstantColorValue.c) |
| 18 | `_grCoordinateSpace@4` | `0x1bcd` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001bcd_grCoordinateSpace.c) |
| 19 | `_grCullMode@4` | `0x17fa` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100017fa_grCullMode.c) |
| 20 | `_grDepthBiasLevel@4` | `0x18a9` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100018a9_grDepthBiasLevel.c) |
| 21 | `_grDepthBufferFunction@4` | `0x18ec` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100018ec_grDepthBufferFunction.c) |
| 22 | `_grDepthBufferMode@4` | `0x1932` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001932_grDepthBufferMode.c) |
| 23 | `_grDepthMask@4` | `0x1948` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001948_grDepthMask.c) |
| 24 | `_grDepthRange@8` | `0x1c00` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001c00_grDepthRange.c) |
| 25 | `_grDisable@4` | `0x1b84` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001b84_grDisable.c) |
| 26 | `_grDisableAllEffects@0` | `0x195e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000195e_grDisableAllEffects.c) |
| 27 | `_grDitherMode@4` | `0x19ab` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100019ab_grDitherMode.c) |
| 28 | `_grDrawLine@8` | `0x129d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000129d_grDrawLine.c) |
| 29 | `_grDrawPoint@4` | `0x1260` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001260_grDrawPoint.c) |
| 30 | `_grDrawTriangle@12` | `0x12dd` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100012dd_grDrawTriangle.c) |
| 31 | `_grDrawVertexArray@12` | `0x133c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000133c_grDrawVertexArray.c) |
| 32 | `_grDrawVertexArrayContiguous@16` | `0x137f` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000137f_grDrawVertexArrayContiguous.c) |
| 33 | `_grEnable@4` | `0x1b3b` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001b3b_grEnable.c) |
| 34 | `_grErrorSetCallback@4` | `0x144c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 35 | `_grFinish@0` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100014fa_grFinish.c) |
| 36 | `_grFlush@0` | `0x1525` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001525_grFlush.c) |
| 37 | `_grFogColorValue@4` | `0x19c1` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100019c1_grFogColorValue.c) |
| 38 | `_grFogMode@4` | `0x1a12` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001a12_grFogMode.c) |
| 39 | `_grFogTable@4` | `0x1a28` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001a28_grFogTable.c) |
| 40 | `_grGet@12` | `0x1ac2` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001ac2_grGet.c) |
| 41 | `_grGetGammaTableExt@16` | `0x230c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000230c_grGetGammaTableExt.c) |
| 42 | `_grGetProcAddress@4` | `0x2370` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002370_grGetProcAddress.c) |
| 43 | `_grGetString@4` | `0x1ade` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001ade_grGetString.c) |
| 44 | `_grGlideGetState@4` | `0x2178` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002178_grGlideGetState.c) |
| 45 | `_grGlideGetVertexLayout@4` | `0x21a6` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100021a6_grGlideGetVertexLayout.c) |
| 46 | `_grGlideInit@0` | `0x2160` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002160_grGlideInit.c) |
| 47 | `_grGlideSetState@4` | `0x218e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000218e_grGlideSetState.c) |
| 48 | `_grGlideSetVertexLayout@4` | `0x21c3` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100021c3_grGlideSetVertexLayout.c) |
| 49 | `_grGlideShutdown@0` | `0x216c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000216c_grGlideShutdown.c) |
| 50 | `_grLfbConstantAlpha@4` | `0x208e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000208e_grLfbConstantAlpha.c) |
| 51 | `_grLfbConstantDepth@4` | `0x20a4` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100020a4_grLfbConstantDepth.c) |
| 52 | `_grLfbLock@24` | `0x1fe1` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001fe1_grLfbLock.c) |
| 53 | `_grLfbReadRegion@28` | `0x2138` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002138_grLfbReadRegion.c) |
| 54 | `_grLfbUnlock@8` | `0x202f` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000202f_grLfbUnlock.c) |
| 55 | `_grLfbWriteColorFormat@4` | `0x20ea` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100020ea_grLfbWriteColorFormat.c) |
| 56 | `_grLfbWriteColorSwizzle@8` | `0x20e7` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100020e7_grLfbWriteColorSwizzle.c) |
| 57 | `_grLfbWriteRegion@36` | `0x2100` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002100_grLfbWriteRegion.c) |
| 58 | `_grLoadGammaTable@16` | `0x1a71` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001a71_grLoadGammaTable.c) |
| 59 | `_grQueryResolutions@8` | `0x1aed` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001aed_grQueryResolutions.c) |
| 60 | `_grRenderBuffer@4` | `0x144f` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000144f_grRenderBuffer.c) |
| 61 | `_grReset@4` | `0x1b06` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001b06_grReset.c) |
| 62 | `_grSelectContext@4` | `0x1581` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001581_grSelectContext.c) |
| 63 | `_grSetNumPendingBuffers@4` | `0x144c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 64 | `_grSplash@20` | `0x1a8e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001a8e_grSplash.c) |
| 65 | `_grSstOrigin@4` | `0x159a` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000159a_grSstOrigin.c) |
| 66 | `_grSstSelect@4` | `0x144c` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000144c_grErrorSetCallback.c) |
| 67 | `_grSstWinClose@4` | `0x1568` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001568_grSstWinClose.c) |
| 68 | `_grSstWinOpen@28` | `0x1544` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001544_grSstWinOpen.c) |
| 69 | `_grTexCalcMemRequired@16` | `0x1c6b` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001c6b_grTexCalcMemRequired.c) |
| 70 | `_grTexChromaModeExt@8` | `0x1723` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001723_grTexChromaModeExt.c) |
| 71 | `_grTexChromaRangeExt@16` | `0x1782` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001782_grTexChromaRangeExt.c) |
| 72 | `_grTexClampMode@12` | `0x1dac` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001dac_grTexClampMode.c) |
| 73 | `_grTexCombine@28` | `0x1dc2` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001dc2_grTexCombine.c) |
| 74 | `_grTexDetailControl@16` | `0x1dea` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001dea_grTexDetailControl.c) |
| 75 | `_grTexDownloadMipMap@16` | `0x1e40` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001e40_grTexDownloadMipMap.c) |
| 76 | `_grTexDownloadMipMapLevel@32` | `0x1e6d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001e6d_grTexDownloadMipMapLevel.c) |
| 77 | `_grTexDownloadMipMapLevelPartial@40` | `0x1eac` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001eac_grTexDownloadMipMapLevelPartial.c) |
| 78 | `_grTexDownloadTable@8` | `0x1edd` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001edd_grTexDownloadTable.c) |
| 79 | `_grTexDownloadTablePartial@16` | `0x1f29` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001f29_grTexDownloadTablePartial.c) |
| 80 | `_grTexFilterMode@12` | `0x1e0d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001e0d_grTexFilterMode.c) |
| 81 | `_grTexLodBiasValue@8` | `0x1e23` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001e23_grTexLodBiasValue.c) |
| 82 | `_grTexMaxAddress@4` | `0x1cc9` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001cc9_grTexMaxAddress.c) |
| 83 | `_grTexMinAddress@4` | `0x1cbf` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001cbf_grTexMinAddress.c) |
| 84 | `_grTexMipMapMode@12` | `0x1f48` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001f48_grTexMipMapMode.c) |
| 85 | `_grTexMultibase@8` | `0x1f5e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001f5e_grTexMultibase.c) |
| 86 | `_grTexMultibaseAddress@20` | `0x1fb4` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001fb4_grTexMultibaseAddress.c) |
| 87 | `_grTexNCCTable@4` | `0x1d23` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001d23_grTexNCCTable.c) |
| 88 | `_grTexSource@16` | `0x1d80` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001d80_grTexSource.c) |
| 89 | `_grTexTextureMemRequired@8` | `0x1c94` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001c94_grTexTextureMemRequired.c) |
| 90 | `_grTextureAuxBufferExt@28` | `0x14d2` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100014d2_grTextureAuxBufferExt.c) |
| 91 | `_grTextureBufferExt@28` | `0x14aa` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100014aa_grTextureBufferExt.c) |
| 92 | `_grVertexLayout@12` | `0x1320` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001320_grVertexLayout.c) |
| 93 | `_grViewport@16` | `0x1c37` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10001c37_grViewport.c) |
| 94 | `_gu3dfGetInfo@8` | `0x232b` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000232b_gu3dfGetInfo.c) |
| 95 | `_gu3dfLoad@8` | `0x235e` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000235e_gu3dfLoad.c) |
| 96 | `_guFogGenerateExp2@8` | `0x2276` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/10002276_guFogGenerateExp2.c) |
| 97 | `_guFogGenerateExp@8` | `0x21e8` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100021e8_guFogGenerateExp.c) |
| 98 | `_guFogGenerateLinear@12` | `0x228d` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/1000228d_guFogGenerateLinear.c) |
| 99 | `_guFogTableIndexToW@4` | `0x21d9` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100021d9_guFogTableIndexToW.c) |
| 100 | `_guGammaCorrectionRGB@12` | `0x22e2` | [x86](../../../../decompiled/3Dfx/x86/Glide3x.dll/functions/100022e2_guGammaCorrectionRGB.c) |
