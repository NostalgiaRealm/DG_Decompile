# 3Dfx/x86/Glide2x.dll

Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x4f5cd`.
- Supplied SHA-256: `934198d1ef7568f17fd2c5faf32053c36046fd21a735b7e6f42ac65e172a5982`.
- Prepared SHA-256: `934198d1ef7568f17fd2c5faf32053c36046fd21a735b7e6f42ac65e172a5982`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/3Dfx/x86/Glide2x.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/full_decompilation.c) | 1,594 | 1,594 | 0 | 1,713 | 1,506 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions.tsv) · [Calls](../../../../decompiled/3Dfx/x86/Glide2x.dll/calls.tsv) · [Assembly](../../../../decompiled/3Dfx/x86/Glide2x.dll/assembly.tsv) · [Strings](../../../../decompiled/3Dfx/x86/Glide2x.dll/strings.tsv) · [Symbols](../../../../decompiled/3Dfx/x86/Glide2x.dll/symbols.tsv) · [Coverage](../../../../decompiled/3Dfx/x86/Glide2x.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/3Dfx/x86/Glide2x.dll/manifest.json) and [byte-offset string index](../../../../resources/3Dfx/x86/Glide2x.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x4c698` | `0x4c6e3` | `b000` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1004c698_FUN_1004c698.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `_ConvertAndDownLoadRLE@64` | `0x1e86` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001e86__ConvertAndDownLoadRLE_64.c) |
| 2 | `_ConvertAndDownloadRle@64` | `0x1e86` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001e86__ConvertAndDownLoadRLE_64.c) |
| 3 | `_grAADrawLine@8` | `0x139a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000139a_grAADrawLine.c) |
| 4 | `_grAADrawPoint@4` | `0x136f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000136f_grAADrawPoint.c) |
| 5 | `_grAADrawPolygon@12` | `0x1402` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001402_grAADrawPolygon.c) |
| 6 | `_grAADrawPolygonVertexList@8` | `0x1444` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001444_grAADrawPolygonVertexList.c) |
| 7 | `_grAADrawTriangle@24` | `0x13c8` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100013c8_grAADrawTriangle.c) |
| 8 | `_grAlphaBlendFunction@16` | `0x17d0` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100017d0_grAlphaBlendFunction.c) |
| 9 | `_grAlphaCombine@20` | `0x17ef` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100017ef_grAlphaCombine.c) |
| 10 | `_grAlphaControlsITRGBLighting@4` | `0x1811` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001811_grAlphaControlsITRGBLighting.c) |
| 11 | `_grAlphaTestFunction@4` | `0x1854` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001854_grAlphaTestFunction.c) |
| 12 | `_grAlphaTestReferenceValue@4` | `0x186a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000186a_grAlphaTestReferenceValue.c) |
| 13 | `_grBufferClear@12` | `0x1483` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001483_grBufferClear.c) |
| 14 | `_grBufferNumPending@0` | `0x14a1` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014a1_grBufferNumPending.c) |
| 15 | `_grBufferSwap@4` | `0x14c5` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014c5_grBufferSwap.c) |
| 16 | `_grCheckForRoom@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 17 | `_grChromakeyMode@4` | `0x18ad` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100018ad_grChromakeyMode.c) |
| 18 | `_grChromakeyValue@4` | `0x18c3` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100018c3_grChromakeyValue.c) |
| 19 | `_grClipWindow@16` | `0x18d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100018d9_grClipWindow.c) |
| 20 | `_grColorCombine@20` | `0x18f8` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100018f8_grColorCombine.c) |
| 21 | `_grColorMask@8` | `0x191c` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000191c_grColorMask.c) |
| 22 | `_grConstantColorValue4@16` | `0x19e4` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100019e4_grConstantColorValue4.c) |
| 23 | `_grConstantColorValue@4` | `0x1993` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001993_grConstantColorValue.c) |
| 24 | `_grCullMode@4` | `0x1935` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001935_grCullMode.c) |
| 25 | `_grDepthBiasLevel@4` | `0x1a15` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001a15_grDepthBiasLevel.c) |
| 26 | `_grDepthBufferFunction@4` | `0x1a59` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001a59_grDepthBufferFunction.c) |
| 27 | `_grDepthBufferMode@4` | `0x1a9f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001a9f_grDepthBufferMode.c) |
| 28 | `_grDepthMask@4` | `0x1ab5` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ab5_grDepthMask.c) |
| 29 | `_grDisableAllEffects@0` | `0x1acb` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001acb_grDisableAllEffects.c) |
| 30 | `_grDitherMode@4` | `0x1b18` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001b18_grDitherMode.c) |
| 31 | `_grDrawLine@8` | `0x128b` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000128b_grDrawLine.c) |
| 32 | `_grDrawPlanarPolygon@12` | `0x12ec` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100012ec_grDrawPlanarPolygon.c) |
| 33 | `_grDrawPlanarPolygonVertexList@8` | `0x132e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000132e_grDrawPlanarPolygonVertexList.c) |
| 34 | `_grDrawPoint@4` | `0x1260` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001260_grDrawPoint.c) |
| 35 | `_grDrawPolygon@12` | `0x12ec` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100012ec_grDrawPlanarPolygon.c) |
| 36 | `_grDrawPolygonVertexList@8` | `0x132e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000132e_grDrawPlanarPolygonVertexList.c) |
| 37 | `_grDrawTriangle@12` | `0x12b9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100012b9_grDrawTriangle.c) |
| 38 | `_grErrorSetCallback@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 39 | `_grFogColorValue@4` | `0x1b2e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001b2e_grFogColorValue.c) |
| 40 | `_grFogMode@4` | `0x1b7f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001b7f_grFogMode.c) |
| 41 | `_grFogTable@4` | `0x1b95` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001b95_grFogTable.c) |
| 42 | `_grGammaCorrectionValue@4` | `0x1bde` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001bde_grGammaCorrectionValue.c) |
| 43 | `_grGlideGetState@4` | `0x2109` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002109_grGlideGetState.c) |
| 44 | `_grGlideGetVersion@4` | `0x20f0` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100020f0_grGlideGetVersion.c) |
| 45 | `_grGlideInit@0` | `0x20d8` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100020d8_grGlideInit.c) |
| 46 | `_grGlideSetState@4` | `0x211f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000211f_grGlideSetState.c) |
| 47 | `_grGlideShamelessPlug@4` | `0x2137` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002137_grGlideShamelessPlug.c) |
| 48 | `_grGlideShutdown@0` | `0x20e4` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100020e4_grGlideShutdown.c) |
| 49 | `_grHints@8` | `0x214f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000214f_grHints.c) |
| 50 | `_grLfbConstantAlpha@4` | `0x2010` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002010_grLfbConstantAlpha.c) |
| 51 | `_grLfbConstantDepth@4` | `0x2026` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002026_grLfbConstantDepth.c) |
| 52 | `_grLfbLock@24` | `0x1f69` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001f69_grLfbLock.c) |
| 53 | `_grLfbReadRegion@28` | `0x20b0` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100020b0_grLfbReadRegion.c) |
| 54 | `_grLfbUnlock@8` | `0x1fb4` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001fb4_grLfbUnlock.c) |
| 55 | `_grLfbWriteColorFormat@4` | `0x206b` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000206b_grLfbWriteColorFormat.c) |
| 56 | `_grLfbWriteColorSwizzle@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 57 | `_grLfbWriteRegion@32` | `0x2081` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002081_grLfbWriteRegion.c) |
| 58 | `_grRenderBuffer@4` | `0x14e4` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014e4_grRenderBuffer.c) |
| 59 | `_grResetTriStats@0` | `0x175f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000175f_grResetTriStats.c) |
| 60 | `_grSplash@20` | `0x1c30` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001c30_grSplash.c) |
| 61 | `_grSstConfigPipeLine@12` | `0x25d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d9_grSstConfigPipeLine.c) |
| 62 | `_grSstConfigPipeline@12` | `0x25d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d9_grSstConfigPipeLine.c) |
| 63 | `_grSstControl@4` | `0x1616` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001616_grSstControl.c) |
| 64 | `_grSstDetectResources@0` | `0x25d2` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d2_grSstDetectResources.c) |
| 65 | `_grSstIdle@0` | `0x14fd` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fd_grSstIdle.c) |
| 66 | `_grSstIsBusy@0` | `0x1569` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001569_grSstIsBusy.c) |
| 67 | `_grSstOrigin@4` | `0x165b` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000165b_grSstOrigin.c) |
| 68 | `_grSstPerfStats@4` | `0x16d1` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100016d1_grSstPerfStats.c) |
| 69 | `_grSstQueryBoards@4` | `0x162b` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000162b_grSstQueryBoards.c) |
| 70 | `_grSstQueryHardware@4` | `0x161c` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000161c_grSstQueryHardware.c) |
| 71 | `_grSstResetPerfStats@0` | `0x173d` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000173d_grSstResetPerfStats.c) |
| 72 | `_grSstScreenHeight@0` | `0x1671` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001671_grSstScreenHeight.c) |
| 73 | `_grSstScreenWidth@0` | `0x168f` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000168f_grSstScreenWidth.c) |
| 74 | `_grSstSelect@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 75 | `_grSstStatus@0` | `0x16ad` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100016ad_grSstStatus.c) |
| 76 | `_grSstVRetraceOn@0` | `0x1540` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001540_grSstVRetraceOn.c) |
| 77 | `_grSstVidMode@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 78 | `_grSstVideoLine@0` | `0x151c` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000151c_grSstVideoLine.c) |
| 79 | `_grSstWinClose@0` | `0x1608` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001608_grSstWinClose.c) |
| 80 | `_grSstWinOpen@28` | `0x158e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000158e_grSstWinOpen.c) |
| 81 | `_grTexCalcMemRequired@16` | `0x1c64` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001c64_grTexCalcMemRequired.c) |
| 82 | `_grTexClampMode@12` | `0x1d5d` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001d5d_grTexClampMode.c) |
| 83 | `_grTexCombine@28` | `0x1d79` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001d79_grTexCombine.c) |
| 84 | `_grTexCombineFunction@8` | `0x2381` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002381_grTexCombineFunction.c) |
| 85 | `_grTexDetailControl@16` | `0x1da1` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001da1_grTexDetailControl.c) |
| 86 | `_grTexDownloadMipMap@16` | `0x1dfd` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001dfd_grTexDownloadMipMap.c) |
| 87 | `_grTexDownloadMipMapLevel@32` | `0x1e2a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001e2a_grTexDownloadMipMapLevel.c) |
| 88 | `_grTexDownloadMipMapLevelPartial@40` | `0x1e55` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001e55_grTexDownloadMipMapLevelPartial.c) |
| 89 | `_grTexDownloadTable@12` | `0x1e89` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001e89_grTexDownloadTable.c) |
| 90 | `_grTexDownloadTablePartial@20` | `0x1ea5` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ea5_grTexDownloadTablePartial.c) |
| 91 | `_grTexFilterMode@12` | `0x1dc4` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001dc4_grTexFilterMode.c) |
| 92 | `_grTexLodBiasValue@8` | `0x1de0` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001de0_grTexLodBiasValue.c) |
| 93 | `_grTexMaxAddress@4` | `0x1ccd` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ccd_grTexMaxAddress.c) |
| 94 | `_grTexMinAddress@4` | `0x1cc3` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001cc3_grTexMinAddress.c) |
| 95 | `_grTexMipMapMode@12` | `0x1ec7` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ec7_grTexMipMapMode.c) |
| 96 | `_grTexMultibase@8` | `0x1ee3` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ee3_grTexMultibase.c) |
| 97 | `_grTexMultibaseAddress@20` | `0x1f39` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001f39_grTexMultibaseAddress.c) |
| 98 | `_grTexNCCTable@8` | `0x1ce3` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001ce3_grTexNCCTable.c) |
| 99 | `_grTexSource@16` | `0x1d31` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001d31_grTexSource.c) |
| 100 | `_grTexTextureMemRequired@8` | `0x1c98` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001c98_grTexTextureMemRequired.c) |
| 101 | `_grTriStats@8` | `0x1781` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001781_grTriStats.c) |
| 102 | `_gu3dfGetInfo@8` | `0x258d` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000258d_gu3dfGetInfo.c) |
| 103 | `_gu3dfLoad@8` | `0x25c0` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025c0_gu3dfLoad.c) |
| 104 | `_guAADrawTriangleWithClip@12` | `0x24cc` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100024cc_guAADrawTriangleWithClip.c) |
| 105 | `_guAlphaSource@4` | `0x21a3` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100021a3_guAlphaSource.c) |
| 106 | `_guColorCombineFunction@4` | `0x21ef` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100021ef_guColorCombineFunction.c) |
| 107 | `_guDrawPolygonVertexListWithClip@8` | `0x2530` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002530_guDrawPolygonVertexListWithClip.c) |
| 108 | `_guDrawTriangleWithClip@12` | `0x24fd` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100024fd_guDrawTriangleWithClip.c) |
| 109 | `_guEncodeRLE16@16` | `0x25e2` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025e2_guEncodeRLE16.c) |
| 110 | `_guEndianSwapBytes@4` | `0x257e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000257e_guEndianSwapBytes.c) |
| 111 | `_guEndianSwapWords@4` | `0x2571` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002571_guEndianSwapWords.c) |
| 112 | `_guFbReadRegion@24` | `0x1f66` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001f66_guFbReadRegion.c) |
| 113 | `_guFbWriteRegion@24` | `0x1f66` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001f66_guFbReadRegion.c) |
| 114 | `_guFogGenerateExp2@8` | `0x229b` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000229b_guFogGenerateExp2.c) |
| 115 | `_guFogGenerateExp@8` | `0x220d` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000220d_guFogGenerateExp.c) |
| 116 | `_guFogGenerateLinear@12` | `0x22b2` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100022b2_guFogGenerateLinear.c) |
| 117 | `_guFogTableIndexToW@4` | `0x21fe` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100021fe_guFogTableIndexToW.c) |
| 118 | `_guMPDrawTriangle@12` | `0x25d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d9_grSstConfigPipeLine.c) |
| 119 | `_guMPInit@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 120 | `_guMPTexCombineFunction@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 121 | `_guMPTexSource@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 122 | `_guMovieSetName@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 123 | `_guMovieStart@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 124 | `_guMovieStop@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 125 | `_guTexAllocateMemory@60` | `0x2307` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002307_guTexAllocateMemory.c) |
| 126 | `_guTexChangeAttributes@48` | `0x234a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000234a_guTexChangeAttributes.c) |
| 127 | `_guTexCombineFunction@8` | `0x2381` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002381_grTexCombineFunction.c) |
| 128 | `_guTexCreateColorMipMap@0` | `0x25e7` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025e7_guTexCreateColorMipMap.c) |
| 129 | `_guTexDownloadMipMap@12` | `0x247e` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000247e_guTexDownloadMipMap.c) |
| 130 | `_guTexDownloadMipMapLevel@12` | `0x249a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000249a_guTexDownloadMipMapLevel.c) |
| 131 | `_guTexGetCurrentMipMap@4` | `0x239a` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/1000239a_guTexGetCurrentMipMap.c) |
| 132 | `_guTexGetMipMapInfo@4` | `0x23d8` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100023d8_guTexGetMipMapInfo.c) |
| 133 | `_guTexMemQueryAvail@4` | `0x2413` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002413_guTexMemQueryAvail.c) |
| 134 | `_guTexMemReset@0` | `0x2455` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002455_guTexMemReset.c) |
| 135 | `_guTexSource@4` | `0x24b6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100024b6_guTexSource.c) |
| 136 | `_pciClose@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 137 | `_pciDeviceExists@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 138 | `_pciFindCard@12` | `0x25d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d9_grSstConfigPipeLine.c) |
| 139 | `_pciFindCardMulti@16` | `0x25dc` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025dc_pciFindCardMulti.c) |
| 140 | `_pciFindFreeMTRR@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 141 | `_pciFindFreeMTRRMatch@16` | `0x25dc` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025dc_pciFindCardMulti.c) |
| 142 | `_pciFindMTRRMatch@16` | `0x25dc` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025dc_pciFindCardMulti.c) |
| 143 | `_pciGetConfigData@20` | `0x25df` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025df_pciGetConfigData.c) |
| 144 | `_pciGetErrorCode@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 145 | `_pciGetErrorString@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 146 | `_pciMapCard@20` | `0x25df` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025df_pciGetConfigData.c) |
| 147 | `_pciMapCardMulti@24` | `0x1f66` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10001f66_guFbReadRegion.c) |
| 148 | `_pciMapPhysicalToLinear@12` | `0x25d9` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d9_grSstConfigPipeLine.c) |
| 149 | `_pciOpen@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 150 | `_pciOpenEx@0` | `0x25d6` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025d6_guMPInit.c) |
| 151 | `_pciSetConfigData@20` | `0x25df` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025df_pciGetConfigData.c) |
| 152 | `_pciSetMTRR@16` | `0x25dc` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100025dc_pciFindCardMulti.c) |
| 153 | `_pciUnmapPhysical@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 154 | `_pioInByte@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 155 | `_pioInLong@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 156 | `_pioInWord@4` | `0x14fa` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/100014fa_grCheckForRoom.c) |
| 157 | `_pioOutByte@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 158 | `_pioOutLong@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
| 159 | `_pioOutWord@8` | `0x2068` | [x86](../../../../decompiled/3Dfx/x86/Glide2x.dll/functions/10002068_grLfbWriteColorSwizzle.c) |
