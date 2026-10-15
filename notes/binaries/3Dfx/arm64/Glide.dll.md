# 3Dfx/arm64/Glide.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: ARM64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x60968`.
- Supplied SHA-256: `6447eb7c5c9c27287a43c6fc3b0d92c92831ebcb462e094befdc8e1ccb33e215`.
- Prepared SHA-256: `6447eb7c5c9c27287a43c6fc3b0d92c92831ebcb462e094befdc8e1ccb33e215`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/arm64/Glide.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/full_decompilation.c) | 1,237 | 1,237 | 0 | 3,176 | 5,800 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**ARM64 navigation:** [Functions](../../../../decompiled/3Dfx/arm64/Glide.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/arm64/Glide.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/arm64/Glide.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/arm64/Glide.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/arm64/Glide.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/arm64/Glide.dll/summary.json)

## Imports and useful search leads

Imported modules: `SHLWAPI.dll`, `KERNEL32.dll`, `USER32.dll`, `GDI32.dll`, `SHELL32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/arm64/Glide.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/arm64/Glide.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x5d560` | `0x5d5c4` | `00008052` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/18005d560_FUN_18005d560.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `ConvertAndDownloadRLE` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 2 | `ConvertAndDownloadRle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 3 | `_ConvertAndDownLoadRLE@64` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 4 | `_ConvertAndDownloadRle@64` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 5 | `_grAADrawLine@8` | `0x1750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001750__grAADrawLine_8.c) |
| 6 | `_grAADrawPoint@4` | `0x1700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001700__grAADrawPoint_4.c) |
| 7 | `_grAADrawPolygon@12` | `0x1840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001840__grAADrawPolygon_12.c) |
| 8 | `_grAADrawPolygonVertexList@8` | `0x18b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800018b8__grAADrawPolygonVertexList_8.c) |
| 9 | `_grAADrawTriangle@24` | `0x17b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800017b0__grAADrawTriangle_24.c) |
| 10 | `_grAlphaBlendFunction@16` | `0x25d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800025d0__grAlphaBlendFunction_16.c) |
| 11 | `_grAlphaCombine@20` | `0x26a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800026a8__grAlphaCombine_20.c) |
| 12 | `_grAlphaControlsITRGBLighting@4` | `0x26d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800026d8__grAlphaControlsITRGBLighting_4.c) |
| 13 | `_grAlphaTestFunction@4` | `0x2748` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002748__grAlphaTestFunction_4.c) |
| 14 | `_grAlphaTestReferenceValue@4` | `0x27b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800027b8__grAlphaTestReferenceValue_4.c) |
| 15 | `_grBufferClear@12` | `0x1928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001928__grBufferClear_12.c) |
| 16 | `_grBufferNumPending@0` | `0x19a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800019a0__grBufferNumPending_0.c) |
| 17 | `_grBufferSwap@4` | `0x19f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800019f8__grBufferSwap_4.c) |
| 18 | `_grCheckForRoom@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 19 | `_grChromakeyMode@4` | `0x2820` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002820__grChromakeyMode_4.c) |
| 20 | `_grChromakeyValue@4` | `0x2890` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002890__grChromakeyValue_4.c) |
| 21 | `_grClipWindow@16` | `0x2910` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002910__grClipWindow_16.c) |
| 22 | `_grColorCombine@20` | `0x2a18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002a18__grColorCombine_20.c) |
| 23 | `_grColorMask@8` | `0x2a50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002a50__grColorMask_8.c) |
| 24 | `_grConstantColorValue4@16` | `0x2bf0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002bf0__grConstantColorValue4_16.c) |
| 25 | `_grConstantColorValue@4` | `0x2b78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002b78__grConstantColorValue_4.c) |
| 26 | `_grCullMode@4` | `0x2af0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002af0__grCullMode_4.c) |
| 27 | `_grDepthBiasLevel@4` | `0x2cd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002cd8__grDepthBiasLevel_4.c) |
| 28 | `_grDepthBufferFunction@4` | `0x2d48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002d48__grDepthBufferFunction_4.c) |
| 29 | `_grDepthBufferMode@4` | `0x2db0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002db0__grDepthBufferMode_4.c) |
| 30 | `_grDepthMask@4` | `0x2dd0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002dd0__grDepthMask_4.c) |
| 31 | `_grDisableAllEffects@0` | `0x2e40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002e40__grDisableAllEffects_0.c) |
| 32 | `_grDitherMode@4` | `0x2fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002fd8__grDitherMode_4.c) |
| 33 | `_grDrawLine@8` | `0x1540` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001540__grDrawLine_8.c) |
| 34 | `_grDrawPlanarPolygon@12` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 35 | `_grDrawPlanarPolygonVertexList@8` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 36 | `_grDrawPoint@4` | `0x14f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800014f0__grDrawPoint_4.c) |
| 37 | `_grDrawPolygon@12` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 38 | `_grDrawPolygonVertexList@8` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 39 | `_grDrawTriangle@12` | `0x15a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800015a0__grDrawTriangle_12.c) |
| 40 | `_grErrorSetCallback@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 41 | `_grFogColorValue@4` | `0x3040` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003040__grFogColorValue_4.c) |
| 42 | `_grFogMode@4` | `0x30c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800030c0__grFogMode_4.c) |
| 43 | `_grFogTable@4` | `0x3130` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003130__grFogTable_4.c) |
| 44 | `_grGammaCorrectionValue@4` | `0x3198` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003198__grGammaCorrectionValue_4.c) |
| 45 | `_grGlideGetState@4` | `0x4fb0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004fb0__grGlideGetState_4.c) |
| 46 | `_grGlideGetVersion@4` | `0x4f90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004f90__grGlideGetVersion_4.c) |
| 47 | `_grGlideInit@0` | `0x4a50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004a50__grGlideInit_0.c) |
| 48 | `_grGlideSetState@4` | `0x5018` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005018__grGlideSetState_4.c) |
| 49 | `_grGlideShamelessPlug@4` | `0x50e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800050e8__grGlideShamelessPlug_4.c) |
| 50 | `_grGlideShutdown@0` | `0x4a68` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004a68__grGlideShutdown_0.c) |
| 51 | `_grHints@8` | `0x5108` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005108__grHints_8.c) |
| 52 | `_grLfbBegin@0` | `0x4218` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004218__grLfbBegin_0.c) |
| 53 | `_grLfbBypassMode@4` | `0x3f40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003f40__grLfbBypassMode_4.c) |
| 54 | `_grLfbConstantAlpha@4` | `0x46c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800046c8__grLfbConstantAlpha_4.c) |
| 55 | `_grLfbConstantDepth@4` | `0x4730` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004730__grLfbConstantDepth_4.c) |
| 56 | `_grLfbEnd@0` | `0x42d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800042d0__grLfbEnd_0.c) |
| 57 | `_grLfbGetReadPtr@4` | `0x4368` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004368__grLfbGetReadPtr_4.c) |
| 58 | `_grLfbGetWritePtr@4` | `0x4400` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004400__grLfbGetWritePtr_4.c) |
| 59 | `_grLfbOrigin@4` | `0x4038` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004038__grLfbOrigin_4.c) |
| 60 | `_grLfbReadRegion@28` | `0x4958` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004958__grLfbReadRegion_28.c) |
| 61 | `_grLfbWriteColorFormat@4` | `0x47a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800047a0__grLfbWriteColorFormat_4.c) |
| 62 | `_grLfbWriteColorSwizzle@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 63 | `_grLfbWriteMode@4` | `0x4128` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004128__grLfbWriteMode_4.c) |
| 64 | `_grLfbWriteRegion@32` | `0x4808` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004808__grLfbWriteRegion_32.c) |
| 65 | `_grRenderBuffer@4` | `0x1e60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e60__grRenderBuffer_4.c) |
| 66 | `_grResetTriStats@0` | `0x2510` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002510__grResetTriStats_0.c) |
| 67 | `_grSplash@20` | `0x32a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800032a0__grSplash_20.c) |
| 68 | `_grSstConfigPipeLine@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 69 | `_grSstConfigPipeline@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 70 | `_grSstDetectResources@0` | `0x6730` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006730__grSstDetectResources_0.c) |
| 71 | `_grSstIdle@0` | `0x1e88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e88__grSstIdle_0.c) |
| 72 | `_grSstIsBusy@0` | `0x1f80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001f80__grSstIsBusy_0.c) |
| 73 | `_grSstOpen@24` | `0x1fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001fd8__grSstOpen_24.c) |
| 74 | `_grSstOrigin@4` | `0x22c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800022c8__grSstOrigin_4.c) |
| 75 | `_grSstPassthruMode@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 76 | `_grSstPerfStats@4` | `0x2438` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002438__grSstPerfStats_4.c) |
| 77 | `_grSstQueryBoards@4` | `0x2278` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002278__grSstQueryBoards_4.c) |
| 78 | `_grSstQueryHardware@4` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800020d8__grSstQueryHardware_4.c) |
| 79 | `_grSstResetPerfStats@0` | `0x24c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800024c8__grSstResetPerfStats_0.c) |
| 80 | `_grSstScreenHeight@0` | `0x2370` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002370__grSstScreenHeight_0.c) |
| 81 | `_grSstScreenWidth@0` | `0x23a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800023a8__grSstScreenWidth_0.c) |
| 82 | `_grSstSelect@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 83 | `_grSstStatus@0` | `0x23e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800023e0__grSstStatus_0.c) |
| 84 | `_grSstVRetraceOn@0` | `0x1f28` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001f28__grSstVRetraceOn_0.c) |
| 85 | `_grSstVidMode@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 86 | `_grSstVideoLine@0` | `0x1ed0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001ed0__grSstVideoLine_0.c) |
| 87 | `_grTexCalcMemRequired@16` | `0x32d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800032d8__grTexCalcMemRequired_16.c) |
| 88 | `_grTexClampMode@12` | `0x3598` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003598__grTexClampMode_12.c) |
| 89 | `_grTexCombine@28` | `0x3658` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003658__grTexCombine_28.c) |
| 90 | `_grTexCombineFunction@8` | `0x59d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800059d0__grTexCombineFunction_8.c) |
| 91 | `_grTexDetailControl@16` | `0x3690` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003690__grTexDetailControl_16.c) |
| 92 | `_grTexDownloadMipMap@16` | `0x3928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003928__grTexDownloadMipMap_16.c) |
| 93 | `_grTexDownloadMipMapLevel@32` | `0x3b30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003b30__grTexDownloadMipMapLevel_32.c) |
| 94 | `_grTexDownloadMipMapLevelPartial@40` | `0x3bb8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003bb8__grTexDownloadMipMapLevelPartial_40.c) |
| 95 | `_grTexDownloadTable@12` | `0x3c10` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003c10__grTexDownloadTable_12.c) |
| 96 | `_grTexDownloadTablePartial@20` | `0x3c78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003c78__grTexDownloadTablePartial_20.c) |
| 97 | `_grTexFilterMode@12` | `0x3788` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003788__grTexFilterMode_12.c) |
| 98 | `_grTexLodBiasValue@8` | `0x3848` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003848__grTexLodBiasValue_8.c) |
| 99 | `_grTexMaxAddress@4` | `0x3360` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003360__grTexMaxAddress_4.c) |
| 100 | `_grTexMinAddress@4` | `0x3348` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003348__grTexMinAddress_4.c) |
| 101 | `_grTexMipMapMode@12` | `0x3ca8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003ca8__grTexMipMapMode_12.c) |
| 102 | `_grTexMultibase@8` | `0x3d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003d70__grTexMultibase_8.c) |
| 103 | `_grTexMultibaseAddress@20` | `0x3e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003e08__grTexMultibaseAddress_20.c) |
| 104 | `_grTexNCCTable@8` | `0x33f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800033f0__grTexNCCTable_8.c) |
| 105 | `_grTexSource@16` | `0x3470` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003470__grTexSource_16.c) |
| 106 | `_grTexTextureMemRequired@8` | `0x3318` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003318__grTexTextureMemRequired_8.c) |
| 107 | `_grTriStats@8` | `0x2558` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002558__grTriStats_8.c) |
| 108 | `_gu3dfGetInfo@8` | `0x65f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065f8__gu3dfGetInfo_8.c) |
| 109 | `_gu3dfLoad@8` | `0x6640` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006640__gu3dfLoad_8.c) |
| 110 | `_guAADrawTriangleWithClip@12` | `0x6490` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006490__guAADrawTriangleWithClip_12.c) |
| 111 | `_guAlphaSource@4` | `0x5190` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005190__guAlphaSource_4.c) |
| 112 | `_guColorCombineFunction@4` | `0x5220` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005220__guColorCombineFunction_4.c) |
| 113 | `_guDrawPolygonVertexListWithClip@8` | `0x6568` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006568__guDrawPolygonVertexListWithClip_8.c) |
| 114 | `_guDrawTriangleWithClip@12` | `0x64f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800064f8__guDrawTriangleWithClip_12.c) |
| 115 | `_guEncodeRLE16@16` | `0x6740` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006740__guEncodeRLE16_16.c) |
| 116 | `_guEndianSwapBytes@4` | `0x65e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065e8__guEndianSwapBytes_4.c) |
| 117 | `_guEndianSwapWords@4` | `0x65e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065e0__guEndianSwapWords_4.c) |
| 118 | `_guFbReadRegion@24` | `0x4498` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004498__guFbReadRegion_24.c) |
| 119 | `_guFbWriteRegion@24` | `0x4580` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004580__guFbWriteRegion_24.c) |
| 120 | `_guFogGenerateExp2@8` | `0x5488` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005488__guFogGenerateExp2_8.c) |
| 121 | `_guFogGenerateExp@8` | `0x53d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800053d8__guFogGenerateExp_8.c) |
| 122 | `_guFogGenerateLinear@12` | `0x5548` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005548__guFogGenerateLinear_12.c) |
| 123 | `_guFogTableIndexToW@4` | `0x5390` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005390__guFogTableIndexToW_4.c) |
| 124 | `_guMPDrawTriangle@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 125 | `_guMPInit@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 126 | `_guMPTexCombineFunction@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 127 | `_guMPTexSource@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 128 | `_guMovieSetName@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 129 | `_guMovieStart@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 130 | `_guMovieStop@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 131 | `_guTexAllocateMemory@60` | `0x55d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800055d8__guTexAllocateMemory_60.c) |
| 132 | `_guTexChangeAttributes@48` | `0x57b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800057b8__guTexChangeAttributes_48.c) |
| 133 | `_guTexCombineFunction@8` | `0x59d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800059d0__grTexCombineFunction_8.c) |
| 134 | `_guTexCreateColorMipMap@0` | `0x6748` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006748__guTexCreateColorMipMap_0.c) |
| 135 | `_guTexDownloadMipMap@12` | `0x5c88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005c88__guTexDownloadMipMap_12.c) |
| 136 | `_guTexDownloadMipMapLevel@12` | `0x5f88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005f88__guTexDownloadMipMapLevel_12.c) |
| 137 | `_guTexGetCurrentMipMap@4` | `0x5aa0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005aa0__guTexGetCurrentMipMap_4.c) |
| 138 | `_guTexGetMipMapInfo@4` | `0x5b20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005b20__guTexGetMipMapInfo_4.c) |
| 139 | `_guTexMemQueryAvail@4` | `0x5b90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005b90__guTexMemQueryAvail_4.c) |
| 140 | `_guTexMemReset@0` | `0x5c60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005c60__guTexMemReset_0.c) |
| 141 | `_guTexSource@4` | `0x6108` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006108__guTexSource_4.c) |
| 142 | `_pciClose@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 143 | `_pciDeviceExists@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 144 | `_pciFindCard@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 145 | `_pciFindCardMulti@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 146 | `_pciFindFreeMTRR@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 147 | `_pciFindFreeMTRRMatch@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 148 | `_pciFindMTRRMatch@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 149 | `_pciGetConfigData@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 150 | `_pciGetErrorCode@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 151 | `_pciGetErrorString@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 152 | `_pciMapCard@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 153 | `_pciMapCardMulti@24` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 154 | `_pciMapPhysicalToLinear@12` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 155 | `_pciOpen@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 156 | `_pciOpenEx@0` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 157 | `_pciSetConfigData@20` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 158 | `_pciSetMTRR@16` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 159 | `_pciUnmapPhysical@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 160 | `_pioInByte@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 161 | `_pioInLong@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 162 | `_pioInWord@4` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 163 | `_pioOutByte@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 164 | `_pioOutLong@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 165 | `_pioOutWord@8` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 166 | `grAADrawLine` | `0x1750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001750__grAADrawLine_8.c) |
| 167 | `grAADrawPoint` | `0x1700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001700__grAADrawPoint_4.c) |
| 168 | `grAADrawPolygon` | `0x1840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001840__grAADrawPolygon_12.c) |
| 169 | `grAADrawPolygonVertexList` | `0x18b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800018b8__grAADrawPolygonVertexList_8.c) |
| 170 | `grAADrawTriangle` | `0x17b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800017b0__grAADrawTriangle_24.c) |
| 171 | `grAlphaBlendFunction` | `0x25d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800025d0__grAlphaBlendFunction_16.c) |
| 172 | `grAlphaCombine` | `0x26a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800026a8__grAlphaCombine_20.c) |
| 173 | `grAlphaControlsITRGBLighting` | `0x26d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800026d8__grAlphaControlsITRGBLighting_4.c) |
| 174 | `grAlphaTestFunction` | `0x2748` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002748__grAlphaTestFunction_4.c) |
| 175 | `grAlphaTestReferenceValue` | `0x27b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800027b8__grAlphaTestReferenceValue_4.c) |
| 176 | `grBufferClear` | `0x1928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001928__grBufferClear_12.c) |
| 177 | `grBufferNumPending` | `0x19a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800019a0__grBufferNumPending_0.c) |
| 178 | `grBufferSwap` | `0x19f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800019f8__grBufferSwap_4.c) |
| 179 | `grCheckForRoom` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 180 | `grChromakeyMode` | `0x2820` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002820__grChromakeyMode_4.c) |
| 181 | `grChromakeyValue` | `0x2890` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002890__grChromakeyValue_4.c) |
| 182 | `grClipWindow` | `0x2910` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002910__grClipWindow_16.c) |
| 183 | `grColorCombine` | `0x2a18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002a18__grColorCombine_20.c) |
| 184 | `grColorMask` | `0x2a50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002a50__grColorMask_8.c) |
| 185 | `grConstantColorValue` | `0x2b78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002b78__grConstantColorValue_4.c) |
| 186 | `grConstantColorValue4` | `0x2bf0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002bf0__grConstantColorValue4_16.c) |
| 187 | `grCullMode` | `0x2af0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002af0__grCullMode_4.c) |
| 188 | `grDepthBiasLevel` | `0x2cd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002cd8__grDepthBiasLevel_4.c) |
| 189 | `grDepthBufferFunction` | `0x2d48` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002d48__grDepthBufferFunction_4.c) |
| 190 | `grDepthBufferMode` | `0x2db0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002db0__grDepthBufferMode_4.c) |
| 191 | `grDepthMask` | `0x2dd0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002dd0__grDepthMask_4.c) |
| 192 | `grDisableAllEffects` | `0x2e40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002e40__grDisableAllEffects_0.c) |
| 193 | `grDitherMode` | `0x2fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002fd8__grDitherMode_4.c) |
| 194 | `grDrawLine` | `0x1540` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001540__grDrawLine_8.c) |
| 195 | `grDrawPlanarPolygon` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 196 | `grDrawPlanarPolygonVertexList` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 197 | `grDrawPoint` | `0x14f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800014f0__grDrawPoint_4.c) |
| 198 | `grDrawPolygon` | `0x1610` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001610__grDrawPlanarPolygon_12.c) |
| 199 | `grDrawPolygonVertexList` | `0x1688` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001688__grDrawPlanarPolygonVertexList_8.c) |
| 200 | `grDrawTriangle` | `0x15a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800015a0__grDrawTriangle_12.c) |
| 201 | `grErrorSetCallback` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 202 | `grFogColorValue` | `0x3040` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003040__grFogColorValue_4.c) |
| 203 | `grFogMode` | `0x30c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800030c0__grFogMode_4.c) |
| 204 | `grFogTable` | `0x3130` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003130__grFogTable_4.c) |
| 205 | `grGammaCorrectionValue` | `0x3198` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003198__grGammaCorrectionValue_4.c) |
| 206 | `grGlideGetState` | `0x4fb0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004fb0__grGlideGetState_4.c) |
| 207 | `grGlideGetVersion` | `0x4f90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004f90__grGlideGetVersion_4.c) |
| 208 | `grGlideInit` | `0x4a50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004a50__grGlideInit_0.c) |
| 209 | `grGlideSetState` | `0x5018` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005018__grGlideSetState_4.c) |
| 210 | `grGlideShamelessPlug` | `0x50e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800050e8__grGlideShamelessPlug_4.c) |
| 211 | `grGlideShutdown` | `0x4a68` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004a68__grGlideShutdown_0.c) |
| 212 | `grHints` | `0x5108` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005108__grHints_8.c) |
| 213 | `grLfbBegin` | `0x4218` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004218__grLfbBegin_0.c) |
| 214 | `grLfbBypassMode` | `0x3f40` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003f40__grLfbBypassMode_4.c) |
| 215 | `grLfbConstantAlpha` | `0x46c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800046c8__grLfbConstantAlpha_4.c) |
| 216 | `grLfbConstantDepth` | `0x4730` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004730__grLfbConstantDepth_4.c) |
| 217 | `grLfbEnd` | `0x42d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800042d0__grLfbEnd_0.c) |
| 218 | `grLfbGetReadPtr` | `0x4368` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004368__grLfbGetReadPtr_4.c) |
| 219 | `grLfbGetWritePtr` | `0x4400` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004400__grLfbGetWritePtr_4.c) |
| 220 | `grLfbOrigin` | `0x4038` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004038__grLfbOrigin_4.c) |
| 221 | `grLfbReadRegion` | `0x4958` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004958__grLfbReadRegion_28.c) |
| 222 | `grLfbWriteColorFormat` | `0x47a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800047a0__grLfbWriteColorFormat_4.c) |
| 223 | `grLfbWriteColorSwizzle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 224 | `grLfbWriteMode` | `0x4128` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004128__grLfbWriteMode_4.c) |
| 225 | `grLfbWriteRegion` | `0x4808` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004808__grLfbWriteRegion_32.c) |
| 226 | `grRenderBuffer` | `0x1e60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e60__grRenderBuffer_4.c) |
| 227 | `grResetTriStats` | `0x2510` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002510__grResetTriStats_0.c) |
| 228 | `grSplash` | `0x32a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800032a0__grSplash_20.c) |
| 229 | `grSstConfigPipeLine` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 230 | `grSstConfigPipeline` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 231 | `grSstDetectResources` | `0x6730` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006730__grSstDetectResources_0.c) |
| 232 | `grSstIdle` | `0x1e88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e88__grSstIdle_0.c) |
| 233 | `grSstIsBusy` | `0x1f80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001f80__grSstIsBusy_0.c) |
| 234 | `grSstOpen` | `0x1fd8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001fd8__grSstOpen_24.c) |
| 235 | `grSstOrigin` | `0x22c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800022c8__grSstOrigin_4.c) |
| 236 | `grSstPassthruMode` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 237 | `grSstPerfStats` | `0x2438` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002438__grSstPerfStats_4.c) |
| 238 | `grSstQueryBoards` | `0x2278` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002278__grSstQueryBoards_4.c) |
| 239 | `grSstQueryHardware` | `0x20d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800020d8__grSstQueryHardware_4.c) |
| 240 | `grSstResetPerfStats` | `0x24c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800024c8__grSstResetPerfStats_0.c) |
| 241 | `grSstScreenHeight` | `0x2370` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002370__grSstScreenHeight_0.c) |
| 242 | `grSstScreenWidth` | `0x23a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800023a8__grSstScreenWidth_0.c) |
| 243 | `grSstSelect` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 244 | `grSstStatus` | `0x23e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800023e0__grSstStatus_0.c) |
| 245 | `grSstVRetraceOn` | `0x1f28` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001f28__grSstVRetraceOn_0.c) |
| 246 | `grSstVidMode` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 247 | `grSstVideoLine` | `0x1ed0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001ed0__grSstVideoLine_0.c) |
| 248 | `grTexCalcMemRequired` | `0x32d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800032d8__grTexCalcMemRequired_16.c) |
| 249 | `grTexClampMode` | `0x3598` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003598__grTexClampMode_12.c) |
| 250 | `grTexCombine` | `0x3658` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003658__grTexCombine_28.c) |
| 251 | `grTexCombineFunction` | `0x59d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800059d0__grTexCombineFunction_8.c) |
| 252 | `grTexDetailControl` | `0x3690` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003690__grTexDetailControl_16.c) |
| 253 | `grTexDownloadMipMap` | `0x3928` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003928__grTexDownloadMipMap_16.c) |
| 254 | `grTexDownloadMipMapLevel` | `0x3b30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003b30__grTexDownloadMipMapLevel_32.c) |
| 255 | `grTexDownloadMipMapLevelPartial` | `0x3bb8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003bb8__grTexDownloadMipMapLevelPartial_40.c) |
| 256 | `grTexDownloadTable` | `0x3c10` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003c10__grTexDownloadTable_12.c) |
| 257 | `grTexDownloadTablePartial` | `0x3c78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003c78__grTexDownloadTablePartial_20.c) |
| 258 | `grTexFilterMode` | `0x3788` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003788__grTexFilterMode_12.c) |
| 259 | `grTexLodBiasValue` | `0x3848` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003848__grTexLodBiasValue_8.c) |
| 260 | `grTexMaxAddress` | `0x3360` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003360__grTexMaxAddress_4.c) |
| 261 | `grTexMinAddress` | `0x3348` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003348__grTexMinAddress_4.c) |
| 262 | `grTexMipMapMode` | `0x3ca8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003ca8__grTexMipMapMode_12.c) |
| 263 | `grTexMultibase` | `0x3d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003d70__grTexMultibase_8.c) |
| 264 | `grTexMultibaseAddress` | `0x3e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003e08__grTexMultibaseAddress_20.c) |
| 265 | `grTexNCCTable` | `0x33f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800033f0__grTexNCCTable_8.c) |
| 266 | `grTexSource` | `0x3470` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003470__grTexSource_16.c) |
| 267 | `grTexTextureMemRequired` | `0x3318` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180003318__grTexTextureMemRequired_8.c) |
| 268 | `grTriStats` | `0x2558` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180002558__grTriStats_8.c) |
| 269 | `gu3dfGetInfo` | `0x65f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065f8__gu3dfGetInfo_8.c) |
| 270 | `gu3dfLoad` | `0x6640` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006640__gu3dfLoad_8.c) |
| 271 | `guAADrawTriangleWithClip` | `0x6490` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006490__guAADrawTriangleWithClip_12.c) |
| 272 | `guAlphaSource` | `0x5190` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005190__guAlphaSource_4.c) |
| 273 | `guColorCombineFunction` | `0x5220` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005220__guColorCombineFunction_4.c) |
| 274 | `guDrawPolygonVertexListWithClip` | `0x6568` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006568__guDrawPolygonVertexListWithClip_8.c) |
| 275 | `guDrawTriangleWithClip` | `0x64f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800064f8__guDrawTriangleWithClip_12.c) |
| 276 | `guEncodeRLE16` | `0x6740` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006740__guEncodeRLE16_16.c) |
| 277 | `guEndianSwapBytes` | `0x65e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065e8__guEndianSwapBytes_4.c) |
| 278 | `guEndianSwapWords` | `0x65e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800065e0__guEndianSwapWords_4.c) |
| 279 | `guFbReadRegion` | `0x4498` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004498__guFbReadRegion_24.c) |
| 280 | `guFbWriteRegion` | `0x4580` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180004580__guFbWriteRegion_24.c) |
| 281 | `guFogGenerateExp` | `0x53d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800053d8__guFogGenerateExp_8.c) |
| 282 | `guFogGenerateExp2` | `0x5488` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005488__guFogGenerateExp2_8.c) |
| 283 | `guFogGenerateLinear` | `0x5548` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005548__guFogGenerateLinear_12.c) |
| 284 | `guFogTableIndexToW` | `0x5390` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005390__guFogTableIndexToW_4.c) |
| 285 | `guMPDrawTriangle` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 286 | `guMPInit` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 287 | `guMPTexCombineFunction` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 288 | `guMPTexSource` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 289 | `guMovieSetName` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 290 | `guMovieStart` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 291 | `guMovieStop` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 292 | `guTexAllocateMemory` | `0x55d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800055d8__guTexAllocateMemory_60.c) |
| 293 | `guTexChangeAttributes` | `0x57b8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800057b8__guTexChangeAttributes_48.c) |
| 294 | `guTexCombineFunction` | `0x59d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/1800059d0__grTexCombineFunction_8.c) |
| 295 | `guTexCreateColorMipMap` | `0x6748` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006748__guTexCreateColorMipMap_0.c) |
| 296 | `guTexDownloadMipMap` | `0x5c88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005c88__guTexDownloadMipMap_12.c) |
| 297 | `guTexDownloadMipMapLevel` | `0x5f88` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005f88__guTexDownloadMipMapLevel_12.c) |
| 298 | `guTexGetCurrentMipMap` | `0x5aa0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005aa0__guTexGetCurrentMipMap_4.c) |
| 299 | `guTexGetMipMapInfo` | `0x5b20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005b20__guTexGetMipMapInfo_4.c) |
| 300 | `guTexMemQueryAvail` | `0x5b90` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005b90__guTexMemQueryAvail_4.c) |
| 301 | `guTexMemReset` | `0x5c60` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180005c60__guTexMemReset_0.c) |
| 302 | `guTexSource` | `0x6108` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180006108__guTexSource_4.c) |
| 303 | `pciClose` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 304 | `pciDeviceExists` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 305 | `pciFindCard` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 306 | `pciFindCardMulti` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 307 | `pciFindFreeMTRR` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 308 | `pciFindFreeMTRRMatch` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 309 | `pciFindMTRRMatch` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 310 | `pciGetConfigData` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 311 | `pciGetErrorCode` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 312 | `pciGetErrorString` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 313 | `pciMapCard` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 314 | `pciMapCardMulti` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 315 | `pciMapPhysicalToLinear` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 316 | `pciOpen` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 317 | `pciOpenEx` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 318 | `pciSetConfigData` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 319 | `pciSetMTRR` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 320 | `pciUnmapPhysical` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 321 | `pioInByte` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 322 | `pioInLong` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 323 | `pioInWord` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 324 | `pioOutByte` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 325 | `pioOutLong` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
| 326 | `pioOutWord` | `0x1e80` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide.dll/functions/180001e80_ConvertAndDownloadRLE.c) |
