/*
 * FUN_18003da40 at 18003da40
 * uint __cdecl FUN_18003da40(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint * param_5, ulonglong param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 18003da40-18003e763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003da40(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint *param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  char local_11e [2];
  undefined4 local_11c;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  uint local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  uint *local_e8;
  uint *local_e0;
  byte abStack_d8 [136];
  
  local_114 = (uint)param_5;
  local_e8 = (uint *)(param_2 + 0x1e7);
  local_e0 = (uint *)(param_2 + 0x1eb);
  uVar7 = 1;
  uVar10 = 0;
  do {
    while( true ) {
      uVar4 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar4 <= uVar10) {
        return uVar7;
      }
      pbVar13 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar10);
      uVar4 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar10);
      uVar18 = (ulonglong)uVar4;
      iVar5 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar10);
      if ((local_114 < 0x260) ||
         (uVar6 = FUN_1800637c8(pbVar13,(byte *)"adapteridtype"), uVar6 != 0)) break;
      if (iVar5 != 0) {
        return 0;
      }
      if (uVar4 == 0) {
        *(undefined4 *)(param_2 + 0xf7) = 0;
      }
      else {
        if (uVar4 != 1) goto LAB_18003e324;
        pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
        uVar7 = FUN_1800637c8(pbVar13,(byte *)"nvidia");
        if (uVar7 == 0) {
          uVar16 = 1;
        }
        else {
          uVar7 = FUN_1800637c8(pbVar13,&DAT_180068820);
          if (uVar7 == 0) {
            *(undefined4 *)(param_2 + 0xf7) = 2;
            goto LAB_18003e4c4;
          }
          uVar7 = FUN_1800637c8(pbVar13,(byte *)"intel");
          if (uVar7 != 0) goto LAB_18003e60c;
          uVar16 = 3;
        }
        *(undefined4 *)(param_2 + 0xf7) = uVar16;
      }
LAB_18003e4c4:
      uVar7 = 1;
      uVar10 = uVar10 + 1;
    }
    uVar6 = FUN_1800637c8(pbVar13,(byte *)"vendorid");
    if (uVar6 == 0) {
      if (iVar5 != 0) {
        return 0;
      }
      uVar7 = 1;
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          param_5 = (uint *)(param_2 + 0xfb);
LAB_18003dbd0:
          cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0);
          if (cVar2 != '\0') {
            uVar7 = 1;
            goto LAB_18003e734;
          }
        }
LAB_18003e60c:
        uVar7 = 0;
      }
    }
    else {
      uVar6 = FUN_1800637c8(pbVar13,(byte *)"deviceid");
      if (uVar6 == 0) {
        if (iVar5 != 0) {
          return 0;
        }
        uVar7 = 1;
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            param_5 = (uint *)(param_2 + 0xff);
            goto LAB_18003dbd0;
          }
          goto LAB_18003e60c;
        }
      }
      else {
        uVar6 = FUN_1800637c8(pbVar13,(byte *)"subsystemid");
        if (uVar6 == 0) {
          if (iVar5 != 0) {
            return 0;
          }
          uVar7 = 1;
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              param_5 = (uint *)(param_2 + 0x103);
              goto LAB_18003dbd0;
            }
            goto LAB_18003e60c;
          }
        }
        else {
          uVar6 = FUN_1800637c8(pbVar13,(byte *)"revisionid");
          if (uVar6 == 0) {
            if (iVar5 != 0) {
              return 0;
            }
            uVar7 = 1;
            if (uVar4 != 0) {
              if (uVar4 == 1) {
                param_5 = (uint *)(param_2 + 0x107);
                goto LAB_18003dbd0;
              }
              goto LAB_18003e60c;
            }
          }
          else {
            uVar6 = FUN_1800637c8(pbVar13,(byte *)"extraenumeratedresolutions");
            if (uVar6 == 0) {
              if (iVar5 != 0) {
                return 0;
              }
              uVar18 = 0;
              local_118 = param_4;
              local_110 = uVar4;
              local_108 = uVar10;
              local_100 = param_3;
              while( true ) {
                uVar7 = 1;
                uVar4 = (uint)uVar18;
                param_3 = local_100;
                uVar10 = local_108;
                param_4 = local_118;
                if (local_110 <= uVar4) break;
                pbVar13 = (byte *)(**(code **)(*local_100 + 0x50))
                                            (local_100,local_118,local_108,uVar18);
                local_11c = 0;
                *(undefined4 *)(param_2 + 0x113 + uVar18 * 0xc) = 0;
                iVar5 = FUN_180063ec8(pbVar13,(byte *)" max @ %d %c",&local_11c,&uStack_120,param_5,
                                      param_6,param_7,param_8);
                iVar8 = FUN_180063ec8(pbVar13,(byte *)" max_4_3 @ %d %c",&local_11c,&uStack_120,
                                      param_5,param_6,param_7,param_8);
                iVar9 = FUN_180063ec8(pbVar13,(byte *)" max_16_9 @ %d %c",&local_11c,&uStack_120,
                                      param_5,param_6,param_7,param_8);
                uVar16 = local_11c;
                if (iVar5 == 1) {
                  *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
LAB_18003dec4:
                  *(undefined4 *)(param_2 + 0x113 + uVar18 * 0xc) = uVar16;
                }
                else {
                  if (iVar8 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0x100;
                    goto LAB_18003dec4;
                  }
                  if (iVar9 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0x101;
                    goto LAB_18003dec4;
                  }
                  iVar5 = FUN_180063ec8(pbVar13,(byte *)" %s %c",abStack_d8,&uStack_120,param_5,
                                        param_6,param_7,param_8);
                  if ((iVar5 == 1) &&
                     (uVar10 = FUN_1800637c8(abStack_d8,&DAT_180067edc), uVar10 == 0)) {
                    *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
                  }
                  else {
                    iVar5 = FUN_180063ec8(pbVar13,(byte *)" %s %c",abStack_d8,&uStack_120,param_5,
                                          param_6,param_7,param_8);
                    if ((iVar5 == 1) &&
                       (uVar10 = FUN_1800637c8(abStack_d8,(byte *)"max_4_3"), uVar10 == 0)) {
                      *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
                      *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0x100;
                    }
                    else {
                      iVar5 = FUN_180063ec8(pbVar13,(byte *)" %s %c",abStack_d8,&uStack_120,param_5,
                                            param_6,param_7,param_8);
                      if ((iVar5 == 1) &&
                         (uVar10 = FUN_1800637c8(abStack_d8,(byte *)"max_16_9"), uVar10 == 0)) {
                        *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = 0xffffffff;
                        *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = 0x101;
                      }
                      else {
                        param_5 = (uint *)&local_f0;
                        local_10c = 0;
                        bVar3 = FUN_18003c2b0(pbVar13,&local_f8,&local_f4,&local_10c,param_5,param_6
                                              ,param_7,param_8);
                        if (!bVar3) {
                          return 0;
                        }
                        if (uVar4 < 0x10) {
                          *(undefined4 *)(param_2 + 0x10b + uVar18 * 0xc) = local_f8;
                          *(undefined4 *)(param_2 + 0x10f + uVar18 * 0xc) = local_f4;
                          uVar16 = local_10c;
                          goto LAB_18003dec4;
                        }
                      }
                    }
                  }
                }
                uVar18 = (ulonglong)(uVar4 + 1);
              }
            }
            else {
              uVar6 = FUN_1800637c8(pbVar13,(byte *)"ditheringeffect");
              if (uVar6 == 0) {
                if (iVar5 != 0) {
                  return 0;
                }
                uVar7 = 1;
                if (uVar4 == 1) {
                  pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                  uVar4 = FUN_1800637c8(pbVar13,(byte *)"pure32bit");
                  if ((uVar4 != 0) &&
                     ((local_114 < 0x281 ||
                      (uVar4 = FUN_1800637c8(pbVar13,(byte *)"high_quality"), uVar4 != 0)))) {
                    uVar7 = FUN_1800637c8(pbVar13,(byte *)"ordered2x2");
                    if (uVar7 != 0) {
                      uVar7 = FUN_1800637c8(pbVar13,(byte *)"ordered4x4");
                      if (uVar7 != 0) {
                        return 0;
                      }
                      puVar17 = (undefined4 *)(param_2 + 0x1cb);
LAB_18003e4c0:
                      *puVar17 = 2;
                      goto LAB_18003e4c4;
                    }
                    puVar17 = (undefined4 *)(param_2 + 0x1cb);
LAB_18003e49c:
                    uVar16 = 1;
LAB_18003e4a0:
                    *puVar17 = uVar16;
                    goto LAB_18003e4c4;
                  }
                  *(undefined4 *)(param_2 + 0x1cb) = 0;
                  goto LAB_18003e734;
                }
              }
              else {
                uVar6 = FUN_1800637c8(pbVar13,(byte *)"dithering");
                if (uVar6 == 0) {
                  if (iVar5 != 0) {
                    return 0;
                  }
                  if (uVar4 == 1) {
                    pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                    uVar7 = FUN_1800637c8(pbVar13,(byte *)"disabled");
                    if (uVar7 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_18003e47c;
                    }
                    uVar7 = FUN_1800637c8(pbVar13,(byte *)"appdriven");
                    if (uVar7 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_18003e49c;
                    }
                    uVar7 = FUN_1800637c8(pbVar13,(byte *)"forceon16bit");
                    if (uVar7 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_18003e4c0;
                    }
                    uVar7 = FUN_1800637c8(pbVar13,(byte *)"forcealways");
                    if (uVar7 != 0) goto LAB_18003e60c;
                    puVar17 = (undefined4 *)(param_2 + 0x1cf);
LAB_18003e1bc:
                    uVar16 = 3;
                    goto LAB_18003e4a0;
                  }
                }
                else {
                  uVar6 = FUN_1800637c8(pbVar13,(byte *)"ditherorderedmatrixsizescale");
                  if (uVar6 == 0) {
                    if (iVar5 != 0) {
                      return 0;
                    }
                    uVar7 = 1;
                    if (uVar4 == 0) goto LAB_18003e734;
                    if (uVar4 == 1) {
                      param_5 = (uint *)(param_2 + 0x1d3);
                      goto LAB_18003dbd0;
                    }
                    goto LAB_18003e60c;
                  }
                  uVar6 = FUN_1800637c8(pbVar13,(byte *)"depthbuffersbitdepth");
                  if (uVar6 == 0) {
                    if (iVar5 != 0) {
                      return 0;
                    }
                    if (uVar4 == 1) {
                      pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                      uVar7 = FUN_1800637c8(pbVar13,(byte *)"appdriven");
                      if (uVar7 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
LAB_18003e47c:
                        *puVar17 = 0;
                        goto LAB_18003e4c4;
                      }
                      uVar7 = FUN_1800637c8(pbVar13,(byte *)"forcemin24bit");
                      if (uVar7 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_18003e49c;
                      }
                      uVar7 = FUN_1800637c8(pbVar13,(byte *)"force32bit");
                      if (uVar7 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_18003e4c0;
                      }
                      goto LAB_18003e60c;
                    }
                  }
                  else {
                    uVar11 = FUN_1800637c8(pbVar13,(byte *)"default3drenderformat");
                    uVar6 = local_114;
                    if (local_114 < 0x274 || uVar11 != 0) {
                      uVar11 = FUN_1800637c8(pbVar13,(byte *)"shadercodegenerating");
                      if (uVar6 == 0x260 && uVar11 == 0) {
                        if (iVar5 != 0) {
                          return 0;
                        }
                        if (uVar4 == 1) {
                          local_110 = 0;
                          param_5 = &local_110;
LAB_18003e1f4:
                          cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0);
                          uVar7 = (uint)(cVar2 != '\0');
                          goto LAB_18003e734;
                        }
                      }
                      else {
                        uVar11 = FUN_1800637c8(pbVar13,(byte *)"maxvsconstregisters");
                        puVar1 = local_e8;
                        if (uVar6 < 0x261 || uVar11 != 0) {
                          uVar11 = FUN_1800637c8(pbVar13,(byte *)"npatchtesselationlevel");
                          puVar1 = local_e0;
                          if (uVar6 < 0x276 || uVar11 != 0) {
                            uVar11 = FUN_1800637c8(pbVar13,(byte *)"displayoutputenablemask");
                            if (uVar6 < 0x279 || uVar11 != 0) {
                              uVar11 = FUN_1800637c8(pbVar13,(byte *)"smootheddepthsampling");
                              if (uVar11 == 0) {
                                if (iVar5 == 0) {
                                  uVar7 = 1;
                                  if (uVar4 != 0) {
                                    param_5 = (uint *)(param_2 + 0x1f5);
                                    uVar14 = 0;
                                    goto LAB_18003e6d8;
                                  }
                                  goto LAB_18003e734;
                                }
                              }
                              else {
                                uVar11 = FUN_1800637c8(pbVar13,(byte *)"msd3ddevicenames");
                                if (uVar11 == 0) {
                                  if (iVar5 == 0) {
                                    uVar7 = 1;
                                    if (uVar4 != 0) {
                                      param_5 = (uint *)(param_2 + 499);
                                      uVar14 = 0;
                                      goto LAB_18003e6d8;
                                    }
                                    goto LAB_18003e734;
                                  }
                                }
                                else {
                                  uVar11 = FUN_1800637c8(pbVar13,(byte *)
                                                  "rttexturesforcescaleandmsaa");
                                  if (uVar11 == 0) {
                                    if (iVar5 == 0) {
                                      uVar7 = 1;
                                      if (uVar4 != 0) {
                                        param_5 = (uint *)(param_2 + 500);
                                        uVar14 = 0;
                                        goto LAB_18003e6d8;
                                      }
                                      goto LAB_18003e734;
                                    }
                                  }
                                  else {
                                    uVar11 = FUN_1800637c8(pbVar13,(byte *)
                                                  "deferredscreenmodeswitch");
                                    if (uVar11 == 0) {
                                      if (iVar5 == 0) {
                                        uVar7 = 1;
                                        if (uVar4 != 0) {
                                          param_5 = (uint *)(param_2 + 0x1f6);
                                          uVar14 = 0;
                                          goto LAB_18003e6d8;
                                        }
                                        goto LAB_18003e734;
                                      }
                                    }
                                    else {
                                      uVar11 = FUN_1800637c8(pbVar13,(byte *)
                                                  "disabledefaultresolutions");
                                      if (uVar11 == 0) {
                                        if (iVar5 == 0) {
                                          uVar7 = 1;
                                          if (uVar4 != 0) {
                                            local_11e[0] = '\0';
                                            param_5 = (uint *)local_11e;
                                            uVar15 = FUN_18003c1c8(0,param_3,param_4,uVar10,
                                                                   (undefined1 *)param_5,uVar4);
                                            uVar7 = (uint)uVar15 & 0xff;
                                            uVar16 = 0;
                                            if (local_11e[0] == '\0') {
                                              uVar16 = 2;
                                            }
                                            *(undefined4 *)(param_2 + 0x1df) = uVar16;
                                            param_6 = uVar18;
                                          }
                                          goto LAB_18003e734;
                                        }
                                      }
                                      else {
                                        uVar11 = FUN_1800637c8(pbVar13,(byte *)
                                                  "defaultenumeratedresolutions");
                                        if (uVar11 != 0) {
                                          uVar11 = FUN_1800637c8(pbVar13,(byte *)
                                                  "enumeratedresolutionbitdepths");
                                          if (uVar11 == 0) {
                                            if (uVar7 != 0 && uVar4 != 0) {
                                              puVar1 = (uint *)(param_2 + 0x1e3);
                                              *puVar1 = 0;
                                              uVar6 = 0;
                                              uVar18 = 0;
                                              local_118 = param_4;
                                              local_100 = param_3;
                                              local_f0 = param_2;
                                              do {
                                                uVar14 = uVar18;
                                                pbVar13 = (byte *)(**(code **)(*local_100 + 0x50))
                                                                            (local_100,local_118,
                                                                             uVar10);
                                                iVar5 = FUN_180063ec8(pbVar13,(byte *)" 8 %c",
                                                                      &uStack_11f,uVar14,param_5,
                                                                      param_6,param_7,param_8);
                                                iVar8 = FUN_180063ec8(pbVar13,(byte *)" 16 %c",
                                                                      &uStack_11f,uVar14,param_5,
                                                                      param_6,param_7,param_8);
                                                iVar9 = FUN_180063ec8(pbVar13,(byte *)" 32 %c",
                                                                      &uStack_11f,uVar14,param_5,
                                                                      param_6,param_7,param_8);
                                                iVar12 = FUN_180063ec8(pbVar13,(byte *)" all %c",
                                                                       &uStack_11f,uVar14,param_5,
                                                                       param_6,param_7,param_8);
                                                if (iVar5 == -1) {
                                                  uVar11 = *puVar1 | 1;
LAB_18003e5b8:
                                                  *puVar1 = uVar11;
                                                  uVar6 = uVar6 | 1;
                                                }
                                                else {
                                                  if (iVar8 == -1) {
                                                    uVar11 = *puVar1 | 2;
                                                    goto LAB_18003e5b8;
                                                  }
                                                  if (iVar9 == -1) {
                                                    uVar11 = *puVar1 | 4;
                                                    goto LAB_18003e5b8;
                                                  }
                                                  if (iVar12 == -1) {
                                                    *puVar1 = *puVar1 | 7;
                                                    uVar6 = uVar6 | 2;
                                                  }
                                                  else {
                                                    uVar7 = 0;
                                                  }
                                                }
                                                uVar11 = (int)uVar18 + 1;
                                                uVar18 = (ulonglong)uVar11;
                                              } while (uVar11 < uVar4);
                                              bVar3 = uVar6 == 3;
                                              param_2 = local_f0;
                                              param_3 = local_100;
                                              param_4 = local_118;
                                              goto LAB_18003e608;
                                            }
                                          }
                                          else {
                                            uVar7 = FUN_1800637c8(pbVar13,(byte *)
                                                  "primarysurfacebatchedupdate");
                                            uVar14 = (ulonglong)uVar7;
                                            if (uVar6 < 0x262 || uVar7 != 0) {
                                              uVar7 = FUN_1800637c8(pbVar13,(byte *)
                                                  "enablespecializedshaders");
                                              if ((uVar7 == 0) && (uVar6 - 0x276 < 3)) {
                                                if (iVar5 != 0) goto LAB_18003e60c;
                                                uVar7 = 1;
                                                if (uVar4 != 0) {
                                                  param_5 = (uint *)local_11e;
                                                  uVar14 = 0;
                                                  goto LAB_18003e6d8;
                                                }
                                              }
                                              else {
                                                uVar6 = FUN_1800637c8(pbVar13,(byte *)
                                                  "d3d12boundschecking");
                                                uVar7 = local_114;
                                                uVar14 = (ulonglong)uVar6;
                                                if (local_114 < 0x283 || uVar6 != 0) {
                                                  uVar6 = FUN_1800637c8(pbVar13,(byte *)
                                                  "suppressamdblacklist");
                                                  uVar14 = (ulonglong)uVar6;
                                                  if (uVar7 < 0x281 || uVar6 != 0) {
                                                    uVar6 = FUN_1800637c8(pbVar13,(byte *)
                                                  "alternativescaling");
                                                  uVar14 = (ulonglong)uVar6;
                                                  if (uVar7 < 0x285 || uVar6 != 0) {
                                                    return 0;
                                                  }
                                                  if (iVar5 != 0) goto LAB_18003e60c;
                                                  uVar7 = 1;
                                                  if (uVar4 != 0) {
                                                    param_5 = (uint *)(param_2 + 0x1fa);
                                                    goto LAB_18003e6d8;
                                                  }
                                                  }
                                                  else {
                                                    if (iVar5 != 0) goto LAB_18003e60c;
                                                    uVar7 = 1;
                                                    if (uVar4 != 0) {
                                                      param_5 = (uint *)(param_2 + 0x1f8);
LAB_18003e6d8:
                                                      uVar15 = FUN_18003c1c8(uVar14,param_3,param_4,
                                                                             uVar10,(undefined1 *)
                                                                                    param_5,uVar4);
                                                      uVar7 = (uint)uVar15 & 0xff;
                                                      param_6 = uVar18;
                                                    }
                                                  }
                                                }
                                                else {
                                                  if (iVar5 != 0) goto LAB_18003e60c;
                                                  uVar7 = 1;
                                                  if (uVar4 != 0) {
                                                    param_5 = (uint *)(param_2 + 0x1f9);
                                                    goto LAB_18003e6d8;
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              if (iVar5 != 0) goto LAB_18003e60c;
                                              uVar7 = 1;
                                              if (uVar4 != 0) {
                                                param_5 = (uint *)(param_2 + 0x1f7);
                                                goto LAB_18003e6d8;
                                              }
                                            }
                                          }
                                          goto LAB_18003e734;
                                        }
                                        if (iVar5 != 0) {
                                          return 0;
                                        }
                                        if (uVar4 != 1) goto LAB_18003e324;
                                        pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))
                                                                    (param_3,param_4,uVar10,0);
                                        uVar7 = FUN_1800637c8(pbVar13,&DAT_180068ac0);
                                        if (uVar7 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_18003e47c;
                                        }
                                        uVar7 = FUN_1800637c8(pbVar13,(byte *)"classics");
                                        if (uVar7 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_18003e49c;
                                        }
                                        uVar7 = FUN_1800637c8(pbVar13,&DAT_180068184);
                                        if (uVar7 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_18003e4c0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_18003e60c;
                            }
                            if (iVar5 != 0) {
                              return 0;
                            }
                            if (uVar4 == 1) {
                              param_5 = (uint *)(param_2 + 0x1ef);
                              goto LAB_18003e1f4;
                            }
                          }
                          else {
                            if (iVar5 != 0) {
                              return 0;
                            }
                            if (uVar4 == 1) {
                              param_5 = local_e0;
                              cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0);
                              uVar7 = (uint)(cVar2 != '\0');
                              if (8 < *puVar1) {
                                uVar7 = 0;
                              }
                              goto LAB_18003e734;
                            }
                          }
                        }
                        else {
                          if (iVar5 != 0) {
                            return 0;
                          }
                          if (uVar4 == 1) {
                            param_5 = local_e8;
                            cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0);
                            uVar7 = (uint)(cVar2 != '\0');
                            bVar3 = (*puVar1 - 0x100 & 0xfffffcff) != 0 || *puVar1 == 0x300;
LAB_18003e608:
                            if (bVar3) goto LAB_18003e60c;
                            goto LAB_18003e734;
                          }
                        }
                      }
                    }
                    else {
                      if (iVar5 != 0) {
                        return 0;
                      }
                      if (uVar4 == 1) {
                        pbVar13 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                        uVar7 = FUN_1800637c8(pbVar13,&DAT_180068978);
                        if (uVar7 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_18003e47c;
                        }
                        uVar7 = FUN_1800637c8(pbVar13,(byte *)"argb8888");
                        if (uVar7 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_18003e49c;
                        }
                        uVar7 = FUN_1800637c8(pbVar13,(byte *)"argb2101010");
                        if (uVar7 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_18003e4c0;
                        }
                        uVar7 = FUN_1800637c8(pbVar13,(byte *)"argb16161616");
                        if (0x280 < uVar6 && uVar7 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_18003e1bc;
                        }
                        goto LAB_18003e60c;
                      }
                    }
                  }
                }
              }
LAB_18003e324:
              uVar7 = 1;
              if (1 < uVar4) goto LAB_18003e60c;
            }
          }
        }
      }
    }
LAB_18003e734:
    uVar10 = uVar10 + 1;
    if (uVar7 == 0) {
      return 0;
    }
  } while( true );
}

