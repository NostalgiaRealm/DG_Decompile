# 3Dfx/x86/Glide.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x4f95d`.
- Supplied SHA-256: `17551c77355e051cdbe4df26277825461985b9e84e8cfe59ca2a39adce9fda4d`.
- Prepared SHA-256: `17551c77355e051cdbe4df26277825461985b9e84e8cfe59ca2a39adce9fda4d`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x86/Glide.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../decompiled/3Dfx/x86/Glide.dll/full_decompilation.c) | 1,607 | 1,607 | 0 | 1,713 | 1,627 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../decompiled/3Dfx/x86/Glide.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x86/Glide.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x86/Glide.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x86/Glide.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x86/Glide.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x86/Glide.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x86/Glide.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x86/Glide.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x4ca28` | `0x4ca73` | `b000` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1004ca28_FUN_1004ca28.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_ConvertAndDownloadRLE@64` | `0x25b4` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025b4__ConvertAndDownloadRLE_64.c) |
| 2 | `_ConvertAndDownloadRle@64` | `0x25b4` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025b4__ConvertAndDownloadRLE_64.c) |
| 3 | `_grAADrawLine@8` | `0x139a` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000139a_grAADrawLine.c) |
| 4 | `_grAADrawPoint@4` | `0x136f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000136f_grAADrawPoint.c) |
| 5 | `_grAADrawPolygon@12` | `0x1402` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001402_grAADrawPolygon.c) |
| 6 | `_grAADrawPolygonVertexList@8` | `0x1444` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001444_grAADrawPolygonVertexList.c) |
| 7 | `_grAADrawTriangle@24` | `0x13c8` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100013c8_grAADrawTriangle.c) |
| 8 | `_grAlphaBlendFunction@16` | `0x1761` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001761_grAlphaBlendFunction.c) |
| 9 | `_grAlphaCombine@20` | `0x1780` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001780_grAlphaCombine.c) |
| 10 | `_grAlphaControlsITRGBLighting@4` | `0x17a2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100017a2_grAlphaControlsITRGBLighting.c) |
| 11 | `_grAlphaTestFunction@4` | `0x17e5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100017e5_grAlphaTestFunction.c) |
| 12 | `_grAlphaTestReferenceValue@4` | `0x17fb` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100017fb_grAlphaTestReferenceValue.c) |
| 13 | `_grBufferClear@12` | `0x1483` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001483_grBufferClear.c) |
| 14 | `_grBufferNumPending@0` | `0x14a1` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014a1_grBufferNumPending.c) |
| 15 | `_grBufferSwap@4` | `0x14c5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014c5_grBufferSwap.c) |
| 16 | `_grCheckForRoom@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 17 | `_grChromakeyMode@4` | `0x183e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000183e_grChromakeyMode.c) |
| 18 | `_grChromakeyValue@4` | `0x1854` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001854_grChromakeyValue.c) |
| 19 | `_grClipWindow@16` | `0x186a` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000186a_grClipWindow.c) |
| 20 | `_grColorCombine@20` | `0x1889` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001889_grColorCombine.c) |
| 21 | `_grColorMask@8` | `0x18ad` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100018ad_grColorMask.c) |
| 22 | `_grConstantColorValue4@16` | `0x1975` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001975_grConstantColorValue4.c) |
| 23 | `_grConstantColorValue@4` | `0x1924` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001924_grConstantColorValue.c) |
| 24 | `_grCullMode@4` | `0x18c6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100018c6_grCullMode.c) |
| 25 | `_grDepthBiasLevel@4` | `0x19a6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100019a6_grDepthBiasLevel.c) |
| 26 | `_grDepthBufferFunction@4` | `0x19ea` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100019ea_grDepthBufferFunction.c) |
| 27 | `_grDepthBufferMode@4` | `0x1a30` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001a30_grDepthBufferMode.c) |
| 28 | `_grDepthMask@4` | `0x1a46` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001a46_grDepthMask.c) |
| 29 | `_grDisableAllEffects@0` | `0x1a5c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001a5c_grDisableAllEffects.c) |
| 30 | `_grDitherMode@4` | `0x1aa9` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001aa9_grDitherMode.c) |
| 31 | `_grDrawLine@8` | `0x128b` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000128b_grDrawLine.c) |
| 32 | `_grDrawPlanarPolygon@12` | `0x12ec` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100012ec_grDrawPlanarPolygon.c) |
| 33 | `_grDrawPlanarPolygonVertexList@8` | `0x132e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000132e_grDrawPlanarPolygonVertexList.c) |
| 34 | `_grDrawPoint@4` | `0x1260` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001260_grDrawPoint.c) |
| 35 | `_grDrawPolygon@12` | `0x12ec` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100012ec_grDrawPlanarPolygon.c) |
| 36 | `_grDrawPolygonVertexList@8` | `0x132e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000132e_grDrawPlanarPolygonVertexList.c) |
| 37 | `_grDrawTriangle@12` | `0x12b9` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100012b9_grDrawTriangle.c) |
| 38 | `_grErrorSetCallback@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 39 | `_grFogColorValue@4` | `0x1abf` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001abf_grFogColorValue.c) |
| 40 | `_grFogMode@4` | `0x1b10` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001b10_grFogMode.c) |
| 41 | `_grFogTable@4` | `0x1b26` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001b26_grFogTable.c) |
| 42 | `_grGammaCorrectionValue@4` | `0x1b6f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001b6f_grGammaCorrectionValue.c) |
| 43 | `_grGlideGetState@4` | `0x20cf` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100020cf_grGlideGetState.c) |
| 44 | `_grGlideGetVersion@4` | `0x20b6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100020b6_grGlideGetVersion.c) |
| 45 | `_grGlideInit@0` | `0x209e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000209e_grGlideInit.c) |
| 46 | `_grGlideSetState@4` | `0x20e5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100020e5_grGlideSetState.c) |
| 47 | `_grGlideShamelessPlug@4` | `0x20fd` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100020fd_grGlideShamelessPlug.c) |
| 48 | `_grGlideShutdown@0` | `0x20aa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100020aa_grGlideShutdown.c) |
| 49 | `_grHints@8` | `0x2115` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002115_grHints.c) |
| 50 | `_grLfbBegin@0` | `0x1f4e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f4e_grLfbBegin.c) |
| 51 | `_grLfbBypassMode@4` | `0x1ef4` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001ef4_grLfbBypassMode.c) |
| 52 | `_grLfbConstantAlpha@4` | `0x1fd6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001fd6_grLfbConstantAlpha.c) |
| 53 | `_grLfbConstantDepth@4` | `0x1fec` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001fec_grLfbConstantDepth.c) |
| 54 | `_grLfbEnd@0` | `0x1f53` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f53_grLfbEnd.c) |
| 55 | `_grLfbGetReadPtr@4` | `0x1f58` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f58_grLfbGetReadPtr.c) |
| 56 | `_grLfbGetWritePtr@4` | `0x1f67` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f67_grLfbGetWritePtr.c) |
| 57 | `_grLfbOrigin@4` | `0x1f16` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f16_grLfbOrigin.c) |
| 58 | `_grLfbReadRegion@28` | `0x2076` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002076_grLfbReadRegion.c) |
| 59 | `_grLfbWriteColorFormat@4` | `0x2031` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002031_grLfbWriteColorFormat.c) |
| 60 | `_grLfbWriteColorSwizzle@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 61 | `_grLfbWriteMode@4` | `0x1f32` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f32_grLfbWriteMode.c) |
| 62 | `_grLfbWriteRegion@32` | `0x2047` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002047_grLfbWriteRegion.c) |
| 63 | `_grRenderBuffer@4` | `0x14e4` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014e4_grRenderBuffer.c) |
| 64 | `_grResetTriStats@0` | `0x16f0` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100016f0_grResetTriStats.c) |
| 65 | `_grSplash@20` | `0x1bc1` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001bc1_grSplash.c) |
| 66 | `_grSstConfigPipeLine@12` | `0x259f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259f_grSstConfigPipeLine.c) |
| 67 | `_grSstConfigPipeline@12` | `0x259f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259f_grSstConfigPipeLine.c) |
| 68 | `_grSstDetectResources@0` | `0x2598` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002598_grSstDetectResources.c) |
| 69 | `_grSstIdle@0` | `0x14fd` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fd_grSstIdle.c) |
| 70 | `_grSstIsBusy@0` | `0x1569` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001569_grSstIsBusy.c) |
| 71 | `_grSstOpen@24` | `0x158e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000158e_grSstOpen.c) |
| 72 | `_grSstOrigin@4` | `0x15ec` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100015ec_grSstOrigin.c) |
| 73 | `_grSstPassthruMode@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 74 | `_grSstPerfStats@4` | `0x1662` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001662_grSstPerfStats.c) |
| 75 | `_grSstQueryBoards@4` | `0x15bc` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100015bc_grSstQueryBoards.c) |
| 76 | `_grSstQueryHardware@4` | `0x15ad` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100015ad_grSstQueryHardware.c) |
| 77 | `_grSstResetPerfStats@0` | `0x16ce` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100016ce_grSstResetPerfStats.c) |
| 78 | `_grSstScreenHeight@0` | `0x1602` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001602_grSstScreenHeight.c) |
| 79 | `_grSstScreenWidth@0` | `0x1620` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001620_grSstScreenWidth.c) |
| 80 | `_grSstSelect@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 81 | `_grSstStatus@0` | `0x163e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000163e_grSstStatus.c) |
| 82 | `_grSstVRetraceOn@0` | `0x1540` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001540_grSstVRetraceOn.c) |
| 83 | `_grSstVidMode@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 84 | `_grSstVideoLine@0` | `0x151c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000151c_grSstVideoLine.c) |
| 85 | `_grTexCalcMemRequired@16` | `0x1bf5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001bf5_grTexCalcMemRequired.c) |
| 86 | `_grTexClampMode@12` | `0x1cee` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001cee_grTexClampMode.c) |
| 87 | `_grTexCombine@28` | `0x1d0a` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001d0a_grTexCombine.c) |
| 88 | `_grTexCombineFunction@8` | `0x2347` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002347_grTexCombineFunction.c) |
| 89 | `_grTexDetailControl@16` | `0x1d32` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001d32_grTexDetailControl.c) |
| 90 | `_grTexDownloadMipMap@16` | `0x1d8e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001d8e_grTexDownloadMipMap.c) |
| 91 | `_grTexDownloadMipMapLevel@32` | `0x1dbb` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001dbb_grTexDownloadMipMapLevel.c) |
| 92 | `_grTexDownloadMipMapLevelPartial@40` | `0x1de6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001de6_grTexDownloadMipMapLevelPartial.c) |
| 93 | `_grTexDownloadTable@12` | `0x1e17` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001e17_grTexDownloadTable.c) |
| 94 | `_grTexDownloadTablePartial@20` | `0x1e33` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001e33_grTexDownloadTablePartial.c) |
| 95 | `_grTexFilterMode@12` | `0x1d55` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001d55_grTexFilterMode.c) |
| 96 | `_grTexLodBiasValue@8` | `0x1d71` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001d71_grTexLodBiasValue.c) |
| 97 | `_grTexMaxAddress@4` | `0x1c5e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001c5e_grTexMaxAddress.c) |
| 98 | `_grTexMinAddress@4` | `0x1c54` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001c54_grTexMinAddress.c) |
| 99 | `_grTexMipMapMode@12` | `0x1e55` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001e55_grTexMipMapMode.c) |
| 100 | `_grTexMultibase@8` | `0x1e71` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001e71_grTexMultibase.c) |
| 101 | `_grTexMultibaseAddress@20` | `0x1ec7` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001ec7_grTexMultibaseAddress.c) |
| 102 | `_grTexNCCTable@8` | `0x1c74` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001c74_grTexNCCTable.c) |
| 103 | `_grTexSource@16` | `0x1cc2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001cc2_grTexSource.c) |
| 104 | `_grTexTextureMemRequired@8` | `0x1c29` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001c29_grTexTextureMemRequired.c) |
| 105 | `_grTriStats@8` | `0x1712` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001712_grTriStats.c) |
| 106 | `_gu3dfGetInfo@8` | `0x2553` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002553_gu3dfGetInfo.c) |
| 107 | `_gu3dfLoad@8` | `0x2586` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002586_gu3dfLoad.c) |
| 108 | `_guAADrawTriangleWithClip@12` | `0x2492` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002492_guAADrawTriangleWithClip.c) |
| 109 | `_guAlphaSource@4` | `0x2169` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002169_guAlphaSource.c) |
| 110 | `_guColorCombineFunction@4` | `0x21b5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100021b5_guColorCombineFunction.c) |
| 111 | `_guDrawPolygonVertexListWithClip@8` | `0x24f6` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100024f6_guDrawPolygonVertexListWithClip.c) |
| 112 | `_guDrawTriangleWithClip@12` | `0x24c3` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100024c3_guDrawTriangleWithClip.c) |
| 113 | `_guEncodeRLE16@16` | `0x25ab` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025ab_guEncodeRLE16.c) |
| 114 | `_guEndianSwapBytes@4` | `0x2544` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002544_guEndianSwapBytes.c) |
| 115 | `_guEndianSwapWords@4` | `0x2537` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002537_guEndianSwapWords.c) |
| 116 | `_guFbReadRegion@24` | `0x1f76` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001f76_guFbReadRegion.c) |
| 117 | `_guFbWriteRegion@24` | `0x1fa1` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10001fa1_guFbWriteRegion.c) |
| 118 | `_guFogGenerateExp2@8` | `0x2261` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002261_guFogGenerateExp2.c) |
| 119 | `_guFogGenerateExp@8` | `0x21d3` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100021d3_guFogGenerateExp.c) |
| 120 | `_guFogGenerateLinear@12` | `0x2278` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002278_guFogGenerateLinear.c) |
| 121 | `_guFogTableIndexToW@4` | `0x21c4` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100021c4_guFogTableIndexToW.c) |
| 122 | `_guMPDrawTriangle@12` | `0x259f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259f_grSstConfigPipeLine.c) |
| 123 | `_guMPInit@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 124 | `_guMPTexCombineFunction@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 125 | `_guMPTexSource@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 126 | `_guMovieSetName@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 127 | `_guMovieStart@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 128 | `_guMovieStop@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 129 | `_guTexAllocateMemory@60` | `0x22cd` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100022cd_guTexAllocateMemory.c) |
| 130 | `_guTexChangeAttributes@48` | `0x2310` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002310_guTexChangeAttributes.c) |
| 131 | `_guTexCombineFunction@8` | `0x2347` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002347_grTexCombineFunction.c) |
| 132 | `_guTexCreateColorMipMap@0` | `0x25b0` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025b0_guTexCreateColorMipMap.c) |
| 133 | `_guTexDownloadMipMap@12` | `0x2444` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002444_guTexDownloadMipMap.c) |
| 134 | `_guTexDownloadMipMapLevel@12` | `0x2460` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002460_guTexDownloadMipMapLevel.c) |
| 135 | `_guTexGetCurrentMipMap@4` | `0x2360` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/10002360_guTexGetCurrentMipMap.c) |
| 136 | `_guTexGetMipMapInfo@4` | `0x239e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000239e_guTexGetMipMapInfo.c) |
| 137 | `_guTexMemQueryAvail@4` | `0x23d9` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100023d9_guTexMemQueryAvail.c) |
| 138 | `_guTexMemReset@0` | `0x241b` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000241b_guTexMemReset.c) |
| 139 | `_guTexSource@4` | `0x247c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000247c_guTexSource.c) |
| 140 | `_pciClose@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 141 | `_pciDeviceExists@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 142 | `_pciFindCard@12` | `0x259f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259f_grSstConfigPipeLine.c) |
| 143 | `_pciFindCardMulti@16` | `0x25a2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a2_pciFindCardMulti.c) |
| 144 | `_pciFindFreeMTRR@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 145 | `_pciFindFreeMTRRMatch@16` | `0x25a2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a2_pciFindCardMulti.c) |
| 146 | `_pciFindMTRRMatch@16` | `0x25a2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a2_pciFindCardMulti.c) |
| 147 | `_pciGetConfigData@20` | `0x25a5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a5_pciGetConfigData.c) |
| 148 | `_pciGetErrorCode@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 149 | `_pciGetErrorString@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 150 | `_pciMapCard@20` | `0x25a5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a5_pciGetConfigData.c) |
| 151 | `_pciMapCardMulti@24` | `0x25a8` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a8_pciMapCardMulti.c) |
| 152 | `_pciMapPhysicalToLinear@12` | `0x259f` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259f_grSstConfigPipeLine.c) |
| 153 | `_pciOpen@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 154 | `_pciOpenEx@0` | `0x259c` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000259c_guMPInit.c) |
| 155 | `_pciSetConfigData@20` | `0x25a5` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a5_pciGetConfigData.c) |
| 156 | `_pciSetMTRR@16` | `0x25a2` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100025a2_pciFindCardMulti.c) |
| 157 | `_pciUnmapPhysical@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 158 | `_pioInByte@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 159 | `_pioInLong@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 160 | `_pioInWord@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/100014fa_grCheckForRoom.c) |
| 161 | `_pioOutByte@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 162 | `_pioOutLong@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
| 163 | `_pioOutWord@8` | `0x202e` | [x86](../../../../decompiled/3Dfx/x86/Glide.dll/functions/1000202e_grLfbWriteColorSwizzle.c) |
