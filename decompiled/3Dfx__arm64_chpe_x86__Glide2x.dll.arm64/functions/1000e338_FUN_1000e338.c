/*
 * FUN_1000e338 at 1000e338
 * undefined FUN_1000e338(void)
 * Address ranges: 1000e338-1000f1af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_1000e338(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  code **ppcVar16;
  byte *pbVar17;
  code *pcVar18;
  undefined4 *puVar19;
  int *piVar20;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  uint uVar21;
  uint uVar22;
  uint local_120;
  char *pcStack_11c;
  undefined4 *local_118;
  undefined1 *local_114;
  byte local_100 [4];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 uStack_f4;
  undefined1 auStack_f3 [7];
  code *local_ec;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  code *local_cc;
  undefined4 auStack_c8 [34];
  
  bVar5 = 1;
  uVar11 = 0;
  auStack_f3._3_4_ = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_fc = param_4;
  local_f8 = param_3;
  local_e0 = param_5;
LAB_1000e378:
  do {
    uVar3 = auStack_f3._3_4_;
    uVar2 = local_f8;
    (*(code *)auStack_f3._3_4_)();
    uVar10 = local_fc;
    uVar6 = (*extraout_w11)(uVar2,local_fc);
    if (uVar6 <= uVar11) {
      return bVar5;
    }
    (*(code *)uVar3)();
    uVar7 = (*extraout_w11_00)(uVar2,uVar10,uVar11);
    (*(code *)uVar3)();
    uVar6 = (*extraout_w11_01)(uVar2,uVar10,uVar11);
    (*(code *)uVar3)();
    iVar8 = (*extraout_w11_02)(uVar2,uVar10,uVar11);
    if ((0x25f < local_e0) && (iVar9 = FUN_1007a140(uVar7,s_adapteridtype_10096230), iVar9 == 0)) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 0) {
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_1000ee74;
      }
      if (uVar6 == 1) {
        (*(code *)auStack_f3._3_4_)();
        uVar10 = (*extraout_w11_03)(uVar2,uVar10,uVar11,0);
        iVar8 = FUN_1007a140(uVar10,0x10096240);
        if (iVar8 == 0) {
          puVar19 = (undefined4 *)(param_2 + 0xf7);
          goto LAB_1000ee94;
        }
        iVar8 = FUN_1007a140(uVar10,0x10096248);
        if (iVar8 != 0) {
          iVar8 = FUN_1007a140(uVar10,s_intel_1009624c);
          if (iVar8 == 0) {
            puVar19 = (undefined4 *)(param_2 + 0xf7);
            goto LAB_1000ebd4;
          }
          goto LAB_1000f060;
        }
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_1000eeb4;
      }
      goto LAB_1000ed00;
    }
    uVar14 = FUN_1007a140(uVar7,s_vendorid_10096258);
    if ((int)uVar14 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      bVar5 = 1;
      if (uVar6 != 0) {
        ppcVar16 = (code **)(param_2 + 0xfb);
LAB_1000ea38:
        bVar5 = FUN_1000c5e8(uVar14,local_f8,local_fc,uVar11,ppcVar16,uVar6);
      }
    }
    else {
      uVar14 = FUN_1007a140(uVar7,s_deviceid_10096268);
      if ((int)uVar14 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        bVar5 = 1;
        if (uVar6 != 0) {
          ppcVar16 = (code **)(param_2 + 0xff);
          goto LAB_1000ea38;
        }
      }
      else {
        uVar14 = FUN_1007a140(uVar7,s_subsystemid_10096278);
        if ((int)uVar14 == 0) {
          if (iVar8 != 0) {
            return '\0';
          }
          bVar5 = 1;
          if (uVar6 != 0) {
            ppcVar16 = (code **)(param_2 + 0x103);
            goto LAB_1000ea38;
          }
        }
        else {
          uVar14 = FUN_1007a140(uVar7,s_revisionid_10096288);
          if ((int)uVar14 == 0) {
            if (iVar8 != 0) {
              return '\0';
            }
            bVar5 = 1;
            if (uVar6 != 0) {
              ppcVar16 = (code **)(param_2 + 0x107);
              goto LAB_1000ea38;
            }
          }
          else {
            iVar9 = FUN_1007a140(uVar7,s_extraenumeratedresolutions_10096298);
            if (iVar9 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              local_100[0] = 1;
              local_e4 = uVar11;
              local_dc = uVar6;
              for (uVar22 = 0; uVar11 = local_e4, bVar5 = local_100[0], uVar22 < local_dc;
                  uVar22 = uVar22 + 1) {
                uVar10 = (*(code *)auStack_f3._3_4_)();
                uVar11 = (*extraout_w11_04)(uVar10,local_fc,local_e4,uVar22);
                local_ec = (code *)(uVar22 * 3);
                iVar8 = param_2 + uVar22 * 0xc;
                local_e8 = 0;
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max____d__c_100962b8;
                *(undefined4 *)(iVar8 + 0x113) = 0;
                local_120 = uVar11;
                iVar9 = FUN_1007c2c0(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_4_3____d__c_100962c8;
                local_120 = uVar11;
                iVar12 = FUN_1007c2c0(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_16_9____d__c_100962e0;
                local_120 = uVar11;
                iVar13 = FUN_1007c2c0(&local_120,0x10);
                if (iVar9 == 1) {
                  uVar14 = 0xffffffffffffffff;
LAB_1000e6dc:
                  *(undefined8 *)(iVar8 + 0x10b) = uVar14;
                  *(undefined4 *)(iVar8 + 0x113) = local_e8;
                }
                else {
                  if (iVar12 == 1) {
                    uVar14 = 0x100ffffffff;
                    goto LAB_1000e6dc;
                  }
                  if (iVar13 == 1) {
                    uVar14 = 0x101ffffffff;
                    goto LAB_1000e6dc;
                  }
                  local_114 = &uStack_f4;
                  pcStack_11c = s__s__c_10095948;
                  local_118 = auStack_c8;
                  local_120 = uVar11;
                  iVar9 = FUN_1007c2c0(&local_120,0x10);
                  if ((iVar9 == 1) && (iVar9 = FUN_1007a140(auStack_c8,&DAT_100959b4), iVar9 == 0))
                  {
                    *(undefined8 *)(iVar8 + 0x10b) = 0xffffffffffffffff;
                  }
                  else {
                    local_114 = &uStack_f4;
                    pcStack_11c = s__s__c_10095948;
                    local_118 = auStack_c8;
                    local_120 = uVar11;
                    iVar8 = FUN_1007c2c0(&local_120,0x10);
                    if ((iVar8 == 1) && (iVar8 = FUN_1007a140(auStack_c8,&DAT_100962f8), iVar8 == 0)
                       ) {
                      *(undefined4 *)(param_2 + (int)local_ec * 4 + 0x10b) = 0xffffffff;
                      piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                      pcVar18 = (code *)0x100;
                    }
                    else {
                      local_114 = &uStack_f4;
                      pcStack_11c = s__s__c_10095948;
                      local_118 = auStack_c8;
                      local_120 = uVar11;
                      iVar8 = FUN_1007c2c0(&local_120,0x10);
                      if ((iVar8 == 1) &&
                         (iVar8 = FUN_1007a140(auStack_c8,&DAT_10096300), iVar8 == 0)) {
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = 0xffffffff;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                        pcVar18 = (code *)0x101;
                      }
                      else {
                        local_ec = (code *)0x0;
                        uVar15 = FUN_1000c658(uVar11,&local_d4,&local_d0,&local_ec,&local_d8);
                        if ((uVar15 & 1) == 0) {
                          return '\0';
                        }
                        if (0xf < uVar22) goto LAB_1000e868;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = local_d4;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10f) = local_d0;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x113);
                        pcVar18 = local_ec;
                      }
                    }
                    *piVar20 = (int)pcVar18;
                  }
                }
LAB_1000e868:
              }
            }
            else {
              iVar9 = FUN_1007a140(uVar7,s_ditheringeffect_10095f40);
              if (iVar9 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                if (uVar6 != 1) goto LAB_1000ed00;
                uVar10 = (*(code *)auStack_f3._3_4_)();
                uVar10 = (*extraout_w11_05)(uVar10,local_fc,uVar11,0);
                iVar8 = FUN_1007a140(uVar10,s_pure32bit_10095f50);
                if ((iVar8 != 0) &&
                   ((local_e0 < 0x281 ||
                    (iVar8 = FUN_1007a140(uVar10,s_high_quality_10096310), iVar8 != 0)))) {
                  iVar8 = FUN_1007a140(uVar10,s_ordered2x2_10096320);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_1000ee94:
                    uVar10 = 1;
                  }
                  else {
                    iVar8 = FUN_1007a140(uVar10,s_ordered4x4_10096330);
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_1000eeb4:
                    uVar10 = 2;
                  }
                  goto LAB_1000eeb8;
                }
                *(undefined4 *)(param_2 + 0x1cb) = 0;
                bVar5 = 1;
              }
              else {
                iVar9 = FUN_1007a140(uVar7,s_dithering_10095f80);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_1000ed00;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_06)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_1007a140(uVar10,s_disabled_10095f90);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1000ee74;
                  }
                  iVar8 = FUN_1007a140(uVar10,s_appdriven_10095af8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1000ee94;
                  }
                  iVar8 = FUN_1007a140(uVar10,s_forceon16bit_10096340);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1000eeb4;
                  }
                  iVar8 = FUN_1007a140(uVar10,s_forcealways_10095fa0);
                  if (iVar8 != 0) goto LAB_1000f060;
                  puVar19 = (undefined4 *)(param_2 + 0x1cf);
LAB_1000ebd4:
                  uVar10 = 3;
LAB_1000eeb8:
                  *puVar19 = uVar10;
LAB_1000eebc:
                  bVar5 = 1;
                  uVar11 = uVar11 + 1;
                  goto LAB_1000e378;
                }
                uVar14 = FUN_1007a140(uVar7,s_ditherorderedmatrixsizescale_10095fb0);
                if ((int)uVar14 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  bVar5 = 1;
                  if (uVar6 != 0) {
                    ppcVar16 = (code **)(param_2 + 0x1d3);
                    goto LAB_1000ea38;
                  }
                  goto LAB_1000f17c;
                }
                iVar9 = FUN_1007a140(uVar7,s_depthbuffersbitdepth_10096350);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 == 1) {
                    uVar10 = (*(code *)auStack_f3._3_4_)();
                    uVar10 = (*extraout_w11_07)(uVar10,local_fc,uVar11,0);
                    iVar8 = FUN_1007a140(uVar10,s_appdriven_10095af8);
                    if (iVar8 != 0) {
                      iVar8 = FUN_1007a140(uVar10,s_forcemin24bit_10096368);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_1000ee94;
                      }
                      iVar8 = FUN_1007a140(uVar10,s_force32bit_10096378);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_1000eeb4;
                      }
                      goto LAB_1000f060;
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1d7);
LAB_1000ee74:
                    *puVar19 = 0;
                    goto LAB_1000eebc;
                  }
LAB_1000ed00:
                  bVar5 = 1;
                  if (uVar6 < 2) goto LAB_1000f17c;
                }
                else {
                  iVar9 = FUN_1007a140(uVar7,s_default3drenderformat_10096388);
                  uVar22 = local_e0;
                  if (local_e0 < 0x274 || iVar9 != 0) {
                    uVar14 = FUN_1007a140(uVar7,s_shadercodegenerating_100963d8);
                    if (uVar22 == 0x260 && (int)uVar14 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      if (uVar6 == 1) {
                        local_ec = (code *)0x0;
                        uVar6 = 1;
                        ppcVar16 = &local_ec;
                        goto LAB_1000ea38;
                      }
                    }
                    else {
                      uVar14 = FUN_1007a140(uVar7,s_maxvsconstregisters_100963f0);
                      if (uVar22 < 0x261 || (int)uVar14 != 0) {
                        uVar14 = FUN_1007a140(uVar7,s_npatchtesselationlevel_10096408);
                        if (uVar22 < 0x276 || (int)uVar14 != 0) {
                          uVar14 = FUN_1007a140(uVar7,s_displayoutputenablemask_10096420);
                          if (uVar22 < 0x279 || (int)uVar14 != 0) {
                            uVar14 = FUN_1007a140(uVar7,s_smootheddepthsampling_10096438);
                            if ((int)uVar14 == 0) {
                              if (iVar8 != 0) {
                                return '\0';
                              }
                              bVar5 = 1;
                              if (uVar6 != 0) {
                                pbVar17 = (byte *)(param_2 + 0x1f5);
                                goto LAB_1000f12c;
                              }
                            }
                            else {
                              uVar14 = FUN_1007a140(uVar7,s_msd3ddevicenames_10096450);
                              if ((int)uVar14 == 0) {
                                if (iVar8 != 0) {
                                  return '\0';
                                }
                                bVar5 = 1;
                                if (uVar6 != 0) {
                                  pbVar17 = (byte *)(param_2 + 499);
                                  goto LAB_1000f12c;
                                }
                              }
                              else {
                                uVar14 = FUN_1007a140(uVar7,s_rttexturesforcescaleandmsaa_10096468);
                                if ((int)uVar14 == 0) {
                                  if (iVar8 != 0) {
                                    return '\0';
                                  }
                                  bVar5 = 1;
                                  if (uVar6 != 0) {
                                    pbVar17 = (byte *)(param_2 + 500);
                                    goto LAB_1000f12c;
                                  }
                                }
                                else {
                                  uVar14 = FUN_1007a140(uVar7,s_deferredscreenmodeswitch_10096488);
                                  if ((int)uVar14 == 0) {
                                    if (iVar8 != 0) {
                                      return '\0';
                                    }
                                    bVar5 = 1;
                                    if (uVar6 != 0) {
                                      pbVar17 = (byte *)(param_2 + 0x1f6);
                                      goto LAB_1000f12c;
                                    }
                                  }
                                  else {
                                    uVar14 = FUN_1007a140(uVar7,s_disabledefaultresolutions_100964a8
                                                         );
                                    if ((int)uVar14 == 0) {
                                      if (iVar8 != 0) {
                                        return '\0';
                                      }
                                      bVar5 = 1;
                                      if (uVar6 != 0) {
                                        local_100[0] = 0;
                                        bVar5 = FUN_1000c4d0(uVar14,local_f8,local_fc,uVar11,
                                                             local_100,uVar6);
                                        uVar10 = 0;
                                        if (local_100[0] == 0) {
                                          uVar10 = 2;
                                        }
                                        *(undefined4 *)(param_2 + 0x1df) = uVar10;
                                      }
                                    }
                                    else {
                                      iVar9 = FUN_1007a140(uVar7,
                                                  s_defaultenumeratedresolutions_100964c8);
                                      if (iVar9 == 0) {
                                        if (iVar8 != 0) {
                                          return '\0';
                                        }
                                        if (uVar6 == 1) {
                                          uVar10 = (*(code *)auStack_f3._3_4_)();
                                          uVar10 = (*extraout_w11_09)(uVar10,local_fc,uVar11,0);
                                          iVar8 = FUN_1007a140(uVar10,0x100964e8);
                                          if (iVar8 != 0) {
                                            iVar8 = FUN_1007a140(uVar10,s_classics_100964f0);
                                            if (iVar8 != 0) {
                                              iVar8 = FUN_1007a140(uVar10,0x10095bac);
                                              if (iVar8 != 0) goto LAB_1000f060;
                                              puVar19 = (undefined4 *)(param_2 + 0x1df);
                                              goto LAB_1000eeb4;
                                            }
                                            puVar19 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_1000ee94;
                                          }
                                          puVar19 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_1000ee74;
                                        }
                                        goto LAB_1000ed00;
                                      }
                                      iVar9 = FUN_1007a140(uVar7,
                                                  s_enumeratedresolutionbitdepths_10096500);
                                      if (iVar9 == 0) {
                                        if (bVar5 != 0 && uVar6 != 0) {
                                          local_ec = FUN_1008da08;
                                          puVar1 = (uint *)(param_2 + 0x1e3);
                                          *puVar1 = 0;
                                          uVar21 = 0;
                                          local_cc = (code *)auStack_f3._3_4_;
                                          uVar22 = 0;
                                          local_100[0] = bVar5;
                                          local_e4 = uVar11;
                                          local_dc = uVar6;
                                          local_d8 = param_2;
                                          do {
                                            uVar10 = (*local_cc)();
                                            uVar11 = (*extraout_w11_10)(uVar10,local_fc,local_e4,
                                                                        uVar22);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_8__c_10096520;
                                            local_120 = uVar11;
                                            iVar8 = FUN_1007c2c0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_16__c_10096528;
                                            local_120 = uVar11;
                                            iVar9 = FUN_1007c2c0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_32__c_10096530;
                                            local_120 = uVar11;
                                            iVar12 = FUN_1007c2c0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_all__c_10096538;
                                            local_120 = uVar11;
                                            iVar13 = FUN_1007c2c0(&local_120,0xc);
                                            if (iVar8 == -1) {
                                              uVar11 = *puVar1 | 1;
LAB_1000f00c:
                                              *puVar1 = uVar11;
                                              uVar21 = uVar21 | 1;
                                            }
                                            else {
                                              if (iVar9 == -1) {
                                                uVar11 = *puVar1 | 2;
                                                goto LAB_1000f00c;
                                              }
                                              if (iVar12 == -1) {
                                                uVar11 = *puVar1 | 4;
                                                goto LAB_1000f00c;
                                              }
                                              if (iVar13 == -1) {
                                                *puVar1 = *puVar1 | 7;
                                                uVar21 = uVar21 | 2;
                                              }
                                              else {
                                                local_100[0] = 0;
                                              }
                                            }
                                            uVar22 = uVar22 + 1;
                                          } while (uVar22 < local_dc);
                                          bVar4 = uVar21 == 3;
                                          uVar11 = local_e4;
                                          bVar5 = local_100[0];
                                          param_2 = local_d8;
                                          goto LAB_1000f05c;
                                        }
                                      }
                                      else {
                                        uVar14 = FUN_1007a140(uVar7,
                                                  s_primarysurfacebatchedupdate_10096540);
                                        if (uVar22 < 0x262 || (int)uVar14 != 0) {
                                          uVar14 = FUN_1007a140(uVar7,
                                                  s_enablespecializedshaders_10096560);
                                          if (((int)uVar14 == 0) && (uVar22 - 0x276 < 3)) {
                                            if (iVar8 != 0) {
                                              return '\0';
                                            }
                                            bVar5 = 1;
                                            if (uVar6 != 0) {
                                              pbVar17 = local_100;
                                              goto LAB_1000f12c;
                                            }
                                          }
                                          else {
                                            uVar14 = FUN_1007a140(uVar7,
                                                  s_d3d12boundschecking_10096580);
                                            uVar22 = local_e0;
                                            if (local_e0 < 0x283 || (int)uVar14 != 0) {
                                              uVar14 = FUN_1007a140(uVar7,
                                                  s_suppressamdblacklist_10096598);
                                              if (uVar22 < 0x281 || (int)uVar14 != 0) {
                                                uVar14 = FUN_1007a140(uVar7,
                                                  s_alternativescaling_100965b0);
                                                if (uVar22 < 0x285 || (int)uVar14 != 0) {
                                                  return '\0';
                                                }
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1fa);
                                                  goto LAB_1000f12c;
                                                }
                                              }
                                              else {
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1f8);
LAB_1000f12c:
                                                  bVar5 = FUN_1000c4d0(uVar14,local_f8,local_fc,
                                                                       uVar11,pbVar17,uVar6);
                                                }
                                              }
                                            }
                                            else {
                                              if (iVar8 != 0) {
                                                return '\0';
                                              }
                                              bVar5 = 1;
                                              if (uVar6 != 0) {
                                                pbVar17 = (byte *)(param_2 + 0x1f9);
                                                goto LAB_1000f12c;
                                              }
                                            }
                                          }
                                        }
                                        else {
                                          if (iVar8 != 0) {
                                            return '\0';
                                          }
                                          bVar5 = 1;
                                          if (uVar6 != 0) {
                                            pbVar17 = (byte *)(param_2 + 0x1f7);
                                            goto LAB_1000f12c;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_1000f17c;
                          }
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            ppcVar16 = (code **)(param_2 + 0x1ef);
                            uVar6 = 1;
                            goto LAB_1000ea38;
                          }
                        }
                        else {
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            bVar5 = FUN_1000c5e8(uVar14,local_f8,local_fc,uVar11,
                                                 (uint *)(param_2 + 0x1eb),1);
                            if (8 < *(uint *)(param_2 + 0x1eb)) {
                              bVar5 = 0;
                            }
                            goto LAB_1000f17c;
                          }
                        }
                      }
                      else {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        if (uVar6 == 1) {
                          bVar5 = FUN_1000c5e8(uVar14,local_f8,local_fc,uVar11,
                                               (int *)(param_2 + 0x1e7),1);
                          iVar8 = *(int *)(param_2 + 0x1e7);
                          bVar4 = (iVar8 - 0x100U & 0xfffffcff) != 0 || iVar8 == 0x300;
LAB_1000f05c:
                          if (bVar4) goto LAB_1000f060;
                          goto LAB_1000f17c;
                        }
                      }
                    }
                    goto LAB_1000ed00;
                  }
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_1000ed00;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_08)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_1007a140(uVar10,0x100963a0);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_1000ee74;
                  }
                  iVar8 = FUN_1007a140(uVar10,0x100963a8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_1000ee94;
                  }
                  iVar8 = FUN_1007a140(uVar10,s_argb2101010_100963b8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_1000eeb4;
                  }
                  iVar8 = FUN_1007a140(uVar10,0x100963c8);
                  if (0x280 < uVar22 && iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_1000ebd4;
                  }
                }
LAB_1000f060:
                bVar5 = 0;
              }
            }
          }
        }
      }
    }
LAB_1000f17c:
    uVar11 = uVar11 + 1;
    if (bVar5 == 0) {
      return '\0';
    }
  } while( true );
}

