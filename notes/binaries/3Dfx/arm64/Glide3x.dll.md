# 3Dfx/arm64/Glide3x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: ARM64, PE32+.
- Preferred image base: `0x180000000`; entry RVA: `0x63650`.
- Supplied SHA-256: `c89145b15a275d7cefcc3493ec896289a3b5378ac41f416ad4d25e813271e424`.
- Prepared SHA-256: `c89145b15a275d7cefcc3493ec896289a3b5378ac41f416ad4d25e813271e424`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/arm64/Glide3x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/full_decompilation.c) | 1,266 | 1,266 | 0 | 3,152 | 6,072 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**ARM64 navigation:** [Functions](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/arm64/Glide3x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/arm64/Glide3x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/arm64/Glide3x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/arm64/Glide3x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/arm64/Glide3x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.dll`, `USER32.dll`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/arm64/Glide3x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/arm64/Glide3x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x5ffe0` | `0x60044` | `00008052` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/18005ffe0_FUN_18005ffe0.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_grAADrawTriangle@24` | `0x1828` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001828__grAADrawTriangle_24.c) |
| 2 | `_grAlphaBlendFunction@16` | `0x2430` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002430__grAlphaBlendFunction_16.c) |
| 3 | `_grAlphaCombine@20` | `0x2508` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002508__grAlphaCombine_20.c) |
| 4 | `_grAlphaControlsITRGBLighting@4` | `0x2608` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002608__grAlphaControlsITRGBLighting_4.c) |
| 5 | `_grAlphaTestFunction@4` | `0x2678` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002678__grAlphaTestFunction_4.c) |
| 6 | `_grAlphaTestReferenceValue@4` | `0x26e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800026e8__grAlphaTestReferenceValue_4.c) |
| 7 | `_grAuxBufferExt@4` | `0x1d98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d98__grAuxBufferExt_4.c) |
| 8 | `_grBufferClear@12` | `0x18c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800018c8__grBufferClear_12.c) |
| 9 | `_grBufferSwap@4` | `0x1940` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001940__grBufferSwap_4.c) |
| 10 | `_grChromaRangeExt@12` | `0x28d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800028d8__grChromaRangeExt_12.c) |
| 11 | `_grChromaRangeModeExt@4` | `0x2840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002840__grChromaRangeModeExt_4.c) |
| 12 | `_grChromakeyMode@4` | `0x2750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002750__grChromakeyMode_4.c) |
| 13 | `_grChromakeyValue@4` | `0x27c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800027c0__grChromakeyValue_4.c) |
| 14 | `_grClipWindow@16` | `0x2be8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002be8__grClipWindow_16.c) |
| 15 | `_grColorCombine@20` | `0x2cf0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002cf0__grColorCombine_20.c) |
| 16 | `_grColorMask@8` | `0x2e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002e08__grColorMask_8.c) |
| 17 | `_grConstantColorValue@4` | `0x2f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002f30__grConstantColorValue_4.c) |
| 18 | `_grCoordinateSpace@4` | `0x3ca0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ca0__grCoordinateSpace_4.c) |
| 19 | `_grCullMode@4` | `0x2ea8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002ea8__grCullMode_4.c) |
| 20 | `_grDepthBiasLevel@4` | `0x2fa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002fa8__grDepthBiasLevel_4.c) |
| 21 | `_grDepthBufferFunction@4` | `0x3018` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003018__grDepthBufferFunction_4.c) |
| 22 | `_grDepthBufferMode@4` | `0x3080` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003080__grDepthBufferMode_4.c) |
| 23 | `_grDepthMask@4` | `0x30a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800030a0__grDepthMask_4.c) |
| 24 | `_grDepthRange@8` | `0x3cf8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003cf8__grDepthRange_8.c) |
| 25 | `_grDisable@4` | `0x3bc0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003bc0__grDisable_4.c) |
| 26 | `_grDisableAllEffects@0` | `0x3110` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003110__grDisableAllEffects_0.c) |
| 27 | `_grDitherMode@4` | `0x32a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800032a8__grDitherMode_4.c) |
| 28 | `_grDrawLine@8` | `0x1410` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001410__grDrawLine_8.c) |
| 29 | `_grDrawPoint@4` | `0x13b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800013b0__grDrawPoint_4.c) |
| 30 | `_grDrawTriangle@12` | `0x1480` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001480__grDrawTriangle_12.c) |
| 31 | `_grDrawVertexArray@12` | `0x1728` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001728__grDrawVertexArray_12.c) |
| 32 | `_grDrawVertexArrayContiguous@16` | `0x17a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800017a0__grDrawVertexArrayContiguous_16.c) |
| 33 | `_grEnable@4` | `0x3ae0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ae0__grEnable_4.c) |
| 34 | `_grErrorSetCallback@4` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 35 | `_grFinish@0` | `0x21a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800021a0__grFinish_0.c) |
| 36 | `_grFlush@0` | `0x21f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800021f8__grFlush_0.c) |
| 37 | `_grFogColorValue@4` | `0x3310` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003310__grFogColorValue_4.c) |
| 38 | `_grFogMode@4` | `0x3390` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003390__grFogMode_4.c) |
| 39 | `_grFogTable@4` | `0x3400` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003400__grFogTable_4.c) |
| 40 | `_grGet@12` | `0x3570` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003570__grGet_12.c) |
| 41 | `_grGetGammaTableExt@16` | `0x5c20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005c20__grGetGammaTableExt_16.c) |
| 42 | `_grGetProcAddress@4` | `0x5e20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005e20__grGetProcAddress_4.c) |
| 43 | `_grGetString@4` | `0x3598` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003598__grGetString_4.c) |
| 44 | `_grGlideGetState@4` | `0x5668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005668__grGlideGetState_4.c) |
| 45 | `_grGlideGetVertexLayout@4` | `0x57f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800057f8__grGlideGetVertexLayout_4.c) |
| 46 | `_grGlideInit@0` | `0x5590` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005590__grGlideInit_0.c) |
| 47 | `_grGlideSetState@4` | `0x5700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005700__grGlideSetState_4.c) |
| 48 | `_grGlideSetVertexLayout@4` | `0x5838` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005838__grGlideSetVertexLayout_4.c) |
| 49 | `_grGlideShutdown@0` | `0x55a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800055a8__grGlideShutdown_0.c) |
| 50 | `_grLfbConstantAlpha@4` | `0x51a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800051a0__grLfbConstantAlpha_4.c) |
| 51 | `_grLfbConstantDepth@4` | `0x5208` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005208__grLfbConstantDepth_4.c) |
| 52 | `_grLfbLock@24` | `0x5020` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005020__grLfbLock_24.c) |
| 53 | `_grLfbReadRegion@28` | `0x5468` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005468__grLfbReadRegion_28.c) |
| 54 | `_grLfbUnlock@8` | `0x50c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800050c8__grLfbUnlock_8.c) |
| 55 | `_grLfbWriteColorFormat@4` | `0x5278` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005278__grLfbWriteColorFormat_4.c) |
| 56 | `_grLfbWriteColorSwizzle@8` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 57 | `_grLfbWriteRegion@36` | `0x52e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800052e0__grLfbWriteRegion_36.c) |
| 58 | `_grLoadGammaTable@16` | `0x3468` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003468__grLoadGammaTable_16.c) |
| 59 | `_grQueryResolutions@8` | `0x3680` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003680__grQueryResolutions_8.c) |
| 60 | `_grRenderBuffer@4` | `0x1d78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d78__grRenderBuffer_4.c) |
| 61 | `_grReset@4` | `0x3a78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003a78__grReset_4.c) |
| 62 | `_grSelectContext@4` | `0x2360` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002360__grSelectContext_4.c) |
| 63 | `_grSetNumPendingBuffers@4` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 64 | `_grSplash@20` | `0x3538` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003538__grSplash_20.c) |
| 65 | `_grSstOrigin@4` | `0x2388` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002388__grSstOrigin_4.c) |
| 66 | `_grSstSelect@4` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 67 | `_grSstWinClose@4` | `0x2340` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002340__grSstWinClose_4.c) |
| 68 | `_grSstWinOpen@28` | `0x2240` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002240__grSstWinOpen_28.c) |
| 69 | `_grTexCalcMemRequired@16` | `0x3dd0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003dd0__grTexCalcMemRequired_16.c) |
| 70 | `_grTexChromaModeExt@8` | `0x29f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800029f0__grTexChromaModeExt_8.c) |
| 71 | `_grTexChromaRangeExt@16` | `0x2aa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002aa8__grTexChromaRangeExt_16.c) |
| 72 | `_grTexClampMode@12` | `0x40d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800040d0__grTexClampMode_12.c) |
| 73 | `_grTexCombine@28` | `0x4198` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004198__grTexCombine_28.c) |
| 74 | `_grTexDetailControl@16` | `0x4310` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004310__grTexDetailControl_16.c) |
| 75 | `_grTexDownloadMipMap@16` | `0x45b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800045b0__grTexDownloadMipMap_16.c) |
| 76 | `_grTexDownloadMipMapLevel@32` | `0x47a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800047a8__grTexDownloadMipMapLevel_32.c) |
| 77 | `_grTexDownloadMipMapLevelPartial@40` | `0x4980` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004980__grTexDownloadMipMapLevelPartial_40.c) |
| 78 | `_grTexDownloadTable@8` | `0x4b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004b38__grTexDownloadTable_8.c) |
| 79 | `_grTexDownloadTablePartial@16` | `0x4bc8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004bc8__grTexDownloadTablePartial_16.c) |
| 80 | `_grTexFilterMode@12` | `0x4410` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004410__grTexFilterMode_12.c) |
| 81 | `_grTexLodBiasValue@8` | `0x44d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800044d8__grTexLodBiasValue_8.c) |
| 82 | `_grTexMaxAddress@4` | `0x3e50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e50__grTexMaxAddress_4.c) |
| 83 | `_grTexMinAddress@4` | `0x3e38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e38__grTexMinAddress_4.c) |
| 84 | `_grTexMipMapMode@12` | `0x4d38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004d38__grTexMipMapMode_12.c) |
| 85 | `_grTexMultibase@8` | `0x4e00` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004e00__grTexMultibase_8.c) |
| 86 | `_grTexMultibaseAddress@20` | `0x4e98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004e98__grTexMultibaseAddress_20.c) |
| 87 | `_grTexNCCTable@4` | `0x3ee0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ee0__grTexNCCTable_4.c) |
| 88 | `_grTexSource@16` | `0x3f78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003f78__grTexSource_16.c) |
| 89 | `_grTexTextureMemRequired@8` | `0x3e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e08__grTexTextureMemRequired_8.c) |
| 90 | `_grTextureAuxBufferExt@28` | `0x2008` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002008__grTextureAuxBufferExt_28.c) |
| 91 | `_grTextureBufferExt@28` | `0x1e18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001e18__grTextureBufferExt_28.c) |
| 92 | `_grVertexLayout@12` | `0x14f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800014f8__grVertexLayout_12.c) |
| 93 | `_grViewport@16` | `0x3d58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003d58__grViewport_16.c) |
| 94 | `_gu3dfGetInfo@8` | `0x5ce8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005ce8__gu3dfGetInfo_8.c) |
| 95 | `_gu3dfLoad@8` | `0x5d30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005d30__gu3dfLoad_8.c) |
| 96 | `_guFogGenerateExp2@8` | `0x59a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800059a8__guFogGenerateExp2_8.c) |
| 97 | `_guFogGenerateExp@8` | `0x58f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800058f8__guFogGenerateExp_8.c) |
| 98 | `_guFogGenerateLinear@12` | `0x5a68` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005a68__guFogGenerateLinear_12.c) |
| 99 | `_guFogTableIndexToW@4` | `0x58b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800058b0__guFogTableIndexToW_4.c) |
| 100 | `_guGammaCorrectionRGB@12` | `0x5af8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005af8__guGammaCorrectionRGB_12.c) |
| 101 | `grAADrawTriangle` | `0x1828` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001828__grAADrawTriangle_24.c) |
| 102 | `grAlphaBlendFunction` | `0x2430` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002430__grAlphaBlendFunction_16.c) |
| 103 | `grAlphaCombine` | `0x2508` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002508__grAlphaCombine_20.c) |
| 104 | `grAlphaControlsITRGBLighting` | `0x2608` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002608__grAlphaControlsITRGBLighting_4.c) |
| 105 | `grAlphaTestFunction` | `0x2678` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002678__grAlphaTestFunction_4.c) |
| 106 | `grAlphaTestReferenceValue` | `0x26e8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800026e8__grAlphaTestReferenceValue_4.c) |
| 107 | `grAuxBufferExt` | `0x1d98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d98__grAuxBufferExt_4.c) |
| 108 | `grBufferClear` | `0x18c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800018c8__grBufferClear_12.c) |
| 109 | `grBufferSwap` | `0x1940` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001940__grBufferSwap_4.c) |
| 110 | `grChromaRangeExt` | `0x28d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800028d8__grChromaRangeExt_12.c) |
| 111 | `grChromaRangeModeExt` | `0x2840` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002840__grChromaRangeModeExt_4.c) |
| 112 | `grChromakeyMode` | `0x2750` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002750__grChromakeyMode_4.c) |
| 113 | `grChromakeyValue` | `0x27c0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800027c0__grChromakeyValue_4.c) |
| 114 | `grClipWindow` | `0x2be8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002be8__grClipWindow_16.c) |
| 115 | `grColorCombine` | `0x2cf0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002cf0__grColorCombine_20.c) |
| 116 | `grColorMask` | `0x2e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002e08__grColorMask_8.c) |
| 117 | `grConstantColorValue` | `0x2f30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002f30__grConstantColorValue_4.c) |
| 118 | `grCoordinateSpace` | `0x3ca0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ca0__grCoordinateSpace_4.c) |
| 119 | `grCullMode` | `0x2ea8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002ea8__grCullMode_4.c) |
| 120 | `grDepthBiasLevel` | `0x2fa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002fa8__grDepthBiasLevel_4.c) |
| 121 | `grDepthBufferFunction` | `0x3018` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003018__grDepthBufferFunction_4.c) |
| 122 | `grDepthBufferMode` | `0x3080` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003080__grDepthBufferMode_4.c) |
| 123 | `grDepthMask` | `0x30a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800030a0__grDepthMask_4.c) |
| 124 | `grDepthRange` | `0x3cf8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003cf8__grDepthRange_8.c) |
| 125 | `grDisable` | `0x3bc0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003bc0__grDisable_4.c) |
| 126 | `grDisableAllEffects` | `0x3110` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003110__grDisableAllEffects_0.c) |
| 127 | `grDitherMode` | `0x32a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800032a8__grDitherMode_4.c) |
| 128 | `grDrawLine` | `0x1410` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001410__grDrawLine_8.c) |
| 129 | `grDrawPoint` | `0x13b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800013b0__grDrawPoint_4.c) |
| 130 | `grDrawTriangle` | `0x1480` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001480__grDrawTriangle_12.c) |
| 131 | `grDrawVertexArray` | `0x1728` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001728__grDrawVertexArray_12.c) |
| 132 | `grDrawVertexArrayContiguous` | `0x17a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800017a0__grDrawVertexArrayContiguous_16.c) |
| 133 | `grEnable` | `0x3ae0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ae0__grEnable_4.c) |
| 134 | `grErrorSetCallback` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 135 | `grFinish` | `0x21a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800021a0__grFinish_0.c) |
| 136 | `grFlush` | `0x21f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800021f8__grFlush_0.c) |
| 137 | `grFogColorValue` | `0x3310` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003310__grFogColorValue_4.c) |
| 138 | `grFogMode` | `0x3390` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003390__grFogMode_4.c) |
| 139 | `grFogTable` | `0x3400` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003400__grFogTable_4.c) |
| 140 | `grGet` | `0x3570` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003570__grGet_12.c) |
| 141 | `grGetGammaTableExt` | `0x5c20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005c20__grGetGammaTableExt_16.c) |
| 142 | `grGetProcAddress` | `0x5e20` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005e20__grGetProcAddress_4.c) |
| 143 | `grGetString` | `0x3598` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003598__grGetString_4.c) |
| 144 | `grGlideGetState` | `0x5668` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005668__grGlideGetState_4.c) |
| 145 | `grGlideGetVertexLayout` | `0x57f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800057f8__grGlideGetVertexLayout_4.c) |
| 146 | `grGlideInit` | `0x5590` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005590__grGlideInit_0.c) |
| 147 | `grGlideSetState` | `0x5700` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005700__grGlideSetState_4.c) |
| 148 | `grGlideSetVertexLayout` | `0x5838` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005838__grGlideSetVertexLayout_4.c) |
| 149 | `grGlideShutdown` | `0x55a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800055a8__grGlideShutdown_0.c) |
| 150 | `grLfbConstantAlpha` | `0x51a0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800051a0__grLfbConstantAlpha_4.c) |
| 151 | `grLfbConstantDepth` | `0x5208` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005208__grLfbConstantDepth_4.c) |
| 152 | `grLfbLock` | `0x5020` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005020__grLfbLock_24.c) |
| 153 | `grLfbReadRegion` | `0x5468` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005468__grLfbReadRegion_28.c) |
| 154 | `grLfbUnlock` | `0x50c8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800050c8__grLfbUnlock_8.c) |
| 155 | `grLfbWriteColorFormat` | `0x5278` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005278__grLfbWriteColorFormat_4.c) |
| 156 | `grLfbWriteColorSwizzle` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 157 | `grLfbWriteRegion` | `0x52e0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800052e0__grLfbWriteRegion_36.c) |
| 158 | `grLoadGammaTable` | `0x3468` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003468__grLoadGammaTable_16.c) |
| 159 | `grQueryResolutions` | `0x3680` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003680__grQueryResolutions_8.c) |
| 160 | `grRenderBuffer` | `0x1d78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d78__grRenderBuffer_4.c) |
| 161 | `grReset` | `0x3a78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003a78__grReset_4.c) |
| 162 | `grSelectContext` | `0x2360` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002360__grSelectContext_4.c) |
| 163 | `grSetNumPendingBuffers` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 164 | `grSplash` | `0x3538` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003538__grSplash_20.c) |
| 165 | `grSstOrigin` | `0x2388` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002388__grSstOrigin_4.c) |
| 166 | `grSstSelect` | `0x1d70` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001d70__grErrorSetCallback_4.c) |
| 167 | `grSstWinClose` | `0x2340` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002340__grSstWinClose_4.c) |
| 168 | `grSstWinOpen` | `0x2240` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002240__grSstWinOpen_28.c) |
| 169 | `grTexCalcMemRequired` | `0x3dd0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003dd0__grTexCalcMemRequired_16.c) |
| 170 | `grTexChromaModeExt` | `0x29f0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800029f0__grTexChromaModeExt_8.c) |
| 171 | `grTexChromaRangeExt` | `0x2aa8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002aa8__grTexChromaRangeExt_16.c) |
| 172 | `grTexClampMode` | `0x40d0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800040d0__grTexClampMode_12.c) |
| 173 | `grTexCombine` | `0x4198` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004198__grTexCombine_28.c) |
| 174 | `grTexDetailControl` | `0x4310` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004310__grTexDetailControl_16.c) |
| 175 | `grTexDownloadMipMap` | `0x45b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800045b0__grTexDownloadMipMap_16.c) |
| 176 | `grTexDownloadMipMapLevel` | `0x47a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800047a8__grTexDownloadMipMapLevel_32.c) |
| 177 | `grTexDownloadMipMapLevelPartial` | `0x4980` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004980__grTexDownloadMipMapLevelPartial_40.c) |
| 178 | `grTexDownloadTable` | `0x4b38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004b38__grTexDownloadTable_8.c) |
| 179 | `grTexDownloadTablePartial` | `0x4bc8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004bc8__grTexDownloadTablePartial_16.c) |
| 180 | `grTexFilterMode` | `0x4410` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004410__grTexFilterMode_12.c) |
| 181 | `grTexLodBiasValue` | `0x44d8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800044d8__grTexLodBiasValue_8.c) |
| 182 | `grTexMaxAddress` | `0x3e50` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e50__grTexMaxAddress_4.c) |
| 183 | `grTexMinAddress` | `0x3e38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e38__grTexMinAddress_4.c) |
| 184 | `grTexMipMapMode` | `0x4d38` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004d38__grTexMipMapMode_12.c) |
| 185 | `grTexMultibase` | `0x4e00` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004e00__grTexMultibase_8.c) |
| 186 | `grTexMultibaseAddress` | `0x4e98` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180004e98__grTexMultibaseAddress_20.c) |
| 187 | `grTexNCCTable` | `0x3ee0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003ee0__grTexNCCTable_4.c) |
| 188 | `grTexSource` | `0x3f78` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003f78__grTexSource_16.c) |
| 189 | `grTexTextureMemRequired` | `0x3e08` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003e08__grTexTextureMemRequired_8.c) |
| 190 | `grTextureAuxBufferExt` | `0x2008` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180002008__grTextureAuxBufferExt_28.c) |
| 191 | `grTextureBufferExt` | `0x1e18` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180001e18__grTextureBufferExt_28.c) |
| 192 | `grVertexLayout` | `0x14f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800014f8__grVertexLayout_12.c) |
| 193 | `grViewport` | `0x3d58` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180003d58__grViewport_16.c) |
| 194 | `gu3dfGetInfo` | `0x5ce8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005ce8__gu3dfGetInfo_8.c) |
| 195 | `gu3dfLoad` | `0x5d30` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005d30__gu3dfLoad_8.c) |
| 196 | `guFogGenerateExp` | `0x58f8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800058f8__guFogGenerateExp_8.c) |
| 197 | `guFogGenerateExp2` | `0x59a8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800059a8__guFogGenerateExp2_8.c) |
| 198 | `guFogGenerateLinear` | `0x5a68` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005a68__guFogGenerateLinear_12.c) |
| 199 | `guFogTableIndexToW` | `0x58b0` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/1800058b0__guFogTableIndexToW_4.c) |
| 200 | `guGammaCorrectionRGB` | `0x5af8` | [ARM64](../../../../decompiled/3Dfx/arm64/Glide3x.dll/functions/180005af8__guGammaCorrectionRGB_12.c) |
