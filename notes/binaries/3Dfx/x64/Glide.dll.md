# 3Dfx/x64/Glide.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x5db3c`.
- Supplied SHA-256: `57f9451e435a9231f939599bd4f978878e870386d2188fb774957fdc25610357`.
- Prepared SHA-256: `57f9451e435a9231f939599bd4f978878e870386d2188fb774957fdc25610357`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x64/Glide.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x64](../../../../decompiled/3Dfx/x64/Glide.dll/full_decompilation.c) | 1,255 | 1,255 | 0 | 3,102 | 2,810 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x64 navigation:** [Functions](../../../../decompiled/3Dfx/x64/Glide.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x64/Glide.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x64/Glide.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x64/Glide.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x64/Glide.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x64/Glide.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x64/Glide.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x64/Glide.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x5a1c4` | `0x5a1ff` | `7408` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18005a1c4_FUN_18005a1c4.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `ConvertAndDownloadRLE` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 2 | `ConvertAndDownloadRle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 3 | `_ConvertAndDownLoadRLE@64` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 4 | `_ConvertAndDownloadRle@64` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 5 | `_grAADrawLine@8` | `0x11dc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800011dc__grAADrawLine_8.c) |
| 6 | `_grAADrawPoint@4` | `0x11a8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800011a8__grAADrawPoint_4.c) |
| 7 | `_grAADrawPolygon@12` | `0x1284` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001284__grAADrawPolygon_12.c) |
| 8 | `_grAADrawPolygonVertexList@8` | `0x12d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800012d0__grAADrawPolygonVertexList_8.c) |
| 9 | `_grAADrawTriangle@24` | `0x1218` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001218__grAADrawTriangle_24.c) |
| 10 | `_grAlphaBlendFunction@16` | `0x196c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000196c__grAlphaBlendFunction_16.c) |
| 11 | `_grAlphaCombine@20` | `0x1994` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001994__grAlphaCombine_20.c) |
| 12 | `_grAlphaControlsITRGBLighting@4` | `0x19c4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800019c4__grAlphaControlsITRGBLighting_4.c) |
| 13 | `_grAlphaTestFunction@4` | `0x1a14` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a14__grAlphaTestFunction_4.c) |
| 14 | `_grAlphaTestReferenceValue@4` | `0x1a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a2c__grAlphaTestReferenceValue_4.c) |
| 15 | `_grBufferClear@12` | `0x1314` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001314__grBufferClear_12.c) |
| 16 | `_grBufferNumPending@0` | `0x1338` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001338__grBufferNumPending_0.c) |
| 17 | `_grBufferSwap@4` | `0x1368` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001368__grBufferSwap_4.c) |
| 18 | `_grCheckForRoom@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 19 | `_grChromakeyMode@4` | `0x1a80` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a80__grChromakeyMode_4.c) |
| 20 | `_grChromakeyValue@4` | `0x1a98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a98__grChromakeyValue_4.c) |
| 21 | `_grClipWindow@16` | `0x1ab0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ab0__grClipWindow_16.c) |
| 22 | `_grColorCombine@20` | `0x1ad8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ad8__grColorCombine_20.c) |
| 23 | `_grColorMask@8` | `0x1b0c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001b0c__grColorMask_8.c) |
| 24 | `_grConstantColorValue4@16` | `0x1c00` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001c00__grConstantColorValue4_16.c) |
| 25 | `_grConstantColorValue@4` | `0x1ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ba0__grConstantColorValue_4.c) |
| 26 | `_grCullMode@4` | `0x1b2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001b2c__grCullMode_4.c) |
| 27 | `_grDepthBiasLevel@4` | `0x1cdc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001cdc__grDepthBiasLevel_4.c) |
| 28 | `_grDepthBufferFunction@4` | `0x1d2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d2c__grDepthBufferFunction_4.c) |
| 29 | `_grDepthBufferMode@4` | `0x1d80` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d80__grDepthBufferMode_4.c) |
| 30 | `_grDepthMask@4` | `0x1d98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d98__grDepthMask_4.c) |
| 31 | `_grDisableAllEffects@0` | `0x1db0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001db0__grDisableAllEffects_0.c) |
| 32 | `_grDitherMode@4` | `0x1e18` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001e18__grDitherMode_4.c) |
| 33 | `_grDrawLine@8` | `0x1094` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001094__grDrawLine_8.c) |
| 34 | `_grDrawPlanarPolygon@12` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 35 | `_grDrawPlanarPolygonVertexList@8` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 36 | `_grDrawPoint@4` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001060__grDrawPoint_4.c) |
| 37 | `_grDrawPolygon@12` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 38 | `_grDrawPolygonVertexList@8` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 39 | `_grDrawTriangle@12` | `0x10d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800010d0__grDrawTriangle_12.c) |
| 40 | `_grErrorSetCallback@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 41 | `_grFogColorValue@4` | `0x1e6c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001e6c__grFogColorValue_4.c) |
| 42 | `_grFogMode@4` | `0x1ecc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ecc__grFogMode_4.c) |
| 43 | `_grFogTable@4` | `0x1ee4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ee4__grFogTable_4.c) |
| 44 | `_grGammaCorrectionValue@4` | `0x1f40` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001f40__grGammaCorrectionValue_4.c) |
| 45 | `_grGlideGetState@4` | `0x2a40` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a40__grGlideGetState_4.c) |
| 46 | `_grGlideGetVersion@4` | `0x2a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a2c__grGlideGetVersion_4.c) |
| 47 | `_grGlideInit@0` | `0x2a0c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a0c__grGlideInit_0.c) |
| 48 | `_grGlideSetState@4` | `0x2a58` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a58__grGlideSetState_4.c) |
| 49 | `_grGlideShamelessPlug@4` | `0x2a74` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a74__grGlideShamelessPlug_4.c) |
| 50 | `_grGlideShutdown@0` | `0x2a24` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a24__grGlideShutdown_0.c) |
| 51 | `_grHints@8` | `0x2a90` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a90__grHints_8.c) |
| 52 | `_grLfbBegin@0` | `0x2500` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002500__grLfbBegin_0.c) |
| 53 | `_grLfbBypassMode@4` | `0x24a4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024a4__grLfbBypassMode_4.c) |
| 54 | `_grLfbConstantAlpha@4` | `0x286c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000286c__grLfbConstantAlpha_4.c) |
| 55 | `_grLfbConstantDepth@4` | `0x28c0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800028c0__grLfbConstantDepth_4.c) |
| 56 | `_grLfbEnd@0` | `0x25ec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800025ec__grLfbEnd_0.c) |
| 57 | `_grLfbGetReadPtr@4` | `0x2684` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002684__grLfbGetReadPtr_4.c) |
| 58 | `_grLfbGetWritePtr@4` | `0x2724` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002724__grLfbGetWritePtr_4.c) |
| 59 | `_grLfbOrigin@4` | `0x24c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024c8__grLfbOrigin_4.c) |
| 60 | `_grLfbReadRegion@28` | `0x29c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800029c8__grLfbReadRegion_28.c) |
| 61 | `_grLfbWriteColorFormat@4` | `0x2914` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002914__grLfbWriteColorFormat_4.c) |
| 62 | `_grLfbWriteColorSwizzle@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 63 | `_grLfbWriteMode@4` | `0x24e4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024e4__grLfbWriteMode_4.c) |
| 64 | `_grLfbWriteRegion@32` | `0x2968` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002968__grLfbWriteRegion_32.c) |
| 65 | `_grRenderBuffer@4` | `0x1388` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001388__grRenderBuffer_4.c) |
| 66 | `_grResetTriStats@0` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800018dc__grResetTriStats_0.c) |
| 67 | `_grSplash@20` | `0x1f90` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001f90__grSplash_20.c) |
| 68 | `_grSstConfigPipeLine@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 69 | `_grSstConfigPipeline@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 70 | `_grSstDetectResources@0` | `0x37f8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800037f8__grSstDetectResources_0.c) |
| 71 | `_grSstIdle@0` | `0x13a4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a4__grSstIdle_0.c) |
| 72 | `_grSstIsBusy@0` | `0x1440` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001440__grSstIsBusy_0.c) |
| 73 | `_grSstOpen@24` | `0x1474` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001474__grSstOpen_24.c) |
| 74 | `_grSstOrigin@4` | `0x170c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000170c__grSstOrigin_4.c) |
| 75 | `_grSstPassthruMode@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 76 | `_grSstPerfStats@4` | `0x182c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000182c__grSstPerfStats_4.c) |
| 77 | `_grSstQueryBoards@4` | `0x16d8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800016d8__grSstQueryBoards_4.c) |
| 78 | `_grSstQueryHardware@4` | `0x1558` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001558__grSstQueryHardware_4.c) |
| 79 | `_grSstResetPerfStats@0` | `0x18ac` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800018ac__grSstResetPerfStats_0.c) |
| 80 | `_grSstScreenHeight@0` | `0x179c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000179c__grSstScreenHeight_0.c) |
| 81 | `_grSstScreenWidth@0` | `0x17cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800017cc__grSstScreenWidth_0.c) |
| 82 | `_grSstSelect@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 83 | `_grSstStatus@0` | `0x17fc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800017fc__grSstStatus_0.c) |
| 84 | `_grSstVRetraceOn@0` | `0x1404` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001404__grSstVRetraceOn_0.c) |
| 85 | `_grSstVidMode@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 86 | `_grSstVideoLine@0` | `0x13d4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013d4__grSstVideoLine_0.c) |
| 87 | `_grTexCalcMemRequired@16` | `0x1fc8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001fc8__grTexCalcMemRequired_16.c) |
| 88 | `_grTexClampMode@12` | `0x20f8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800020f8__grTexClampMode_12.c) |
| 89 | `_grTexCombine@28` | `0x211c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000211c__grTexCombine_28.c) |
| 90 | `_grTexCombineFunction@8` | `0x30b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b0__grTexCombineFunction_8.c) |
| 91 | `_grTexDetailControl@16` | `0x2160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002160__grTexDetailControl_16.c) |
| 92 | `_grTexDownloadMipMap@16` | `0x2260` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002260__grTexDownloadMipMap_16.c) |
| 93 | `_grTexDownloadMipMapLevel@32` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800022b0__grTexDownloadMipMapLevel_32.c) |
| 94 | `_grTexDownloadMipMapLevelPartial@40` | `0x2308` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002308__grTexDownloadMipMapLevelPartial_40.c) |
| 95 | `_grTexDownloadTable@12` | `0x2374` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002374__grTexDownloadTable_12.c) |
| 96 | `_grTexDownloadTablePartial@20` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800023bc__grTexDownloadTablePartial_20.c) |
| 97 | `_grTexFilterMode@12` | `0x2220` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002220__grTexFilterMode_12.c) |
| 98 | `_grTexLodBiasValue@8` | `0x2244` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002244__grTexLodBiasValue_8.c) |
| 99 | `_grTexMaxAddress@4` | `0x204c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000204c__grTexMaxAddress_4.c) |
| 100 | `_grTexMinAddress@4` | `0x203c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000203c__grTexMinAddress_4.c) |
| 101 | `_grTexMipMapMode@12` | `0x23ec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800023ec__grTexMipMapMode_12.c) |
| 102 | `_grTexMultibase@8` | `0x2410` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002410__grTexMultibase_8.c) |
| 103 | `_grTexMultibaseAddress@20` | `0x2470` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002470__grTexMultibaseAddress_20.c) |
| 104 | `_grTexNCCTable@8` | `0x2064` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002064__grTexNCCTable_8.c) |
| 105 | `_grTexSource@16` | `0x20cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800020cc__grTexSource_16.c) |
| 106 | `_grTexTextureMemRequired@8` | `0x2008` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002008__grTexTextureMemRequired_8.c) |
| 107 | `_grTriStats@8` | `0x190c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000190c__grTriStats_8.c) |
| 108 | `_gu3dfGetInfo@8` | `0x36a8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036a8__gu3dfGetInfo_8.c) |
| 109 | `_gu3dfLoad@8` | `0x36e8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036e8__gu3dfLoad_8.c) |
| 110 | `_guAADrawTriangleWithClip@12` | `0x35d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800035d0__guAADrawTriangleWithClip_12.c) |
| 111 | `_guAlphaSource@4` | `0x2b00` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002b00__guAlphaSource_4.c) |
| 112 | `_guColorCombineFunction@4` | `0x2b98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002b98__guColorCombineFunction_4.c) |
| 113 | `_guDrawPolygonVertexListWithClip@8` | `0x3650` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003650__guDrawPolygonVertexListWithClip_8.c) |
| 114 | `_guDrawTriangleWithClip@12` | `0x360c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000360c__guDrawTriangleWithClip_12.c) |
| 115 | `_guEncodeRLE16@16` | `0x3800` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003800__guEncodeRLE16_16.c) |
| 116 | `_guEndianSwapBytes@4` | `0x36a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036a0__guEndianSwapBytes_4.c) |
| 117 | `_guEndianSwapWords@4` | `0x3698` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003698__guEndianSwapWords_4.c) |
| 118 | `_guFbReadRegion@24` | `0x27cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800027cc__guFbReadRegion_24.c) |
| 119 | `_guFbWriteRegion@24` | `0x2810` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002810__guFbWriteRegion_24.c) |
| 120 | `_guFogGenerateExp2@8` | `0x2ccc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002ccc__guFogGenerateExp2_8.c) |
| 121 | `_guFogGenerateExp@8` | `0x2bec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002bec__guFogGenerateExp_8.c) |
| 122 | `_guFogGenerateLinear@12` | `0x2dcc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002dcc__guFogGenerateLinear_12.c) |
| 123 | `_guFogTableIndexToW@4` | `0x2ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002ba0__guFogTableIndexToW_4.c) |
| 124 | `_guMPDrawTriangle@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 125 | `_guMPInit@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 126 | `_guMPTexCombineFunction@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 127 | `_guMPTexSource@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 128 | `_guMovieSetName@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 129 | `_guMovieStart@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 130 | `_guMovieStop@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 131 | `_guTexAllocateMemory@60` | `0x2e70` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002e70__guTexAllocateMemory_60.c) |
| 132 | `_guTexChangeAttributes@48` | `0x3030` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003030__guTexChangeAttributes_48.c) |
| 133 | `_guTexCombineFunction@8` | `0x30b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b0__grTexCombineFunction_8.c) |
| 134 | `_guTexCreateColorMipMap@0` | `0x3804` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003804__guTexCreateColorMipMap_0.c) |
| 135 | `_guTexDownloadMipMap@12` | `0x31c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800031c8__guTexDownloadMipMap_12.c) |
| 136 | `_guTexDownloadMipMapLevel@12` | `0x3318` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003318__guTexDownloadMipMapLevel_12.c) |
| 137 | `_guTexGetCurrentMipMap@4` | `0x30b8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b8__guTexGetCurrentMipMap_4.c) |
| 138 | `_guTexGetMipMapInfo@4` | `0x3100` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003100__guTexGetMipMapInfo_4.c) |
| 139 | `_guTexMemQueryAvail@4` | `0x3148` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003148__guTexMemQueryAvail_4.c) |
| 140 | `_guTexMemReset@0` | `0x3194` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003194__guTexMemReset_0.c) |
| 141 | `_guTexSource@4` | `0x3454` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003454__guTexSource_4.c) |
| 142 | `_pciClose@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 143 | `_pciDeviceExists@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 144 | `_pciFindCard@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 145 | `_pciFindCardMulti@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 146 | `_pciFindFreeMTRR@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 147 | `_pciFindFreeMTRRMatch@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 148 | `_pciFindMTRRMatch@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 149 | `_pciGetConfigData@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 150 | `_pciGetErrorCode@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 151 | `_pciGetErrorString@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 152 | `_pciMapCard@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 153 | `_pciMapCardMulti@24` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 154 | `_pciMapPhysicalToLinear@12` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 155 | `_pciOpen@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 156 | `_pciOpenEx@0` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 157 | `_pciSetConfigData@20` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 158 | `_pciSetMTRR@16` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 159 | `_pciUnmapPhysical@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 160 | `_pioInByte@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 161 | `_pioInLong@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 162 | `_pioInWord@4` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 163 | `_pioOutByte@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 164 | `_pioOutLong@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 165 | `_pioOutWord@8` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 166 | `grAADrawLine` | `0x11dc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800011dc__grAADrawLine_8.c) |
| 167 | `grAADrawPoint` | `0x11a8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800011a8__grAADrawPoint_4.c) |
| 168 | `grAADrawPolygon` | `0x1284` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001284__grAADrawPolygon_12.c) |
| 169 | `grAADrawPolygonVertexList` | `0x12d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800012d0__grAADrawPolygonVertexList_8.c) |
| 170 | `grAADrawTriangle` | `0x1218` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001218__grAADrawTriangle_24.c) |
| 171 | `grAlphaBlendFunction` | `0x196c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000196c__grAlphaBlendFunction_16.c) |
| 172 | `grAlphaCombine` | `0x1994` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001994__grAlphaCombine_20.c) |
| 173 | `grAlphaControlsITRGBLighting` | `0x19c4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800019c4__grAlphaControlsITRGBLighting_4.c) |
| 174 | `grAlphaTestFunction` | `0x1a14` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a14__grAlphaTestFunction_4.c) |
| 175 | `grAlphaTestReferenceValue` | `0x1a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a2c__grAlphaTestReferenceValue_4.c) |
| 176 | `grBufferClear` | `0x1314` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001314__grBufferClear_12.c) |
| 177 | `grBufferNumPending` | `0x1338` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001338__grBufferNumPending_0.c) |
| 178 | `grBufferSwap` | `0x1368` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001368__grBufferSwap_4.c) |
| 179 | `grCheckForRoom` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 180 | `grChromakeyMode` | `0x1a80` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a80__grChromakeyMode_4.c) |
| 181 | `grChromakeyValue` | `0x1a98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001a98__grChromakeyValue_4.c) |
| 182 | `grClipWindow` | `0x1ab0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ab0__grClipWindow_16.c) |
| 183 | `grColorCombine` | `0x1ad8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ad8__grColorCombine_20.c) |
| 184 | `grColorMask` | `0x1b0c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001b0c__grColorMask_8.c) |
| 185 | `grConstantColorValue` | `0x1ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ba0__grConstantColorValue_4.c) |
| 186 | `grConstantColorValue4` | `0x1c00` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001c00__grConstantColorValue4_16.c) |
| 187 | `grCullMode` | `0x1b2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001b2c__grCullMode_4.c) |
| 188 | `grDepthBiasLevel` | `0x1cdc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001cdc__grDepthBiasLevel_4.c) |
| 189 | `grDepthBufferFunction` | `0x1d2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d2c__grDepthBufferFunction_4.c) |
| 190 | `grDepthBufferMode` | `0x1d80` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d80__grDepthBufferMode_4.c) |
| 191 | `grDepthMask` | `0x1d98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001d98__grDepthMask_4.c) |
| 192 | `grDisableAllEffects` | `0x1db0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001db0__grDisableAllEffects_0.c) |
| 193 | `grDitherMode` | `0x1e18` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001e18__grDitherMode_4.c) |
| 194 | `grDrawLine` | `0x1094` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001094__grDrawLine_8.c) |
| 195 | `grDrawPlanarPolygon` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 196 | `grDrawPlanarPolygonVertexList` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 197 | `grDrawPoint` | `0x1060` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001060__grDrawPoint_4.c) |
| 198 | `grDrawPolygon` | `0x1114` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001114__grDrawPlanarPolygon_12.c) |
| 199 | `grDrawPolygonVertexList` | `0x1160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001160__grDrawPlanarPolygonVertexList_8.c) |
| 200 | `grDrawTriangle` | `0x10d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800010d0__grDrawTriangle_12.c) |
| 201 | `grErrorSetCallback` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 202 | `grFogColorValue` | `0x1e6c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001e6c__grFogColorValue_4.c) |
| 203 | `grFogMode` | `0x1ecc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ecc__grFogMode_4.c) |
| 204 | `grFogTable` | `0x1ee4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001ee4__grFogTable_4.c) |
| 205 | `grGammaCorrectionValue` | `0x1f40` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001f40__grGammaCorrectionValue_4.c) |
| 206 | `grGlideGetState` | `0x2a40` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a40__grGlideGetState_4.c) |
| 207 | `grGlideGetVersion` | `0x2a2c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a2c__grGlideGetVersion_4.c) |
| 208 | `grGlideInit` | `0x2a0c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a0c__grGlideInit_0.c) |
| 209 | `grGlideSetState` | `0x2a58` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a58__grGlideSetState_4.c) |
| 210 | `grGlideShamelessPlug` | `0x2a74` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a74__grGlideShamelessPlug_4.c) |
| 211 | `grGlideShutdown` | `0x2a24` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a24__grGlideShutdown_0.c) |
| 212 | `grHints` | `0x2a90` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002a90__grHints_8.c) |
| 213 | `grLfbBegin` | `0x2500` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002500__grLfbBegin_0.c) |
| 214 | `grLfbBypassMode` | `0x24a4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024a4__grLfbBypassMode_4.c) |
| 215 | `grLfbConstantAlpha` | `0x286c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000286c__grLfbConstantAlpha_4.c) |
| 216 | `grLfbConstantDepth` | `0x28c0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800028c0__grLfbConstantDepth_4.c) |
| 217 | `grLfbEnd` | `0x25ec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800025ec__grLfbEnd_0.c) |
| 218 | `grLfbGetReadPtr` | `0x2684` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002684__grLfbGetReadPtr_4.c) |
| 219 | `grLfbGetWritePtr` | `0x2724` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002724__grLfbGetWritePtr_4.c) |
| 220 | `grLfbOrigin` | `0x24c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024c8__grLfbOrigin_4.c) |
| 221 | `grLfbReadRegion` | `0x29c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800029c8__grLfbReadRegion_28.c) |
| 222 | `grLfbWriteColorFormat` | `0x2914` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002914__grLfbWriteColorFormat_4.c) |
| 223 | `grLfbWriteColorSwizzle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 224 | `grLfbWriteMode` | `0x24e4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800024e4__grLfbWriteMode_4.c) |
| 225 | `grLfbWriteRegion` | `0x2968` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002968__grLfbWriteRegion_32.c) |
| 226 | `grRenderBuffer` | `0x1388` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001388__grRenderBuffer_4.c) |
| 227 | `grResetTriStats` | `0x18dc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800018dc__grResetTriStats_0.c) |
| 228 | `grSplash` | `0x1f90` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001f90__grSplash_20.c) |
| 229 | `grSstConfigPipeLine` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 230 | `grSstConfigPipeline` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 231 | `grSstDetectResources` | `0x37f8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800037f8__grSstDetectResources_0.c) |
| 232 | `grSstIdle` | `0x13a4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a4__grSstIdle_0.c) |
| 233 | `grSstIsBusy` | `0x1440` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001440__grSstIsBusy_0.c) |
| 234 | `grSstOpen` | `0x1474` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001474__grSstOpen_24.c) |
| 235 | `grSstOrigin` | `0x170c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000170c__grSstOrigin_4.c) |
| 236 | `grSstPassthruMode` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 237 | `grSstPerfStats` | `0x182c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000182c__grSstPerfStats_4.c) |
| 238 | `grSstQueryBoards` | `0x16d8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800016d8__grSstQueryBoards_4.c) |
| 239 | `grSstQueryHardware` | `0x1558` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001558__grSstQueryHardware_4.c) |
| 240 | `grSstResetPerfStats` | `0x18ac` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800018ac__grSstResetPerfStats_0.c) |
| 241 | `grSstScreenHeight` | `0x179c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000179c__grSstScreenHeight_0.c) |
| 242 | `grSstScreenWidth` | `0x17cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800017cc__grSstScreenWidth_0.c) |
| 243 | `grSstSelect` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 244 | `grSstStatus` | `0x17fc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800017fc__grSstStatus_0.c) |
| 245 | `grSstVRetraceOn` | `0x1404` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001404__grSstVRetraceOn_0.c) |
| 246 | `grSstVidMode` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 247 | `grSstVideoLine` | `0x13d4` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013d4__grSstVideoLine_0.c) |
| 248 | `grTexCalcMemRequired` | `0x1fc8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180001fc8__grTexCalcMemRequired_16.c) |
| 249 | `grTexClampMode` | `0x20f8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800020f8__grTexClampMode_12.c) |
| 250 | `grTexCombine` | `0x211c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000211c__grTexCombine_28.c) |
| 251 | `grTexCombineFunction` | `0x30b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b0__grTexCombineFunction_8.c) |
| 252 | `grTexDetailControl` | `0x2160` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002160__grTexDetailControl_16.c) |
| 253 | `grTexDownloadMipMap` | `0x2260` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002260__grTexDownloadMipMap_16.c) |
| 254 | `grTexDownloadMipMapLevel` | `0x22b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800022b0__grTexDownloadMipMapLevel_32.c) |
| 255 | `grTexDownloadMipMapLevelPartial` | `0x2308` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002308__grTexDownloadMipMapLevelPartial_40.c) |
| 256 | `grTexDownloadTable` | `0x2374` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002374__grTexDownloadTable_12.c) |
| 257 | `grTexDownloadTablePartial` | `0x23bc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800023bc__grTexDownloadTablePartial_20.c) |
| 258 | `grTexFilterMode` | `0x2220` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002220__grTexFilterMode_12.c) |
| 259 | `grTexLodBiasValue` | `0x2244` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002244__grTexLodBiasValue_8.c) |
| 260 | `grTexMaxAddress` | `0x204c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000204c__grTexMaxAddress_4.c) |
| 261 | `grTexMinAddress` | `0x203c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000203c__grTexMinAddress_4.c) |
| 262 | `grTexMipMapMode` | `0x23ec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800023ec__grTexMipMapMode_12.c) |
| 263 | `grTexMultibase` | `0x2410` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002410__grTexMultibase_8.c) |
| 264 | `grTexMultibaseAddress` | `0x2470` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002470__grTexMultibaseAddress_20.c) |
| 265 | `grTexNCCTable` | `0x2064` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002064__grTexNCCTable_8.c) |
| 266 | `grTexSource` | `0x20cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800020cc__grTexSource_16.c) |
| 267 | `grTexTextureMemRequired` | `0x2008` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002008__grTexTextureMemRequired_8.c) |
| 268 | `grTriStats` | `0x190c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000190c__grTriStats_8.c) |
| 269 | `gu3dfGetInfo` | `0x36a8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036a8__gu3dfGetInfo_8.c) |
| 270 | `gu3dfLoad` | `0x36e8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036e8__gu3dfLoad_8.c) |
| 271 | `guAADrawTriangleWithClip` | `0x35d0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800035d0__guAADrawTriangleWithClip_12.c) |
| 272 | `guAlphaSource` | `0x2b00` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002b00__guAlphaSource_4.c) |
| 273 | `guColorCombineFunction` | `0x2b98` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002b98__guColorCombineFunction_4.c) |
| 274 | `guDrawPolygonVertexListWithClip` | `0x3650` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003650__guDrawPolygonVertexListWithClip_8.c) |
| 275 | `guDrawTriangleWithClip` | `0x360c` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/18000360c__guDrawTriangleWithClip_12.c) |
| 276 | `guEncodeRLE16` | `0x3800` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003800__guEncodeRLE16_16.c) |
| 277 | `guEndianSwapBytes` | `0x36a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800036a0__guEndianSwapBytes_4.c) |
| 278 | `guEndianSwapWords` | `0x3698` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003698__guEndianSwapWords_4.c) |
| 279 | `guFbReadRegion` | `0x27cc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800027cc__guFbReadRegion_24.c) |
| 280 | `guFbWriteRegion` | `0x2810` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002810__guFbWriteRegion_24.c) |
| 281 | `guFogGenerateExp` | `0x2bec` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002bec__guFogGenerateExp_8.c) |
| 282 | `guFogGenerateExp2` | `0x2ccc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002ccc__guFogGenerateExp2_8.c) |
| 283 | `guFogGenerateLinear` | `0x2dcc` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002dcc__guFogGenerateLinear_12.c) |
| 284 | `guFogTableIndexToW` | `0x2ba0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002ba0__guFogTableIndexToW_4.c) |
| 285 | `guMPDrawTriangle` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 286 | `guMPInit` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 287 | `guMPTexCombineFunction` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 288 | `guMPTexSource` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 289 | `guMovieSetName` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 290 | `guMovieStart` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 291 | `guMovieStop` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 292 | `guTexAllocateMemory` | `0x2e70` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180002e70__guTexAllocateMemory_60.c) |
| 293 | `guTexChangeAttributes` | `0x3030` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003030__guTexChangeAttributes_48.c) |
| 294 | `guTexCombineFunction` | `0x30b0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b0__grTexCombineFunction_8.c) |
| 295 | `guTexCreateColorMipMap` | `0x3804` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003804__guTexCreateColorMipMap_0.c) |
| 296 | `guTexDownloadMipMap` | `0x31c8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800031c8__guTexDownloadMipMap_12.c) |
| 297 | `guTexDownloadMipMapLevel` | `0x3318` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003318__guTexDownloadMipMapLevel_12.c) |
| 298 | `guTexGetCurrentMipMap` | `0x30b8` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800030b8__guTexGetCurrentMipMap_4.c) |
| 299 | `guTexGetMipMapInfo` | `0x3100` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003100__guTexGetMipMapInfo_4.c) |
| 300 | `guTexMemQueryAvail` | `0x3148` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003148__guTexMemQueryAvail_4.c) |
| 301 | `guTexMemReset` | `0x3194` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003194__guTexMemReset_0.c) |
| 302 | `guTexSource` | `0x3454` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/180003454__guTexSource_4.c) |
| 303 | `pciClose` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 304 | `pciDeviceExists` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 305 | `pciFindCard` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 306 | `pciFindCardMulti` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 307 | `pciFindFreeMTRR` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 308 | `pciFindFreeMTRRMatch` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 309 | `pciFindMTRRMatch` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 310 | `pciGetConfigData` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 311 | `pciGetErrorCode` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 312 | `pciGetErrorString` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 313 | `pciMapCard` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 314 | `pciMapCardMulti` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 315 | `pciMapPhysicalToLinear` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 316 | `pciOpen` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 317 | `pciOpenEx` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 318 | `pciSetConfigData` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 319 | `pciSetMTRR` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 320 | `pciUnmapPhysical` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 321 | `pioInByte` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 322 | `pioInLong` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 323 | `pioInWord` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 324 | `pioOutByte` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 325 | `pioOutLong` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
| 326 | `pioOutWord` | `0x13a0` | [x64](../../../../decompiled/3Dfx/x64/Glide.dll/functions/1800013a0_ConvertAndDownloadRLE.c) |
