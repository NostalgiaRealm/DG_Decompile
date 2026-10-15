# 3Dfx/x64/Glide2x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x5d69c`.
- Supplied SHA-256: `9b43fca9bfefc858cb05a25ed316d2c56e40f6c351c9e698efa05c3f0fa90ef1`.
- Prepared SHA-256: `9b43fca9bfefc858cb05a25ed316d2c56e40f6c351c9e698efa05c3f0fa90ef1`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x64/Glide2x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/full_decompilation.c) | 1,245 | 1,245 | 0 | 3,102 | 2,981 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x64 navigation:** [Functions](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x64/Glide2x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x64/Glide2x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x64/Glide2x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x64/Glide2x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x64/Glide2x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x64/Glide2x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x64/Glide2x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x59d1c` | `0x59d57` | `7408` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180059d1c_FUN_180059d1c.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `ConvertAndDownLoadRLE` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 2 | `ConvertAndDownloadRle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 3 | `_ConvertAndDownLoadRLE@64` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 4 | `_ConvertAndDownloadRle@64` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 5 | `_grAADrawLine@8` | `0x11dc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800011dc__grAADrawLine_8.c) |
| 6 | `_grAADrawPoint@4` | `0x11a8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800011a8__grAADrawPoint_4.c) |
| 7 | `_grAADrawPolygon@12` | `0x1284` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001284__grAADrawPolygon_12.c) |
| 8 | `_grAADrawPolygonVertexList@8` | `0x12d0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800012d0__grAADrawPolygonVertexList_8.c) |
| 9 | `_grAADrawTriangle@24` | `0x1218` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001218__grAADrawTriangle_24.c) |
| 10 | `_grAlphaBlendFunction@16` | `0x196c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000196c__grAlphaBlendFunction_16.c) |
| 11 | `_grAlphaCombine@20` | `0x1994` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001994__grAlphaCombine_20.c) |
| 12 | `_grAlphaControlsITRGBLighting@4` | `0x19c4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800019c4__grAlphaControlsITRGBLighting_4.c) |
| 13 | `_grAlphaTestFunction@4` | `0x1a14` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a14__grAlphaTestFunction_4.c) |
| 14 | `_grAlphaTestReferenceValue@4` | `0x1a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a2c__grAlphaTestReferenceValue_4.c) |
| 15 | `_grBufferClear@12` | `0x1314` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001314__grBufferClear_12.c) |
| 16 | `_grBufferNumPending@0` | `0x1338` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001338__grBufferNumPending_0.c) |
| 17 | `_grBufferSwap@4` | `0x1368` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001368__grBufferSwap_4.c) |
| 18 | `_grCheckForRoom@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 19 | `_grChromakeyMode@4` | `0x1a80` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a80__grChromakeyMode_4.c) |
| 20 | `_grChromakeyValue@4` | `0x1a98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a98__grChromakeyValue_4.c) |
| 21 | `_grClipWindow@16` | `0x1ab0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ab0__grClipWindow_16.c) |
| 22 | `_grColorCombine@20` | `0x1ad8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ad8__grColorCombine_20.c) |
| 23 | `_grColorMask@8` | `0x1b0c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001b0c__grColorMask_8.c) |
| 24 | `_grConstantColorValue4@16` | `0x1c00` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001c00__grConstantColorValue4_16.c) |
| 25 | `_grConstantColorValue@4` | `0x1ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ba0__grConstantColorValue_4.c) |
| 26 | `_grCullMode@4` | `0x1b2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001b2c__grCullMode_4.c) |
| 27 | `_grDepthBiasLevel@4` | `0x1cdc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001cdc__grDepthBiasLevel_4.c) |
| 28 | `_grDepthBufferFunction@4` | `0x1d2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d2c__grDepthBufferFunction_4.c) |
| 29 | `_grDepthBufferMode@4` | `0x1d80` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d80__grDepthBufferMode_4.c) |
| 30 | `_grDepthMask@4` | `0x1d98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d98__grDepthMask_4.c) |
| 31 | `_grDisableAllEffects@0` | `0x1db0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001db0__grDisableAllEffects_0.c) |
| 32 | `_grDitherMode@4` | `0x1e18` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001e18__grDitherMode_4.c) |
| 33 | `_grDrawLine@8` | `0x1094` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001094__grDrawLine_8.c) |
| 34 | `_grDrawPlanarPolygon@12` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 35 | `_grDrawPlanarPolygonVertexList@8` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 36 | `_grDrawPoint@4` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001060__grDrawPoint_4.c) |
| 37 | `_grDrawPolygon@12` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 38 | `_grDrawPolygonVertexList@8` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 39 | `_grDrawTriangle@12` | `0x10d0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800010d0__grDrawTriangle_12.c) |
| 40 | `_grErrorSetCallback@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 41 | `_grFogColorValue@4` | `0x1e6c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001e6c__grFogColorValue_4.c) |
| 42 | `_grFogMode@4` | `0x1ecc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ecc__grFogMode_4.c) |
| 43 | `_grFogTable@4` | `0x1ee4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ee4__grFogTable_4.c) |
| 44 | `_grGammaCorrectionValue@4` | `0x1f40` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001f40__grGammaCorrectionValue_4.c) |
| 45 | `_grGlideGetState@4` | `0x2820` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002820__grGlideGetState_4.c) |
| 46 | `_grGlideGetVersion@4` | `0x280c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000280c__grGlideGetVersion_4.c) |
| 47 | `_grGlideInit@0` | `0x27ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800027ec__grGlideInit_0.c) |
| 48 | `_grGlideSetState@4` | `0x2838` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002838__grGlideSetState_4.c) |
| 49 | `_grGlideShamelessPlug@4` | `0x2854` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002854__grGlideShamelessPlug_4.c) |
| 50 | `_grGlideShutdown@0` | `0x2804` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002804__grGlideShutdown_0.c) |
| 51 | `_grHints@8` | `0x2870` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002870__grHints_8.c) |
| 52 | `_grLfbConstantAlpha@4` | `0x25bc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800025bc__grLfbConstantAlpha_4.c) |
| 53 | `_grLfbConstantDepth@4` | `0x2610` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002610__grLfbConstantDepth_4.c) |
| 54 | `_grLfbLock@24` | `0x24a4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800024a4__grLfbLock_24.c) |
| 55 | `_grLfbReadRegion@28` | `0x2718` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002718__grLfbReadRegion_28.c) |
| 56 | `_grLfbUnlock@8` | `0x2528` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002528__grLfbUnlock_8.c) |
| 57 | `_grLfbWriteColorFormat@4` | `0x2664` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002664__grLfbWriteColorFormat_4.c) |
| 58 | `_grLfbWriteColorSwizzle@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 59 | `_grLfbWriteRegion@32` | `0x26b8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800026b8__grLfbWriteRegion_32.c) |
| 60 | `_grRenderBuffer@4` | `0x1388` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001388__grRenderBuffer_4.c) |
| 61 | `_grResetTriStats@0` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800018dc__grResetTriStats_0.c) |
| 62 | `_grSplash@20` | `0x1f90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001f90__grSplash_20.c) |
| 63 | `_grSstConfigPipeLine@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 64 | `_grSstConfigPipeline@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 65 | `_grSstControl@4` | `0x1550` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001550__grSstControl_4.c) |
| 66 | `_grSstDetectResources@0` | `0x1550` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001550__grSstControl_4.c) |
| 67 | `_grSstIdle@0` | `0x13a4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a4__grSstIdle_0.c) |
| 68 | `_grSstIsBusy@0` | `0x1440` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001440__grSstIsBusy_0.c) |
| 69 | `_grSstOrigin@4` | `0x170c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000170c__grSstOrigin_4.c) |
| 70 | `_grSstPerfStats@4` | `0x182c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000182c__grSstPerfStats_4.c) |
| 71 | `_grSstQueryBoards@4` | `0x16d8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800016d8__grSstQueryBoards_4.c) |
| 72 | `_grSstQueryHardware@4` | `0x1558` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001558__grSstQueryHardware_4.c) |
| 73 | `_grSstResetPerfStats@0` | `0x18ac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800018ac__grSstResetPerfStats_0.c) |
| 74 | `_grSstScreenHeight@0` | `0x179c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000179c__grSstScreenHeight_0.c) |
| 75 | `_grSstScreenWidth@0` | `0x17cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800017cc__grSstScreenWidth_0.c) |
| 76 | `_grSstSelect@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 77 | `_grSstStatus@0` | `0x17fc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800017fc__grSstStatus_0.c) |
| 78 | `_grSstVRetraceOn@0` | `0x1404` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001404__grSstVRetraceOn_0.c) |
| 79 | `_grSstVidMode@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 80 | `_grSstVideoLine@0` | `0x13d4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013d4__grSstVideoLine_0.c) |
| 81 | `_grSstWinClose@0` | `0x1538` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001538__grSstWinClose_0.c) |
| 82 | `_grSstWinOpen@28` | `0x1474` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001474__grSstWinOpen_28.c) |
| 83 | `_grTexCalcMemRequired@16` | `0x1fc8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001fc8__grTexCalcMemRequired_16.c) |
| 84 | `_grTexClampMode@12` | `0x20f8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800020f8__grTexClampMode_12.c) |
| 85 | `_grTexCombine@28` | `0x211c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000211c__grTexCombine_28.c) |
| 86 | `_grTexCombineFunction@8` | `0x2e90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e90__grTexCombineFunction_8.c) |
| 87 | `_grTexDetailControl@16` | `0x2160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002160__grTexDetailControl_16.c) |
| 88 | `_grTexDownloadMipMap@16` | `0x2260` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002260__grTexDownloadMipMap_16.c) |
| 89 | `_grTexDownloadMipMapLevel@32` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800022b0__grTexDownloadMipMapLevel_32.c) |
| 90 | `_grTexDownloadMipMapLevelPartial@40` | `0x2308` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002308__grTexDownloadMipMapLevelPartial_40.c) |
| 91 | `_grTexDownloadTable@12` | `0x2374` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002374__grTexDownloadTable_12.c) |
| 92 | `_grTexDownloadTablePartial@20` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800023bc__grTexDownloadTablePartial_20.c) |
| 93 | `_grTexFilterMode@12` | `0x2220` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002220__grTexFilterMode_12.c) |
| 94 | `_grTexLodBiasValue@8` | `0x2244` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002244__grTexLodBiasValue_8.c) |
| 95 | `_grTexMaxAddress@4` | `0x204c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000204c__grTexMaxAddress_4.c) |
| 96 | `_grTexMinAddress@4` | `0x203c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000203c__grTexMinAddress_4.c) |
| 97 | `_grTexMipMapMode@12` | `0x23ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800023ec__grTexMipMapMode_12.c) |
| 98 | `_grTexMultibase@8` | `0x2410` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002410__grTexMultibase_8.c) |
| 99 | `_grTexMultibaseAddress@20` | `0x2470` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002470__grTexMultibaseAddress_20.c) |
| 100 | `_grTexNCCTable@8` | `0x2064` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002064__grTexNCCTable_8.c) |
| 101 | `_grTexSource@16` | `0x20cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800020cc__grTexSource_16.c) |
| 102 | `_grTexTextureMemRequired@8` | `0x2008` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002008__grTexTextureMemRequired_8.c) |
| 103 | `_grTriStats@8` | `0x190c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000190c__grTriStats_8.c) |
| 104 | `_gu3dfGetInfo@8` | `0x3488` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003488__gu3dfGetInfo_8.c) |
| 105 | `_gu3dfLoad@8` | `0x34c8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800034c8__gu3dfLoad_8.c) |
| 106 | `_guAADrawTriangleWithClip@12` | `0x33b0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800033b0__guAADrawTriangleWithClip_12.c) |
| 107 | `_guAlphaSource@4` | `0x28e0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800028e0__guAlphaSource_4.c) |
| 108 | `_guColorCombineFunction@4` | `0x2978` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002978__guColorCombineFunction_4.c) |
| 109 | `_guDrawPolygonVertexListWithClip@8` | `0x3430` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003430__guDrawPolygonVertexListWithClip_8.c) |
| 110 | `_guDrawTriangleWithClip@12` | `0x33ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800033ec__guDrawTriangleWithClip_12.c) |
| 111 | `_guEncodeRLE16@16` | `0x35e0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800035e0__guEncodeRLE16_16.c) |
| 112 | `_guEndianSwapBytes@4` | `0x3480` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003480__guEndianSwapBytes_4.c) |
| 113 | `_guEndianSwapWords@4` | `0x3478` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003478__guEndianSwapWords_4.c) |
| 114 | `_guFbReadRegion@24` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 115 | `_guFbWriteRegion@24` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 116 | `_guFogGenerateExp2@8` | `0x2aac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002aac__guFogGenerateExp2_8.c) |
| 117 | `_guFogGenerateExp@8` | `0x29cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800029cc__guFogGenerateExp_8.c) |
| 118 | `_guFogGenerateLinear@12` | `0x2bac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002bac__guFogGenerateLinear_12.c) |
| 119 | `_guFogTableIndexToW@4` | `0x2980` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002980__guFogTableIndexToW_4.c) |
| 120 | `_guMPDrawTriangle@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 121 | `_guMPInit@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 122 | `_guMPTexCombineFunction@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 123 | `_guMPTexSource@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 124 | `_guMovieSetName@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 125 | `_guMovieStart@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 126 | `_guMovieStop@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 127 | `_guTexAllocateMemory@60` | `0x2c50` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002c50__guTexAllocateMemory_60.c) |
| 128 | `_guTexChangeAttributes@48` | `0x2e10` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e10__guTexChangeAttributes_48.c) |
| 129 | `_guTexCombineFunction@8` | `0x2e90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e90__grTexCombineFunction_8.c) |
| 130 | `_guTexCreateColorMipMap@0` | `0x35e4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800035e4__guTexCreateColorMipMap_0.c) |
| 131 | `_guTexDownloadMipMap@12` | `0x2fa8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002fa8__guTexDownloadMipMap_12.c) |
| 132 | `_guTexDownloadMipMapLevel@12` | `0x30f8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800030f8__guTexDownloadMipMapLevel_12.c) |
| 133 | `_guTexGetCurrentMipMap@4` | `0x2e98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e98__guTexGetCurrentMipMap_4.c) |
| 134 | `_guTexGetMipMapInfo@4` | `0x2ee0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002ee0__guTexGetMipMapInfo_4.c) |
| 135 | `_guTexMemQueryAvail@4` | `0x2f28` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002f28__guTexMemQueryAvail_4.c) |
| 136 | `_guTexMemReset@0` | `0x2f74` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002f74__guTexMemReset_0.c) |
| 137 | `_guTexSource@4` | `0x3234` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003234__guTexSource_4.c) |
| 138 | `_pciClose@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 139 | `_pciDeviceExists@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 140 | `_pciFindCard@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 141 | `_pciFindCardMulti@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 142 | `_pciFindFreeMTRR@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 143 | `_pciFindFreeMTRRMatch@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 144 | `_pciFindMTRRMatch@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 145 | `_pciGetConfigData@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 146 | `_pciGetErrorCode@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 147 | `_pciGetErrorString@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 148 | `_pciMapCard@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 149 | `_pciMapCardMulti@24` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 150 | `_pciMapPhysicalToLinear@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 151 | `_pciOpen@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 152 | `_pciOpenEx@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 153 | `_pciSetConfigData@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 154 | `_pciSetMTRR@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 155 | `_pciUnmapPhysical@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 156 | `_pioInByte@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 157 | `_pioInLong@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 158 | `_pioInWord@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 159 | `_pioOutByte@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 160 | `_pioOutLong@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 161 | `_pioOutWord@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 162 | `grAADrawLine` | `0x11dc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800011dc__grAADrawLine_8.c) |
| 163 | `grAADrawPoint` | `0x11a8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800011a8__grAADrawPoint_4.c) |
| 164 | `grAADrawPolygon` | `0x1284` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001284__grAADrawPolygon_12.c) |
| 165 | `grAADrawPolygonVertexList` | `0x12d0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800012d0__grAADrawPolygonVertexList_8.c) |
| 166 | `grAADrawTriangle` | `0x1218` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001218__grAADrawTriangle_24.c) |
| 167 | `grAlphaBlendFunction` | `0x196c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000196c__grAlphaBlendFunction_16.c) |
| 168 | `grAlphaCombine` | `0x1994` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001994__grAlphaCombine_20.c) |
| 169 | `grAlphaControlsITRGBLighting` | `0x19c4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800019c4__grAlphaControlsITRGBLighting_4.c) |
| 170 | `grAlphaTestFunction` | `0x1a14` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a14__grAlphaTestFunction_4.c) |
| 171 | `grAlphaTestReferenceValue` | `0x1a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a2c__grAlphaTestReferenceValue_4.c) |
| 172 | `grBufferClear` | `0x1314` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001314__grBufferClear_12.c) |
| 173 | `grBufferNumPending` | `0x1338` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001338__grBufferNumPending_0.c) |
| 174 | `grBufferSwap` | `0x1368` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001368__grBufferSwap_4.c) |
| 175 | `grCheckForRoom` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 176 | `grChromakeyMode` | `0x1a80` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a80__grChromakeyMode_4.c) |
| 177 | `grChromakeyValue` | `0x1a98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001a98__grChromakeyValue_4.c) |
| 178 | `grClipWindow` | `0x1ab0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ab0__grClipWindow_16.c) |
| 179 | `grColorCombine` | `0x1ad8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ad8__grColorCombine_20.c) |
| 180 | `grColorMask` | `0x1b0c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001b0c__grColorMask_8.c) |
| 181 | `grConstantColorValue` | `0x1ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ba0__grConstantColorValue_4.c) |
| 182 | `grConstantColorValue4` | `0x1c00` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001c00__grConstantColorValue4_16.c) |
| 183 | `grCullMode` | `0x1b2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001b2c__grCullMode_4.c) |
| 184 | `grDepthBiasLevel` | `0x1cdc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001cdc__grDepthBiasLevel_4.c) |
| 185 | `grDepthBufferFunction` | `0x1d2c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d2c__grDepthBufferFunction_4.c) |
| 186 | `grDepthBufferMode` | `0x1d80` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d80__grDepthBufferMode_4.c) |
| 187 | `grDepthMask` | `0x1d98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001d98__grDepthMask_4.c) |
| 188 | `grDisableAllEffects` | `0x1db0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001db0__grDisableAllEffects_0.c) |
| 189 | `grDitherMode` | `0x1e18` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001e18__grDitherMode_4.c) |
| 190 | `grDrawLine` | `0x1094` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001094__grDrawLine_8.c) |
| 191 | `grDrawPlanarPolygon` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 192 | `grDrawPlanarPolygonVertexList` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 193 | `grDrawPoint` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001060__grDrawPoint_4.c) |
| 194 | `grDrawPolygon` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 195 | `grDrawPolygonVertexList` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 196 | `grDrawTriangle` | `0x10d0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800010d0__grDrawTriangle_12.c) |
| 197 | `grErrorSetCallback` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 198 | `grFogColorValue` | `0x1e6c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001e6c__grFogColorValue_4.c) |
| 199 | `grFogMode` | `0x1ecc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ecc__grFogMode_4.c) |
| 200 | `grFogTable` | `0x1ee4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001ee4__grFogTable_4.c) |
| 201 | `grGammaCorrectionValue` | `0x1f40` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001f40__grGammaCorrectionValue_4.c) |
| 202 | `grGlideGetState` | `0x2820` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002820__grGlideGetState_4.c) |
| 203 | `grGlideGetVersion` | `0x280c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000280c__grGlideGetVersion_4.c) |
| 204 | `grGlideInit` | `0x27ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800027ec__grGlideInit_0.c) |
| 205 | `grGlideSetState` | `0x2838` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002838__grGlideSetState_4.c) |
| 206 | `grGlideShamelessPlug` | `0x2854` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002854__grGlideShamelessPlug_4.c) |
| 207 | `grGlideShutdown` | `0x2804` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002804__grGlideShutdown_0.c) |
| 208 | `grHints` | `0x2870` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002870__grHints_8.c) |
| 209 | `grLfbConstantAlpha` | `0x25bc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800025bc__grLfbConstantAlpha_4.c) |
| 210 | `grLfbConstantDepth` | `0x2610` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002610__grLfbConstantDepth_4.c) |
| 211 | `grLfbLock` | `0x24a4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800024a4__grLfbLock_24.c) |
| 212 | `grLfbReadRegion` | `0x2718` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002718__grLfbReadRegion_28.c) |
| 213 | `grLfbUnlock` | `0x2528` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002528__grLfbUnlock_8.c) |
| 214 | `grLfbWriteColorFormat` | `0x2664` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002664__grLfbWriteColorFormat_4.c) |
| 215 | `grLfbWriteColorSwizzle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 216 | `grLfbWriteRegion` | `0x26b8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800026b8__grLfbWriteRegion_32.c) |
| 217 | `grRenderBuffer` | `0x1388` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001388__grRenderBuffer_4.c) |
| 218 | `grResetTriStats` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800018dc__grResetTriStats_0.c) |
| 219 | `grSplash` | `0x1f90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001f90__grSplash_20.c) |
| 220 | `grSstConfigPipeLine` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 221 | `grSstConfigPipeline` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 222 | `grSstControl` | `0x1550` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001550__grSstControl_4.c) |
| 223 | `grSstDetectResources` | `0x1550` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001550__grSstControl_4.c) |
| 224 | `grSstIdle` | `0x13a4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a4__grSstIdle_0.c) |
| 225 | `grSstIsBusy` | `0x1440` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001440__grSstIsBusy_0.c) |
| 226 | `grSstOrigin` | `0x170c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000170c__grSstOrigin_4.c) |
| 227 | `grSstPerfStats` | `0x182c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000182c__grSstPerfStats_4.c) |
| 228 | `grSstQueryBoards` | `0x16d8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800016d8__grSstQueryBoards_4.c) |
| 229 | `grSstQueryHardware` | `0x1558` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001558__grSstQueryHardware_4.c) |
| 230 | `grSstResetPerfStats` | `0x18ac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800018ac__grSstResetPerfStats_0.c) |
| 231 | `grSstScreenHeight` | `0x179c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000179c__grSstScreenHeight_0.c) |
| 232 | `grSstScreenWidth` | `0x17cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800017cc__grSstScreenWidth_0.c) |
| 233 | `grSstSelect` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 234 | `grSstStatus` | `0x17fc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800017fc__grSstStatus_0.c) |
| 235 | `grSstVRetraceOn` | `0x1404` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001404__grSstVRetraceOn_0.c) |
| 236 | `grSstVidMode` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 237 | `grSstVideoLine` | `0x13d4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013d4__grSstVideoLine_0.c) |
| 238 | `grSstWinClose` | `0x1538` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001538__grSstWinClose_0.c) |
| 239 | `grSstWinOpen` | `0x1474` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001474__grSstWinOpen_28.c) |
| 240 | `grTexCalcMemRequired` | `0x1fc8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180001fc8__grTexCalcMemRequired_16.c) |
| 241 | `grTexClampMode` | `0x20f8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800020f8__grTexClampMode_12.c) |
| 242 | `grTexCombine` | `0x211c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000211c__grTexCombine_28.c) |
| 243 | `grTexCombineFunction` | `0x2e90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e90__grTexCombineFunction_8.c) |
| 244 | `grTexDetailControl` | `0x2160` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002160__grTexDetailControl_16.c) |
| 245 | `grTexDownloadMipMap` | `0x2260` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002260__grTexDownloadMipMap_16.c) |
| 246 | `grTexDownloadMipMapLevel` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800022b0__grTexDownloadMipMapLevel_32.c) |
| 247 | `grTexDownloadMipMapLevelPartial` | `0x2308` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002308__grTexDownloadMipMapLevelPartial_40.c) |
| 248 | `grTexDownloadTable` | `0x2374` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002374__grTexDownloadTable_12.c) |
| 249 | `grTexDownloadTablePartial` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800023bc__grTexDownloadTablePartial_20.c) |
| 250 | `grTexFilterMode` | `0x2220` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002220__grTexFilterMode_12.c) |
| 251 | `grTexLodBiasValue` | `0x2244` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002244__grTexLodBiasValue_8.c) |
| 252 | `grTexMaxAddress` | `0x204c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000204c__grTexMaxAddress_4.c) |
| 253 | `grTexMinAddress` | `0x203c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000203c__grTexMinAddress_4.c) |
| 254 | `grTexMipMapMode` | `0x23ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800023ec__grTexMipMapMode_12.c) |
| 255 | `grTexMultibase` | `0x2410` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002410__grTexMultibase_8.c) |
| 256 | `grTexMultibaseAddress` | `0x2470` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002470__grTexMultibaseAddress_20.c) |
| 257 | `grTexNCCTable` | `0x2064` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002064__grTexNCCTable_8.c) |
| 258 | `grTexSource` | `0x20cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800020cc__grTexSource_16.c) |
| 259 | `grTexTextureMemRequired` | `0x2008` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002008__grTexTextureMemRequired_8.c) |
| 260 | `grTriStats` | `0x190c` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/18000190c__grTriStats_8.c) |
| 261 | `gu3dfGetInfo` | `0x3488` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003488__gu3dfGetInfo_8.c) |
| 262 | `gu3dfLoad` | `0x34c8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800034c8__gu3dfLoad_8.c) |
| 263 | `guAADrawTriangleWithClip` | `0x33b0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800033b0__guAADrawTriangleWithClip_12.c) |
| 264 | `guAlphaSource` | `0x28e0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800028e0__guAlphaSource_4.c) |
| 265 | `guColorCombineFunction` | `0x2978` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002978__guColorCombineFunction_4.c) |
| 266 | `guDrawPolygonVertexListWithClip` | `0x3430` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003430__guDrawPolygonVertexListWithClip_8.c) |
| 267 | `guDrawTriangleWithClip` | `0x33ec` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800033ec__guDrawTriangleWithClip_12.c) |
| 268 | `guEncodeRLE16` | `0x35e0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800035e0__guEncodeRLE16_16.c) |
| 269 | `guEndianSwapBytes` | `0x3480` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003480__guEndianSwapBytes_4.c) |
| 270 | `guEndianSwapWords` | `0x3478` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003478__guEndianSwapWords_4.c) |
| 271 | `guFbReadRegion` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 272 | `guFbWriteRegion` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 273 | `guFogGenerateExp` | `0x29cc` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800029cc__guFogGenerateExp_8.c) |
| 274 | `guFogGenerateExp2` | `0x2aac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002aac__guFogGenerateExp2_8.c) |
| 275 | `guFogGenerateLinear` | `0x2bac` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002bac__guFogGenerateLinear_12.c) |
| 276 | `guFogTableIndexToW` | `0x2980` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002980__guFogTableIndexToW_4.c) |
| 277 | `guMPDrawTriangle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 278 | `guMPInit` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 279 | `guMPTexCombineFunction` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 280 | `guMPTexSource` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 281 | `guMovieSetName` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 282 | `guMovieStart` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 283 | `guMovieStop` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 284 | `guTexAllocateMemory` | `0x2c50` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002c50__guTexAllocateMemory_60.c) |
| 285 | `guTexChangeAttributes` | `0x2e10` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e10__guTexChangeAttributes_48.c) |
| 286 | `guTexCombineFunction` | `0x2e90` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e90__grTexCombineFunction_8.c) |
| 287 | `guTexCreateColorMipMap` | `0x35e4` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800035e4__guTexCreateColorMipMap_0.c) |
| 288 | `guTexDownloadMipMap` | `0x2fa8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002fa8__guTexDownloadMipMap_12.c) |
| 289 | `guTexDownloadMipMapLevel` | `0x30f8` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800030f8__guTexDownloadMipMapLevel_12.c) |
| 290 | `guTexGetCurrentMipMap` | `0x2e98` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002e98__guTexGetCurrentMipMap_4.c) |
| 291 | `guTexGetMipMapInfo` | `0x2ee0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002ee0__guTexGetMipMapInfo_4.c) |
| 292 | `guTexMemQueryAvail` | `0x2f28` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002f28__guTexMemQueryAvail_4.c) |
| 293 | `guTexMemReset` | `0x2f74` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180002f74__guTexMemReset_0.c) |
| 294 | `guTexSource` | `0x3234` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/180003234__guTexSource_4.c) |
| 295 | `pciClose` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 296 | `pciDeviceExists` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 297 | `pciFindCard` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 298 | `pciFindCardMulti` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 299 | `pciFindFreeMTRR` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 300 | `pciFindFreeMTRRMatch` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 301 | `pciFindMTRRMatch` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 302 | `pciGetConfigData` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 303 | `pciGetErrorCode` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 304 | `pciGetErrorString` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 305 | `pciMapCard` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 306 | `pciMapCardMulti` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 307 | `pciMapPhysicalToLinear` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 308 | `pciOpen` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 309 | `pciOpenEx` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 310 | `pciSetConfigData` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 311 | `pciSetMTRR` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 312 | `pciUnmapPhysical` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 313 | `pioInByte` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 314 | `pioInLong` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 315 | `pioInWord` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 316 | `pioOutByte` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 317 | `pioOutLong` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
| 318 | `pioOutWord` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide2x.dll/functions/1800013a0_ConvertAndDownLoadRLE.c) |
