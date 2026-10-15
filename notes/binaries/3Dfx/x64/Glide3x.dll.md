# 3Dfx/x64/Glide3x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x60a3c`.
- Supplied SHA-256: `0931cb2c35a76c57d16cc92c1acf49018dbf6f267237895f7ffafaad8b596612`.
- Prepared SHA-256: `0931cb2c35a76c57d16cc92c1acf49018dbf6f267237895f7ffafaad8b596612`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x64/Glide3x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/full_decompilation.c) | 1,271 | 1,271 | 0 | 3,291 | 2,923 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x64 navigation:** [Functions](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x64/Glide3x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x64/Glide3x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x64/Glide3x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x64/Glide3x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x64/Glide3x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x64/Glide3x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x64/Glide3x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x5c328` | `0x5c363` | `7408` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18005c328_FUN_18005c328.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_grAADrawTriangle@24` | `0x124c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000124c__grAADrawTriangle_24.c) |
| 2 | `_grAlphaBlendFunction@16` | `0x1738` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001738__grAlphaBlendFunction_16.c) |
| 3 | `_grAlphaCombine@20` | `0x1760` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001760__grAlphaCombine_20.c) |
| 4 | `_grAlphaControlsITRGBLighting@4` | `0x1790` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001790__grAlphaControlsITRGBLighting_4.c) |
| 5 | `_grAlphaTestFunction@4` | `0x17e0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800017e0__grAlphaTestFunction_4.c) |
| 6 | `_grAlphaTestReferenceValue@4` | `0x17f8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800017f8__grAlphaTestReferenceValue_4.c) |
| 7 | `_grAuxBufferExt@4` | `0x1328` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001328__grAuxBufferExt_4.c) |
| 8 | `_grBufferClear@12` | `0x12c8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800012c8__grBufferClear_12.c) |
| 9 | `_grBufferSwap@4` | `0x12ec` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800012ec__grBufferSwap_4.c) |
| 10 | `_grChromaRangeExt@12` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800018dc__grChromaRangeExt_12.c) |
| 11 | `_grChromaRangeModeExt@4` | `0x187c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000187c__grChromaRangeModeExt_4.c) |
| 12 | `_grChromakeyMode@4` | `0x184c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000184c__grChromakeyMode_4.c) |
| 13 | `_grChromakeyValue@4` | `0x1864` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001864__grChromakeyValue_4.c) |
| 14 | `_grClipWindow@16` | `0x1afc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001afc__grClipWindow_16.c) |
| 15 | `_grColorCombine@20` | `0x1b24` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b24__grColorCombine_20.c) |
| 16 | `_grColorMask@8` | `0x1b54` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b54__grColorMask_8.c) |
| 17 | `_grConstantColorValue@4` | `0x1be8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001be8__grConstantColorValue_4.c) |
| 18 | `_grCoordinateSpace@4` | `0x2194` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002194__grCoordinateSpace_4.c) |
| 19 | `_grCullMode@4` | `0x1b74` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b74__grCullMode_4.c) |
| 20 | `_grDepthBiasLevel@4` | `0x1c48` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001c48__grDepthBiasLevel_4.c) |
| 21 | `_grDepthBufferFunction@4` | `0x1c98` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001c98__grDepthBufferFunction_4.c) |
| 22 | `_grDepthBufferMode@4` | `0x1cec` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001cec__grDepthBufferMode_4.c) |
| 23 | `_grDepthMask@4` | `0x1d04` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d04__grDepthMask_4.c) |
| 24 | `_grDepthRange@8` | `0x21cc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800021cc__grDepthRange_8.c) |
| 25 | `_grDisable@4` | `0x2130` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002130__grDisable_4.c) |
| 26 | `_grDisableAllEffects@0` | `0x1d1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d1c__grDisableAllEffects_0.c) |
| 27 | `_grDitherMode@4` | `0x1d84` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d84__grDitherMode_4.c) |
| 28 | `_grDrawLine@8` | `0x10b0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800010b0__grDrawLine_8.c) |
| 29 | `_grDrawPoint@4` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001060__grDrawPoint_4.c) |
| 30 | `_grDrawTriangle@12` | `0x1110` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001110__grDrawTriangle_12.c) |
| 31 | `_grDrawVertexArray@12` | `0x1190` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001190__grDrawVertexArray_12.c) |
| 32 | `_grDrawVertexArrayContiguous@16` | `0x11e8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800011e8__grDrawVertexArrayContiguous_16.c) |
| 33 | `_grEnable@4` | `0x206c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000206c__grEnable_4.c) |
| 34 | `_grErrorSetCallback@4` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 35 | `_grFinish@0` | `0x153c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000153c__grFinish_0.c) |
| 36 | `_grFlush@0` | `0x1578` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001578__grFlush_0.c) |
| 37 | `_grFogColorValue@4` | `0x1dd8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001dd8__grFogColorValue_4.c) |
| 38 | `_grFogMode@4` | `0x1e38` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001e38__grFogMode_4.c) |
| 39 | `_grFogTable@4` | `0x1e50` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001e50__grFogTable_4.c) |
| 40 | `_grGet@12` | `0x1f08` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001f08__grGet_12.c) |
| 41 | `_grGetGammaTableExt@16` | `0x31d0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800031d0__grGetGammaTableExt_16.c) |
| 42 | `_grGetProcAddress@4` | `0x33bc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800033bc__grGetProcAddress_4.c) |
| 43 | `_grGetString@4` | `0x1f2c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001f2c__grGetString_4.c) |
| 44 | `_grGlideGetState@4` | `0x2e04` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e04__grGlideGetState_4.c) |
| 45 | `_grGlideGetVertexLayout@4` | `0x2e38` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e38__grGlideGetVertexLayout_4.c) |
| 46 | `_grGlideInit@0` | `0x2de4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002de4__grGlideInit_0.c) |
| 47 | `_grGlideSetState@4` | `0x2e1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e1c__grGlideSetState_4.c) |
| 48 | `_grGlideSetVertexLayout@4` | `0x2e94` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e94__grGlideSetVertexLayout_4.c) |
| 49 | `_grGlideShutdown@0` | `0x2dfc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002dfc__grGlideShutdown_0.c) |
| 50 | `_grLfbConstantAlpha@4` | `0x2b94` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002b94__grLfbConstantAlpha_4.c) |
| 51 | `_grLfbConstantDepth@4` | `0x2be8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002be8__grLfbConstantDepth_4.c) |
| 52 | `_grLfbLock@24` | `0x2a7c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002a7c__grLfbLock_24.c) |
| 53 | `_grLfbReadRegion@28` | `0x2cfc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002cfc__grLfbReadRegion_28.c) |
| 54 | `_grLfbUnlock@8` | `0x2b00` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002b00__grLfbUnlock_8.c) |
| 55 | `_grLfbWriteColorFormat@4` | `0x2c3c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002c3c__grLfbWriteColorFormat_4.c) |
| 56 | `_grLfbWriteColorSwizzle@8` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 57 | `_grLfbWriteRegion@36` | `0x2c90` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002c90__grLfbWriteRegion_36.c) |
| 58 | `_grLoadGammaTable@16` | `0x1eac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001eac__grLoadGammaTable_16.c) |
| 59 | `_grQueryResolutions@8` | `0x200c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000200c__grQueryResolutions_8.c) |
| 60 | `_grRenderBuffer@4` | `0x1310` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001310__grRenderBuffer_4.c) |
| 61 | `_grReset@4` | `0x202c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000202c__grReset_4.c) |
| 62 | `_grSelectContext@4` | `0x1690` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001690__grSelectContext_4.c) |
| 63 | `_grSetNumPendingBuffers@4` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 64 | `_grSplash@20` | `0x1ed0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001ed0__grSplash_20.c) |
| 65 | `_grSstOrigin@4` | `0x16a8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800016a8__grSstOrigin_4.c) |
| 66 | `_grSstSelect@4` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 67 | `_grSstWinClose@4` | `0x1674` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001674__grSstWinClose_4.c) |
| 68 | `_grSstWinOpen@28` | `0x15a4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800015a4__grSstWinOpen_28.c) |
| 69 | `_grTexCalcMemRequired@16` | `0x2248` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002248__grTexCalcMemRequired_16.c) |
| 70 | `_grTexChromaModeExt@8` | `0x19b4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800019b4__grTexChromaModeExt_8.c) |
| 71 | `_grTexChromaRangeExt@16` | `0x1a1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001a1c__grTexChromaRangeExt_16.c) |
| 72 | `_grTexClampMode@12` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800023bc__grTexClampMode_12.c) |
| 73 | `_grTexCombine@28` | `0x2444` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002444__grTexCombine_28.c) |
| 74 | `_grTexDetailControl@16` | `0x2588` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002588__grTexDetailControl_16.c) |
| 75 | `_grTexDownloadMipMap@16` | `0x2774` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002774__grTexDownloadMipMap_16.c) |
| 76 | `_grTexDownloadMipMapLevel@32` | `0x27c0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800027c0__grTexDownloadMipMapLevel_32.c) |
| 77 | `_grTexDownloadMipMapLevelPartial@40` | `0x2874` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002874__grTexDownloadMipMapLevelPartial_40.c) |
| 78 | `_grTexDownloadTable@8` | `0x28e0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800028e0__grTexDownloadTable_8.c) |
| 79 | `_grTexDownloadTablePartial@16` | `0x293c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000293c__grTexDownloadTablePartial_16.c) |
| 80 | `_grTexFilterMode@12` | `0x2648` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002648__grTexFilterMode_12.c) |
| 81 | `_grTexLodBiasValue@8` | `0x26d0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800026d0__grTexLodBiasValue_8.c) |
| 82 | `_grTexMaxAddress@4` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800022b0__grTexMaxAddress_4.c) |
| 83 | `_grTexMinAddress@4` | `0x22a0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800022a0__grTexMinAddress_4.c) |
| 84 | `_grTexMipMapMode@12` | `0x2964` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002964__grTexMipMapMode_12.c) |
| 85 | `_grTexMultibase@8` | `0x29e8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800029e8__grTexMultibase_8.c) |
| 86 | `_grTexMultibaseAddress@20` | `0x2a48` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002a48__grTexMultibaseAddress_20.c) |
| 87 | `_grTexNCCTable@4` | `0x2318` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002318__grTexNCCTable_4.c) |
| 88 | `_grTexSource@16` | `0x238c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000238c__grTexSource_16.c) |
| 89 | `_grTexTextureMemRequired@8` | `0x2274` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002274__grTexTextureMemRequired_8.c) |
| 90 | `_grTextureAuxBufferExt@28` | `0x13c4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800013c4__grTextureAuxBufferExt_28.c) |
| 91 | `_grTextureBufferExt@28` | `0x1380` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001380__grTextureBufferExt_28.c) |
| 92 | `_grVertexLayout@12` | `0x116c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000116c__grVertexLayout_12.c) |
| 93 | `_grViewport@16` | `0x2204` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002204__grViewport_16.c) |
| 94 | `_gu3dfGetInfo@8` | `0x326c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000326c__gu3dfGetInfo_8.c) |
| 95 | `_gu3dfLoad@8` | `0x32ac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800032ac__gu3dfLoad_8.c) |
| 96 | `_guFogGenerateExp2@8` | `0x2fd8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002fd8__guFogGenerateExp2_8.c) |
| 97 | `_guFogGenerateExp@8` | `0x2ef8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002ef8__guFogGenerateExp_8.c) |
| 98 | `_guFogGenerateLinear@12` | `0x30d8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800030d8__guFogGenerateLinear_12.c) |
| 99 | `_guFogTableIndexToW@4` | `0x2eac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002eac__guFogTableIndexToW_4.c) |
| 100 | `_guGammaCorrectionRGB@12` | `0x317c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000317c__guGammaCorrectionRGB_12.c) |
| 101 | `grAADrawTriangle` | `0x124c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000124c__grAADrawTriangle_24.c) |
| 102 | `grAlphaBlendFunction` | `0x1738` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001738__grAlphaBlendFunction_16.c) |
| 103 | `grAlphaCombine` | `0x1760` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001760__grAlphaCombine_20.c) |
| 104 | `grAlphaControlsITRGBLighting` | `0x1790` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001790__grAlphaControlsITRGBLighting_4.c) |
| 105 | `grAlphaTestFunction` | `0x17e0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800017e0__grAlphaTestFunction_4.c) |
| 106 | `grAlphaTestReferenceValue` | `0x17f8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800017f8__grAlphaTestReferenceValue_4.c) |
| 107 | `grAuxBufferExt` | `0x1328` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001328__grAuxBufferExt_4.c) |
| 108 | `grBufferClear` | `0x12c8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800012c8__grBufferClear_12.c) |
| 109 | `grBufferSwap` | `0x12ec` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800012ec__grBufferSwap_4.c) |
| 110 | `grChromaRangeExt` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800018dc__grChromaRangeExt_12.c) |
| 111 | `grChromaRangeModeExt` | `0x187c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000187c__grChromaRangeModeExt_4.c) |
| 112 | `grChromakeyMode` | `0x184c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000184c__grChromakeyMode_4.c) |
| 113 | `grChromakeyValue` | `0x1864` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001864__grChromakeyValue_4.c) |
| 114 | `grClipWindow` | `0x1afc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001afc__grClipWindow_16.c) |
| 115 | `grColorCombine` | `0x1b24` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b24__grColorCombine_20.c) |
| 116 | `grColorMask` | `0x1b54` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b54__grColorMask_8.c) |
| 117 | `grConstantColorValue` | `0x1be8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001be8__grConstantColorValue_4.c) |
| 118 | `grCoordinateSpace` | `0x2194` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002194__grCoordinateSpace_4.c) |
| 119 | `grCullMode` | `0x1b74` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001b74__grCullMode_4.c) |
| 120 | `grDepthBiasLevel` | `0x1c48` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001c48__grDepthBiasLevel_4.c) |
| 121 | `grDepthBufferFunction` | `0x1c98` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001c98__grDepthBufferFunction_4.c) |
| 122 | `grDepthBufferMode` | `0x1cec` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001cec__grDepthBufferMode_4.c) |
| 123 | `grDepthMask` | `0x1d04` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d04__grDepthMask_4.c) |
| 124 | `grDepthRange` | `0x21cc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800021cc__grDepthRange_8.c) |
| 125 | `grDisable` | `0x2130` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002130__grDisable_4.c) |
| 126 | `grDisableAllEffects` | `0x1d1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d1c__grDisableAllEffects_0.c) |
| 127 | `grDitherMode` | `0x1d84` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001d84__grDitherMode_4.c) |
| 128 | `grDrawLine` | `0x10b0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800010b0__grDrawLine_8.c) |
| 129 | `grDrawPoint` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001060__grDrawPoint_4.c) |
| 130 | `grDrawTriangle` | `0x1110` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001110__grDrawTriangle_12.c) |
| 131 | `grDrawVertexArray` | `0x1190` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001190__grDrawVertexArray_12.c) |
| 132 | `grDrawVertexArrayContiguous` | `0x11e8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800011e8__grDrawVertexArrayContiguous_16.c) |
| 133 | `grEnable` | `0x206c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000206c__grEnable_4.c) |
| 134 | `grErrorSetCallback` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 135 | `grFinish` | `0x153c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000153c__grFinish_0.c) |
| 136 | `grFlush` | `0x1578` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001578__grFlush_0.c) |
| 137 | `grFogColorValue` | `0x1dd8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001dd8__grFogColorValue_4.c) |
| 138 | `grFogMode` | `0x1e38` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001e38__grFogMode_4.c) |
| 139 | `grFogTable` | `0x1e50` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001e50__grFogTable_4.c) |
| 140 | `grGet` | `0x1f08` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001f08__grGet_12.c) |
| 141 | `grGetGammaTableExt` | `0x31d0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800031d0__grGetGammaTableExt_16.c) |
| 142 | `grGetProcAddress` | `0x33bc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800033bc__grGetProcAddress_4.c) |
| 143 | `grGetString` | `0x1f2c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001f2c__grGetString_4.c) |
| 144 | `grGlideGetState` | `0x2e04` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e04__grGlideGetState_4.c) |
| 145 | `grGlideGetVertexLayout` | `0x2e38` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e38__grGlideGetVertexLayout_4.c) |
| 146 | `grGlideInit` | `0x2de4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002de4__grGlideInit_0.c) |
| 147 | `grGlideSetState` | `0x2e1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e1c__grGlideSetState_4.c) |
| 148 | `grGlideSetVertexLayout` | `0x2e94` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002e94__grGlideSetVertexLayout_4.c) |
| 149 | `grGlideShutdown` | `0x2dfc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002dfc__grGlideShutdown_0.c) |
| 150 | `grLfbConstantAlpha` | `0x2b94` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002b94__grLfbConstantAlpha_4.c) |
| 151 | `grLfbConstantDepth` | `0x2be8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002be8__grLfbConstantDepth_4.c) |
| 152 | `grLfbLock` | `0x2a7c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002a7c__grLfbLock_24.c) |
| 153 | `grLfbReadRegion` | `0x2cfc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002cfc__grLfbReadRegion_28.c) |
| 154 | `grLfbUnlock` | `0x2b00` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002b00__grLfbUnlock_8.c) |
| 155 | `grLfbWriteColorFormat` | `0x2c3c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002c3c__grLfbWriteColorFormat_4.c) |
| 156 | `grLfbWriteColorSwizzle` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 157 | `grLfbWriteRegion` | `0x2c90` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002c90__grLfbWriteRegion_36.c) |
| 158 | `grLoadGammaTable` | `0x1eac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001eac__grLoadGammaTable_16.c) |
| 159 | `grQueryResolutions` | `0x200c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000200c__grQueryResolutions_8.c) |
| 160 | `grRenderBuffer` | `0x1310` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001310__grRenderBuffer_4.c) |
| 161 | `grReset` | `0x202c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000202c__grReset_4.c) |
| 162 | `grSelectContext` | `0x1690` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001690__grSelectContext_4.c) |
| 163 | `grSetNumPendingBuffers` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 164 | `grSplash` | `0x1ed0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001ed0__grSplash_20.c) |
| 165 | `grSstOrigin` | `0x16a8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800016a8__grSstOrigin_4.c) |
| 166 | `grSstSelect` | `0x130c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000130c__grErrorSetCallback_4.c) |
| 167 | `grSstWinClose` | `0x1674` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001674__grSstWinClose_4.c) |
| 168 | `grSstWinOpen` | `0x15a4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800015a4__grSstWinOpen_28.c) |
| 169 | `grTexCalcMemRequired` | `0x2248` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002248__grTexCalcMemRequired_16.c) |
| 170 | `grTexChromaModeExt` | `0x19b4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800019b4__grTexChromaModeExt_8.c) |
| 171 | `grTexChromaRangeExt` | `0x1a1c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001a1c__grTexChromaRangeExt_16.c) |
| 172 | `grTexClampMode` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800023bc__grTexClampMode_12.c) |
| 173 | `grTexCombine` | `0x2444` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002444__grTexCombine_28.c) |
| 174 | `grTexDetailControl` | `0x2588` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002588__grTexDetailControl_16.c) |
| 175 | `grTexDownloadMipMap` | `0x2774` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002774__grTexDownloadMipMap_16.c) |
| 176 | `grTexDownloadMipMapLevel` | `0x27c0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800027c0__grTexDownloadMipMapLevel_32.c) |
| 177 | `grTexDownloadMipMapLevelPartial` | `0x2874` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002874__grTexDownloadMipMapLevelPartial_40.c) |
| 178 | `grTexDownloadTable` | `0x28e0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800028e0__grTexDownloadTable_8.c) |
| 179 | `grTexDownloadTablePartial` | `0x293c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000293c__grTexDownloadTablePartial_16.c) |
| 180 | `grTexFilterMode` | `0x2648` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002648__grTexFilterMode_12.c) |
| 181 | `grTexLodBiasValue` | `0x26d0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800026d0__grTexLodBiasValue_8.c) |
| 182 | `grTexMaxAddress` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800022b0__grTexMaxAddress_4.c) |
| 183 | `grTexMinAddress` | `0x22a0` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800022a0__grTexMinAddress_4.c) |
| 184 | `grTexMipMapMode` | `0x2964` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002964__grTexMipMapMode_12.c) |
| 185 | `grTexMultibase` | `0x29e8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800029e8__grTexMultibase_8.c) |
| 186 | `grTexMultibaseAddress` | `0x2a48` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002a48__grTexMultibaseAddress_20.c) |
| 187 | `grTexNCCTable` | `0x2318` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002318__grTexNCCTable_4.c) |
| 188 | `grTexSource` | `0x238c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000238c__grTexSource_16.c) |
| 189 | `grTexTextureMemRequired` | `0x2274` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002274__grTexTextureMemRequired_8.c) |
| 190 | `grTextureAuxBufferExt` | `0x13c4` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800013c4__grTextureAuxBufferExt_28.c) |
| 191 | `grTextureBufferExt` | `0x1380` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180001380__grTextureBufferExt_28.c) |
| 192 | `grVertexLayout` | `0x116c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000116c__grVertexLayout_12.c) |
| 193 | `grViewport` | `0x2204` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002204__grViewport_16.c) |
| 194 | `gu3dfGetInfo` | `0x326c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000326c__gu3dfGetInfo_8.c) |
| 195 | `gu3dfLoad` | `0x32ac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800032ac__gu3dfLoad_8.c) |
| 196 | `guFogGenerateExp` | `0x2ef8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002ef8__guFogGenerateExp_8.c) |
| 197 | `guFogGenerateExp2` | `0x2fd8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002fd8__guFogGenerateExp2_8.c) |
| 198 | `guFogGenerateLinear` | `0x30d8` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/1800030d8__guFogGenerateLinear_12.c) |
| 199 | `guFogTableIndexToW` | `0x2eac` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/180002eac__guFogTableIndexToW_4.c) |
| 200 | `guGammaCorrectionRGB` | `0x317c` | [x64](../../../../decompiled/3Dfx/x64/Glide3x.dll/functions/18000317c__guGammaCorrectionRGB_12.c) |
