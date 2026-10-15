# 3Dfx/arm64/Glide2x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: ARM64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x5fb18`.
- Supplied SHA-256: `9093aa930c8fc36eb26db58f6d4fdf59e5b1c4319cf3f6ea01b147b797c32100`.
- Prepared SHA-256: `9093aa930c8fc36eb26db58f6d4fdf59e5b1c4319cf3f6ea01b147b797c32100`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/arm64/Glide2x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/full_decompilation.c) | 1,230 | 1,230 | 0 | 3,176 | 5,844 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**ARM64 navigation:** [Functions](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/arm64/Glide2x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/arm64/Glide2x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/arm64/Glide2x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/arm64/Glide2x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/arm64/Glide2x.dll/summary.json)

## Imports and useful search leads

Imported modules: `SHLWAPI.dll`, `KERNEL32.dll`, `USER32.dll`, `GDI32.dll`, `SHELL32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/arm64/Glide2x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/arm64/Glide2x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x5c710` | `0x5c774` | `00008052` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/18005c710_FUN_18005c710.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `ConvertAndDownLoadRLE` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 2 | `ConvertAndDownloadRle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 3 | `_ConvertAndDownLoadRLE@64` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 4 | `_ConvertAndDownloadRle@64` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 5 | `_grAADrawLine@8` | `0x1750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001750__grAADrawLine_8.c) |
| 6 | `_grAADrawPoint@4` | `0x1700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001700__grAADrawPoint_4.c) |
| 7 | `_grAADrawPolygon@12` | `0x1840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001840__grAADrawPolygon_12.c) |
| 8 | `_grAADrawPolygonVertexList@8` | `0x18b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800018b8__grAADrawPolygonVertexList_8.c) |
| 9 | `_grAADrawTriangle@24` | `0x17b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800017b0__grAADrawTriangle_24.c) |
| 10 | `_grAlphaBlendFunction@16` | `0x25d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800025d8__grAlphaBlendFunction_16.c) |
| 11 | `_grAlphaCombine@20` | `0x26b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800026b0__grAlphaCombine_20.c) |
| 12 | `_grAlphaControlsITRGBLighting@4` | `0x26e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800026e0__grAlphaControlsITRGBLighting_4.c) |
| 13 | `_grAlphaTestFunction@4` | `0x2750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002750__grAlphaTestFunction_4.c) |
| 14 | `_grAlphaTestReferenceValue@4` | `0x27c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800027c0__grAlphaTestReferenceValue_4.c) |
| 15 | `_grBufferClear@12` | `0x1928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001928__grBufferClear_12.c) |
| 16 | `_grBufferNumPending@0` | `0x19a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800019a0__grBufferNumPending_0.c) |
| 17 | `_grBufferSwap@4` | `0x19f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800019f8__grBufferSwap_4.c) |
| 18 | `_grCheckForRoom@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 19 | `_grChromakeyMode@4` | `0x2828` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002828__grChromakeyMode_4.c) |
| 20 | `_grChromakeyValue@4` | `0x2898` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002898__grChromakeyValue_4.c) |
| 21 | `_grClipWindow@16` | `0x2918` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002918__grClipWindow_16.c) |
| 22 | `_grColorCombine@20` | `0x2a20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002a20__grColorCombine_20.c) |
| 23 | `_grColorMask@8` | `0x2a58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002a58__grColorMask_8.c) |
| 24 | `_grConstantColorValue4@16` | `0x2bf8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002bf8__grConstantColorValue4_16.c) |
| 25 | `_grConstantColorValue@4` | `0x2b80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002b80__grConstantColorValue_4.c) |
| 26 | `_grCullMode@4` | `0x2af8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002af8__grCullMode_4.c) |
| 27 | `_grDepthBiasLevel@4` | `0x2ce0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002ce0__grDepthBiasLevel_4.c) |
| 28 | `_grDepthBufferFunction@4` | `0x2d50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002d50__grDepthBufferFunction_4.c) |
| 29 | `_grDepthBufferMode@4` | `0x2db8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002db8__grDepthBufferMode_4.c) |
| 30 | `_grDepthMask@4` | `0x2dd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002dd8__grDepthMask_4.c) |
| 31 | `_grDisableAllEffects@0` | `0x2e48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002e48__grDisableAllEffects_0.c) |
| 32 | `_grDitherMode@4` | `0x2fe0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002fe0__grDitherMode_4.c) |
| 33 | `_grDrawLine@8` | `0x1540` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001540__grDrawLine_8.c) |
| 34 | `_grDrawPlanarPolygon@12` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 35 | `_grDrawPlanarPolygonVertexList@8` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 36 | `_grDrawPoint@4` | `0x14f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800014f0__grDrawPoint_4.c) |
| 37 | `_grDrawPolygon@12` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 38 | `_grDrawPolygonVertexList@8` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 39 | `_grDrawTriangle@12` | `0x15a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800015a0__grDrawTriangle_12.c) |
| 40 | `_grErrorSetCallback@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 41 | `_grFogColorValue@4` | `0x3048` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003048__grFogColorValue_4.c) |
| 42 | `_grFogMode@4` | `0x30c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800030c8__grFogMode_4.c) |
| 43 | `_grFogTable@4` | `0x3138` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003138__grFogTable_4.c) |
| 44 | `_grGammaCorrectionValue@4` | `0x31a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800031a0__grGammaCorrectionValue_4.c) |
| 45 | `_grGlideGetState@4` | `0x4510` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004510__grGlideGetState_4.c) |
| 46 | `_grGlideGetVersion@4` | `0x44f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800044f0__grGlideGetVersion_4.c) |
| 47 | `_grGlideInit@0` | `0x4418` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004418__grGlideInit_0.c) |
| 48 | `_grGlideSetState@4` | `0x4578` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004578__grGlideSetState_4.c) |
| 49 | `_grGlideShamelessPlug@4` | `0x4648` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004648__grGlideShamelessPlug_4.c) |
| 50 | `_grGlideShutdown@0` | `0x4430` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004430__grGlideShutdown_0.c) |
| 51 | `_grHints@8` | `0x4668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004668__grHints_8.c) |
| 52 | `_grLfbConstantAlpha@4` | `0x4090` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004090__grLfbConstantAlpha_4.c) |
| 53 | `_grLfbConstantDepth@4` | `0x40f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800040f8__grLfbConstantDepth_4.c) |
| 54 | `_grLfbLock@24` | `0x3f48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003f48__grLfbLock_24.c) |
| 55 | `_grLfbReadRegion@28` | `0x4320` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004320__grLfbReadRegion_28.c) |
| 56 | `_grLfbUnlock@8` | `0x3ff0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003ff0__grLfbUnlock_8.c) |
| 57 | `_grLfbWriteColorFormat@4` | `0x4168` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004168__grLfbWriteColorFormat_4.c) |
| 58 | `_grLfbWriteColorSwizzle@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 59 | `_grLfbWriteRegion@32` | `0x41d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800041d0__grLfbWriteRegion_32.c) |
| 60 | `_grRenderBuffer@4` | `0x1e60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e60__grRenderBuffer_4.c) |
| 61 | `_grResetTriStats@0` | `0x2518` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002518__grResetTriStats_0.c) |
| 62 | `_grSplash@20` | `0x32a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800032a8__grSplash_20.c) |
| 63 | `_grSstConfigPipeLine@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 64 | `_grSstConfigPipeline@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 65 | `_grSstControl@4` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020d8__grSstControl_4.c) |
| 66 | `_grSstDetectResources@0` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020d8__grSstControl_4.c) |
| 67 | `_grSstIdle@0` | `0x1e88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e88__grSstIdle_0.c) |
| 68 | `_grSstIsBusy@0` | `0x1f80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001f80__grSstIsBusy_0.c) |
| 69 | `_grSstOrigin@4` | `0x22d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800022d0__grSstOrigin_4.c) |
| 70 | `_grSstPerfStats@4` | `0x2440` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002440__grSstPerfStats_4.c) |
| 71 | `_grSstQueryBoards@4` | `0x2280` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002280__grSstQueryBoards_4.c) |
| 72 | `_grSstQueryHardware@4` | `0x20e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020e0__grSstQueryHardware_4.c) |
| 73 | `_grSstResetPerfStats@0` | `0x24d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800024d0__grSstResetPerfStats_0.c) |
| 74 | `_grSstScreenHeight@0` | `0x2378` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002378__grSstScreenHeight_0.c) |
| 75 | `_grSstScreenWidth@0` | `0x23b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800023b0__grSstScreenWidth_0.c) |
| 76 | `_grSstSelect@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 77 | `_grSstStatus@0` | `0x23e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800023e8__grSstStatus_0.c) |
| 78 | `_grSstVRetraceOn@0` | `0x1f28` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001f28__grSstVRetraceOn_0.c) |
| 79 | `_grSstVidMode@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 80 | `_grSstVideoLine@0` | `0x1ed0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001ed0__grSstVideoLine_0.c) |
| 81 | `_grSstWinClose@0` | `0x20c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020c0__grSstWinClose_0.c) |
| 82 | `_grSstWinOpen@28` | `0x1fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001fd8__grSstWinOpen_28.c) |
| 83 | `_grTexCalcMemRequired@16` | `0x32e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800032e0__grTexCalcMemRequired_16.c) |
| 84 | `_grTexClampMode@12` | `0x35a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800035a0__grTexClampMode_12.c) |
| 85 | `_grTexCombine@28` | `0x3660` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003660__grTexCombine_28.c) |
| 86 | `_grTexCombineFunction@8` | `0x4f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004f30__grTexCombineFunction_8.c) |
| 87 | `_grTexDetailControl@16` | `0x3698` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003698__grTexDetailControl_16.c) |
| 88 | `_grTexDownloadMipMap@16` | `0x3930` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003930__grTexDownloadMipMap_16.c) |
| 89 | `_grTexDownloadMipMapLevel@32` | `0x3b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003b38__grTexDownloadMipMapLevel_32.c) |
| 90 | `_grTexDownloadMipMapLevelPartial@40` | `0x3bc0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003bc0__grTexDownloadMipMapLevelPartial_40.c) |
| 91 | `_grTexDownloadTable@12` | `0x3c18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003c18__grTexDownloadTable_12.c) |
| 92 | `_grTexDownloadTablePartial@20` | `0x3c80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003c80__grTexDownloadTablePartial_20.c) |
| 93 | `_grTexFilterMode@12` | `0x3790` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003790__grTexFilterMode_12.c) |
| 94 | `_grTexLodBiasValue@8` | `0x3850` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003850__grTexLodBiasValue_8.c) |
| 95 | `_grTexMaxAddress@4` | `0x3368` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003368__grTexMaxAddress_4.c) |
| 96 | `_grTexMinAddress@4` | `0x3350` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003350__grTexMinAddress_4.c) |
| 97 | `_grTexMipMapMode@12` | `0x3cb0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003cb0__grTexMipMapMode_12.c) |
| 98 | `_grTexMultibase@8` | `0x3d78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003d78__grTexMultibase_8.c) |
| 99 | `_grTexMultibaseAddress@20` | `0x3e10` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003e10__grTexMultibaseAddress_20.c) |
| 100 | `_grTexNCCTable@8` | `0x33f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800033f8__grTexNCCTable_8.c) |
| 101 | `_grTexSource@16` | `0x3478` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003478__grTexSource_16.c) |
| 102 | `_grTexTextureMemRequired@8` | `0x3320` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003320__grTexTextureMemRequired_8.c) |
| 103 | `_grTriStats@8` | `0x2560` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002560__grTriStats_8.c) |
| 104 | `_gu3dfGetInfo@8` | `0x5b58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b58__gu3dfGetInfo_8.c) |
| 105 | `_gu3dfLoad@8` | `0x5ba0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005ba0__gu3dfLoad_8.c) |
| 106 | `_guAADrawTriangleWithClip@12` | `0x59f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800059f0__guAADrawTriangleWithClip_12.c) |
| 107 | `_guAlphaSource@4` | `0x46f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800046f0__guAlphaSource_4.c) |
| 108 | `_guColorCombineFunction@4` | `0x4780` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004780__guColorCombineFunction_4.c) |
| 109 | `_guDrawPolygonVertexListWithClip@8` | `0x5ac8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005ac8__guDrawPolygonVertexListWithClip_8.c) |
| 110 | `_guDrawTriangleWithClip@12` | `0x5a58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005a58__guDrawTriangleWithClip_12.c) |
| 111 | `_guEncodeRLE16@16` | `0x5c90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005c90__guEncodeRLE16_16.c) |
| 112 | `_guEndianSwapBytes@4` | `0x5b48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b48__guEndianSwapBytes_4.c) |
| 113 | `_guEndianSwapWords@4` | `0x5b40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b40__guEndianSwapWords_4.c) |
| 114 | `_guFbReadRegion@24` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 115 | `_guFbWriteRegion@24` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 116 | `_guFogGenerateExp2@8` | `0x49e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800049e8__guFogGenerateExp2_8.c) |
| 117 | `_guFogGenerateExp@8` | `0x4938` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004938__guFogGenerateExp_8.c) |
| 118 | `_guFogGenerateLinear@12` | `0x4aa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004aa8__guFogGenerateLinear_12.c) |
| 119 | `_guFogTableIndexToW@4` | `0x48f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800048f0__guFogTableIndexToW_4.c) |
| 120 | `_guMPDrawTriangle@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 121 | `_guMPInit@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 122 | `_guMPTexCombineFunction@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 123 | `_guMPTexSource@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 124 | `_guMovieSetName@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 125 | `_guMovieStart@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 126 | `_guMovieStop@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 127 | `_guTexAllocateMemory@60` | `0x4b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004b38__guTexAllocateMemory_60.c) |
| 128 | `_guTexChangeAttributes@48` | `0x4d18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004d18__guTexChangeAttributes_48.c) |
| 129 | `_guTexCombineFunction@8` | `0x4f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004f30__grTexCombineFunction_8.c) |
| 130 | `_guTexCreateColorMipMap@0` | `0x5c98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005c98__guTexCreateColorMipMap_0.c) |
| 131 | `_guTexDownloadMipMap@12` | `0x51e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800051e8__guTexDownloadMipMap_12.c) |
| 132 | `_guTexDownloadMipMapLevel@12` | `0x54e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800054e8__guTexDownloadMipMapLevel_12.c) |
| 133 | `_guTexGetCurrentMipMap@4` | `0x5000` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005000__guTexGetCurrentMipMap_4.c) |
| 134 | `_guTexGetMipMapInfo@4` | `0x5080` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005080__guTexGetMipMapInfo_4.c) |
| 135 | `_guTexMemQueryAvail@4` | `0x50f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800050f0__guTexMemQueryAvail_4.c) |
| 136 | `_guTexMemReset@0` | `0x51c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800051c0__guTexMemReset_0.c) |
| 137 | `_guTexSource@4` | `0x5668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005668__guTexSource_4.c) |
| 138 | `_pciClose@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 139 | `_pciDeviceExists@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 140 | `_pciFindCard@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 141 | `_pciFindCardMulti@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 142 | `_pciFindFreeMTRR@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 143 | `_pciFindFreeMTRRMatch@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 144 | `_pciFindMTRRMatch@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 145 | `_pciGetConfigData@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 146 | `_pciGetErrorCode@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 147 | `_pciGetErrorString@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 148 | `_pciMapCard@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 149 | `_pciMapCardMulti@24` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 150 | `_pciMapPhysicalToLinear@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 151 | `_pciOpen@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 152 | `_pciOpenEx@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 153 | `_pciSetConfigData@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 154 | `_pciSetMTRR@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 155 | `_pciUnmapPhysical@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 156 | `_pioInByte@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 157 | `_pioInLong@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 158 | `_pioInWord@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 159 | `_pioOutByte@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 160 | `_pioOutLong@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 161 | `_pioOutWord@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 162 | `grAADrawLine` | `0x1750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001750__grAADrawLine_8.c) |
| 163 | `grAADrawPoint` | `0x1700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001700__grAADrawPoint_4.c) |
| 164 | `grAADrawPolygon` | `0x1840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001840__grAADrawPolygon_12.c) |
| 165 | `grAADrawPolygonVertexList` | `0x18b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800018b8__grAADrawPolygonVertexList_8.c) |
| 166 | `grAADrawTriangle` | `0x17b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800017b0__grAADrawTriangle_24.c) |
| 167 | `grAlphaBlendFunction` | `0x25d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800025d8__grAlphaBlendFunction_16.c) |
| 168 | `grAlphaCombine` | `0x26b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800026b0__grAlphaCombine_20.c) |
| 169 | `grAlphaControlsITRGBLighting` | `0x26e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800026e0__grAlphaControlsITRGBLighting_4.c) |
| 170 | `grAlphaTestFunction` | `0x2750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002750__grAlphaTestFunction_4.c) |
| 171 | `grAlphaTestReferenceValue` | `0x27c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800027c0__grAlphaTestReferenceValue_4.c) |
| 172 | `grBufferClear` | `0x1928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001928__grBufferClear_12.c) |
| 173 | `grBufferNumPending` | `0x19a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800019a0__grBufferNumPending_0.c) |
| 174 | `grBufferSwap` | `0x19f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800019f8__grBufferSwap_4.c) |
| 175 | `grCheckForRoom` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 176 | `grChromakeyMode` | `0x2828` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002828__grChromakeyMode_4.c) |
| 177 | `grChromakeyValue` | `0x2898` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002898__grChromakeyValue_4.c) |
| 178 | `grClipWindow` | `0x2918` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002918__grClipWindow_16.c) |
| 179 | `grColorCombine` | `0x2a20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002a20__grColorCombine_20.c) |
| 180 | `grColorMask` | `0x2a58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002a58__grColorMask_8.c) |
| 181 | `grConstantColorValue` | `0x2b80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002b80__grConstantColorValue_4.c) |
| 182 | `grConstantColorValue4` | `0x2bf8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002bf8__grConstantColorValue4_16.c) |
| 183 | `grCullMode` | `0x2af8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002af8__grCullMode_4.c) |
| 184 | `grDepthBiasLevel` | `0x2ce0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002ce0__grDepthBiasLevel_4.c) |
| 185 | `grDepthBufferFunction` | `0x2d50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002d50__grDepthBufferFunction_4.c) |
| 186 | `grDepthBufferMode` | `0x2db8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002db8__grDepthBufferMode_4.c) |
| 187 | `grDepthMask` | `0x2dd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002dd8__grDepthMask_4.c) |
| 188 | `grDisableAllEffects` | `0x2e48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002e48__grDisableAllEffects_0.c) |
| 189 | `grDitherMode` | `0x2fe0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002fe0__grDitherMode_4.c) |
| 190 | `grDrawLine` | `0x1540` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001540__grDrawLine_8.c) |
| 191 | `grDrawPlanarPolygon` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 192 | `grDrawPlanarPolygonVertexList` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 193 | `grDrawPoint` | `0x14f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800014f0__grDrawPoint_4.c) |
| 194 | `grDrawPolygon` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 195 | `grDrawPolygonVertexList` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 196 | `grDrawTriangle` | `0x15a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800015a0__grDrawTriangle_12.c) |
| 197 | `grErrorSetCallback` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 198 | `grFogColorValue` | `0x3048` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003048__grFogColorValue_4.c) |
| 199 | `grFogMode` | `0x30c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800030c8__grFogMode_4.c) |
| 200 | `grFogTable` | `0x3138` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003138__grFogTable_4.c) |
| 201 | `grGammaCorrectionValue` | `0x31a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800031a0__grGammaCorrectionValue_4.c) |
| 202 | `grGlideGetState` | `0x4510` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004510__grGlideGetState_4.c) |
| 203 | `grGlideGetVersion` | `0x44f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800044f0__grGlideGetVersion_4.c) |
| 204 | `grGlideInit` | `0x4418` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004418__grGlideInit_0.c) |
| 205 | `grGlideSetState` | `0x4578` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004578__grGlideSetState_4.c) |
| 206 | `grGlideShamelessPlug` | `0x4648` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004648__grGlideShamelessPlug_4.c) |
| 207 | `grGlideShutdown` | `0x4430` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004430__grGlideShutdown_0.c) |
| 208 | `grHints` | `0x4668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004668__grHints_8.c) |
| 209 | `grLfbConstantAlpha` | `0x4090` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004090__grLfbConstantAlpha_4.c) |
| 210 | `grLfbConstantDepth` | `0x40f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800040f8__grLfbConstantDepth_4.c) |
| 211 | `grLfbLock` | `0x3f48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003f48__grLfbLock_24.c) |
| 212 | `grLfbReadRegion` | `0x4320` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004320__grLfbReadRegion_28.c) |
| 213 | `grLfbUnlock` | `0x3ff0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003ff0__grLfbUnlock_8.c) |
| 214 | `grLfbWriteColorFormat` | `0x4168` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004168__grLfbWriteColorFormat_4.c) |
| 215 | `grLfbWriteColorSwizzle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 216 | `grLfbWriteRegion` | `0x41d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800041d0__grLfbWriteRegion_32.c) |
| 217 | `grRenderBuffer` | `0x1e60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e60__grRenderBuffer_4.c) |
| 218 | `grResetTriStats` | `0x2518` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002518__grResetTriStats_0.c) |
| 219 | `grSplash` | `0x32a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800032a8__grSplash_20.c) |
| 220 | `grSstConfigPipeLine` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 221 | `grSstConfigPipeline` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 222 | `grSstControl` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020d8__grSstControl_4.c) |
| 223 | `grSstDetectResources` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020d8__grSstControl_4.c) |
| 224 | `grSstIdle` | `0x1e88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e88__grSstIdle_0.c) |
| 225 | `grSstIsBusy` | `0x1f80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001f80__grSstIsBusy_0.c) |
| 226 | `grSstOrigin` | `0x22d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800022d0__grSstOrigin_4.c) |
| 227 | `grSstPerfStats` | `0x2440` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002440__grSstPerfStats_4.c) |
| 228 | `grSstQueryBoards` | `0x2280` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002280__grSstQueryBoards_4.c) |
| 229 | `grSstQueryHardware` | `0x20e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020e0__grSstQueryHardware_4.c) |
| 230 | `grSstResetPerfStats` | `0x24d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800024d0__grSstResetPerfStats_0.c) |
| 231 | `grSstScreenHeight` | `0x2378` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002378__grSstScreenHeight_0.c) |
| 232 | `grSstScreenWidth` | `0x23b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800023b0__grSstScreenWidth_0.c) |
| 233 | `grSstSelect` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 234 | `grSstStatus` | `0x23e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800023e8__grSstStatus_0.c) |
| 235 | `grSstVRetraceOn` | `0x1f28` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001f28__grSstVRetraceOn_0.c) |
| 236 | `grSstVidMode` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 237 | `grSstVideoLine` | `0x1ed0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001ed0__grSstVideoLine_0.c) |
| 238 | `grSstWinClose` | `0x20c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800020c0__grSstWinClose_0.c) |
| 239 | `grSstWinOpen` | `0x1fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001fd8__grSstWinOpen_28.c) |
| 240 | `grTexCalcMemRequired` | `0x32e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800032e0__grTexCalcMemRequired_16.c) |
| 241 | `grTexClampMode` | `0x35a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800035a0__grTexClampMode_12.c) |
| 242 | `grTexCombine` | `0x3660` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003660__grTexCombine_28.c) |
| 243 | `grTexCombineFunction` | `0x4f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004f30__grTexCombineFunction_8.c) |
| 244 | `grTexDetailControl` | `0x3698` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003698__grTexDetailControl_16.c) |
| 245 | `grTexDownloadMipMap` | `0x3930` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003930__grTexDownloadMipMap_16.c) |
| 246 | `grTexDownloadMipMapLevel` | `0x3b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003b38__grTexDownloadMipMapLevel_32.c) |
| 247 | `grTexDownloadMipMapLevelPartial` | `0x3bc0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003bc0__grTexDownloadMipMapLevelPartial_40.c) |
| 248 | `grTexDownloadTable` | `0x3c18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003c18__grTexDownloadTable_12.c) |
| 249 | `grTexDownloadTablePartial` | `0x3c80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003c80__grTexDownloadTablePartial_20.c) |
| 250 | `grTexFilterMode` | `0x3790` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003790__grTexFilterMode_12.c) |
| 251 | `grTexLodBiasValue` | `0x3850` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003850__grTexLodBiasValue_8.c) |
| 252 | `grTexMaxAddress` | `0x3368` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003368__grTexMaxAddress_4.c) |
| 253 | `grTexMinAddress` | `0x3350` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003350__grTexMinAddress_4.c) |
| 254 | `grTexMipMapMode` | `0x3cb0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003cb0__grTexMipMapMode_12.c) |
| 255 | `grTexMultibase` | `0x3d78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003d78__grTexMultibase_8.c) |
| 256 | `grTexMultibaseAddress` | `0x3e10` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003e10__grTexMultibaseAddress_20.c) |
| 257 | `grTexNCCTable` | `0x33f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800033f8__grTexNCCTable_8.c) |
| 258 | `grTexSource` | `0x3478` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003478__grTexSource_16.c) |
| 259 | `grTexTextureMemRequired` | `0x3320` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180003320__grTexTextureMemRequired_8.c) |
| 260 | `grTriStats` | `0x2560` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180002560__grTriStats_8.c) |
| 261 | `gu3dfGetInfo` | `0x5b58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b58__gu3dfGetInfo_8.c) |
| 262 | `gu3dfLoad` | `0x5ba0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005ba0__gu3dfLoad_8.c) |
| 263 | `guAADrawTriangleWithClip` | `0x59f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800059f0__guAADrawTriangleWithClip_12.c) |
| 264 | `guAlphaSource` | `0x46f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800046f0__guAlphaSource_4.c) |
| 265 | `guColorCombineFunction` | `0x4780` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004780__guColorCombineFunction_4.c) |
| 266 | `guDrawPolygonVertexListWithClip` | `0x5ac8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005ac8__guDrawPolygonVertexListWithClip_8.c) |
| 267 | `guDrawTriangleWithClip` | `0x5a58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005a58__guDrawTriangleWithClip_12.c) |
| 268 | `guEncodeRLE16` | `0x5c90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005c90__guEncodeRLE16_16.c) |
| 269 | `guEndianSwapBytes` | `0x5b48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b48__guEndianSwapBytes_4.c) |
| 270 | `guEndianSwapWords` | `0x5b40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005b40__guEndianSwapWords_4.c) |
| 271 | `guFbReadRegion` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 272 | `guFbWriteRegion` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 273 | `guFogGenerateExp` | `0x4938` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004938__guFogGenerateExp_8.c) |
| 274 | `guFogGenerateExp2` | `0x49e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800049e8__guFogGenerateExp2_8.c) |
| 275 | `guFogGenerateLinear` | `0x4aa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004aa8__guFogGenerateLinear_12.c) |
| 276 | `guFogTableIndexToW` | `0x48f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800048f0__guFogTableIndexToW_4.c) |
| 277 | `guMPDrawTriangle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 278 | `guMPInit` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 279 | `guMPTexCombineFunction` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 280 | `guMPTexSource` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 281 | `guMovieSetName` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 282 | `guMovieStart` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 283 | `guMovieStop` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 284 | `guTexAllocateMemory` | `0x4b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004b38__guTexAllocateMemory_60.c) |
| 285 | `guTexChangeAttributes` | `0x4d18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004d18__guTexChangeAttributes_48.c) |
| 286 | `guTexCombineFunction` | `0x4f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180004f30__grTexCombineFunction_8.c) |
| 287 | `guTexCreateColorMipMap` | `0x5c98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005c98__guTexCreateColorMipMap_0.c) |
| 288 | `guTexDownloadMipMap` | `0x51e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800051e8__guTexDownloadMipMap_12.c) |
| 289 | `guTexDownloadMipMapLevel` | `0x54e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800054e8__guTexDownloadMipMapLevel_12.c) |
| 290 | `guTexGetCurrentMipMap` | `0x5000` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005000__guTexGetCurrentMipMap_4.c) |
| 291 | `guTexGetMipMapInfo` | `0x5080` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005080__guTexGetMipMapInfo_4.c) |
| 292 | `guTexMemQueryAvail` | `0x50f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800050f0__guTexMemQueryAvail_4.c) |
| 293 | `guTexMemReset` | `0x51c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/1800051c0__guTexMemReset_0.c) |
| 294 | `guTexSource` | `0x5668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180005668__guTexSource_4.c) |
| 295 | `pciClose` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 296 | `pciDeviceExists` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 297 | `pciFindCard` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 298 | `pciFindCardMulti` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 299 | `pciFindFreeMTRR` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 300 | `pciFindFreeMTRRMatch` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 301 | `pciFindMTRRMatch` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 302 | `pciGetConfigData` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 303 | `pciGetErrorCode` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 304 | `pciGetErrorString` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 305 | `pciMapCard` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 306 | `pciMapCardMulti` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 307 | `pciMapPhysicalToLinear` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 308 | `pciOpen` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 309 | `pciOpenEx` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 310 | `pciSetConfigData` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 311 | `pciSetMTRR` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 312 | `pciUnmapPhysical` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 313 | `pioInByte` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 314 | `pioInLong` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 315 | `pioInWord` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 316 | `pioOutByte` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 317 | `pioOutLong` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
| 318 | `pioOutWord` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide2x.dll/functions/180001e80_ConvertAndDownLoadRLE.c) |
