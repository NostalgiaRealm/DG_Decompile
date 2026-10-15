/*
 * FUN_10057698 at 10057698
 * undefined FUN_10057698(void)
 * Address ranges: 10057698-1005850f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_10057698(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
LAB_100576d8:
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
    if ((0x25f < local_e0) && (iVar9 = FUN_10091880(uVar7,s_adapteridtype_100b4660), iVar9 == 0)) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 0) {
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_100581d4;
      }
      if (uVar6 == 1) {
        (*(code *)auStack_f3._3_4_)();
        uVar10 = (*extraout_w11_03)(uVar2,uVar10,uVar11,0);
        iVar8 = FUN_10091880(uVar10,0x100b4670);
        if (iVar8 == 0) {
          puVar19 = (undefined4 *)(param_2 + 0xf7);
          goto LAB_100581f4;
        }
        iVar8 = FUN_10091880(uVar10,0x100b4678);
        if (iVar8 != 0) {
          iVar8 = FUN_10091880(uVar10,s_intel_100b467c);
          if (iVar8 == 0) {
            puVar19 = (undefined4 *)(param_2 + 0xf7);
            goto LAB_10057f34;
          }
          goto LAB_100583c0;
        }
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_10058214;
      }
      goto LAB_10058060;
    }
    uVar14 = FUN_10091880(uVar7,s_vendorid_100b4688);
    if ((int)uVar14 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      bVar5 = 1;
      if (uVar6 != 0) {
        ppcVar16 = (code **)(param_2 + 0xfb);
LAB_10057d98:
        bVar5 = FUN_10055948(uVar14,local_f8,local_fc,uVar11,ppcVar16,uVar6);
      }
    }
    else {
      uVar14 = FUN_10091880(uVar7,s_deviceid_100b4698);
      if ((int)uVar14 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        bVar5 = 1;
        if (uVar6 != 0) {
          ppcVar16 = (code **)(param_2 + 0xff);
          goto LAB_10057d98;
        }
      }
      else {
        uVar14 = FUN_10091880(uVar7,s_subsystemid_100b46a8);
        if ((int)uVar14 == 0) {
          if (iVar8 != 0) {
            return '\0';
          }
          bVar5 = 1;
          if (uVar6 != 0) {
            ppcVar16 = (code **)(param_2 + 0x103);
            goto LAB_10057d98;
          }
        }
        else {
          uVar14 = FUN_10091880(uVar7,s_revisionid_100b46b8);
          if ((int)uVar14 == 0) {
            if (iVar8 != 0) {
              return '\0';
            }
            bVar5 = 1;
            if (uVar6 != 0) {
              ppcVar16 = (code **)(param_2 + 0x107);
              goto LAB_10057d98;
            }
          }
          else {
            iVar9 = FUN_10091880(uVar7,s_extraenumeratedresolutions_100b46c8);
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
                pcStack_11c = s_max____d__c_100b46e8;
                *(undefined4 *)(iVar8 + 0x113) = 0;
                local_120 = uVar11;
                iVar9 = FUN_10091e70(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_4_3____d__c_100b46f8;
                local_120 = uVar11;
                iVar12 = FUN_10091e70(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_16_9____d__c_100b4710;
                local_120 = uVar11;
                iVar13 = FUN_10091e70(&local_120,0x10);
                if (iVar9 == 1) {
                  uVar14 = 0xffffffffffffffff;
LAB_10057a3c:
                  *(undefined8 *)(iVar8 + 0x10b) = uVar14;
                  *(undefined4 *)(iVar8 + 0x113) = local_e8;
                }
                else {
                  if (iVar12 == 1) {
                    uVar14 = 0x100ffffffff;
                    goto LAB_10057a3c;
                  }
                  if (iVar13 == 1) {
                    uVar14 = 0x101ffffffff;
                    goto LAB_10057a3c;
                  }
                  local_114 = &uStack_f4;
                  pcStack_11c = s__s__c_100b4724;
                  local_118 = auStack_c8;
                  local_120 = uVar11;
                  iVar9 = FUN_10091e70(&local_120,0x10);
                  if ((iVar9 == 1) && (iVar9 = FUN_10091880(auStack_c8,&DAT_100b472c), iVar9 == 0))
                  {
                    *(undefined8 *)(iVar8 + 0x10b) = 0xffffffffffffffff;
                  }
                  else {
                    local_114 = &uStack_f4;
                    pcStack_11c = s__s__c_100b4724;
                    local_118 = auStack_c8;
                    local_120 = uVar11;
                    iVar8 = FUN_10091e70(&local_120,0x10);
                    if ((iVar8 == 1) && (iVar8 = FUN_10091880(auStack_c8,&DAT_100b4730), iVar8 == 0)
                       ) {
                      *(undefined4 *)(param_2 + (int)local_ec * 4 + 0x10b) = 0xffffffff;
                      piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                      pcVar18 = (code *)0x100;
                    }
                    else {
                      local_114 = &uStack_f4;
                      pcStack_11c = s__s__c_100b4724;
                      local_118 = auStack_c8;
                      local_120 = uVar11;
                      iVar8 = FUN_10091e70(&local_120,0x10);
                      if ((iVar8 == 1) &&
                         (iVar8 = FUN_10091880(auStack_c8,&DAT_100b4738), iVar8 == 0)) {
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = 0xffffffff;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                        pcVar18 = (code *)0x101;
                      }
                      else {
                        local_ec = (code *)0x0;
                        uVar15 = FUN_100559b8(uVar11,&local_d4,&local_d0,&local_ec,&local_d8);
                        if ((uVar15 & 1) == 0) {
                          return '\0';
                        }
                        if (0xf < uVar22) goto LAB_10057bc8;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = local_d4;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10f) = local_d0;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x113);
                        pcVar18 = local_ec;
                      }
                    }
                    *piVar20 = (int)pcVar18;
                  }
                }
LAB_10057bc8:
              }
            }
            else {
              iVar9 = FUN_10091880(uVar7,s_ditheringeffect_100b4370);
              if (iVar9 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                if (uVar6 != 1) goto LAB_10058060;
                uVar10 = (*(code *)auStack_f3._3_4_)();
                uVar10 = (*extraout_w11_05)(uVar10,local_fc,uVar11,0);
                iVar8 = FUN_10091880(uVar10,s_pure32bit_100b4380);
                if ((iVar8 != 0) &&
                   ((local_e0 < 0x281 ||
                    (iVar8 = FUN_10091880(uVar10,s_high_quality_100b4748), iVar8 != 0)))) {
                  iVar8 = FUN_10091880(uVar10,s_ordered2x2_100b4758);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_100581f4:
                    uVar10 = 1;
                  }
                  else {
                    iVar8 = FUN_10091880(uVar10,s_ordered4x4_100b4768);
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_10058214:
                    uVar10 = 2;
                  }
                  goto LAB_10058218;
                }
                *(undefined4 *)(param_2 + 0x1cb) = 0;
                bVar5 = 1;
              }
              else {
                iVar9 = FUN_10091880(uVar7,s_dithering_100b43b0);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_10058060;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_06)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_10091880(uVar10,s_disabled_100b43c0);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_100581d4;
                  }
                  iVar8 = FUN_10091880(uVar10,s_appdriven_100b3f28);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_100581f4;
                  }
                  iVar8 = FUN_10091880(uVar10,s_forceon16bit_100b4778);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_10058214;
                  }
                  iVar8 = FUN_10091880(uVar10,s_forcealways_100b43d0);
                  if (iVar8 != 0) goto LAB_100583c0;
                  puVar19 = (undefined4 *)(param_2 + 0x1cf);
LAB_10057f34:
                  uVar10 = 3;
LAB_10058218:
                  *puVar19 = uVar10;
LAB_1005821c:
                  bVar5 = 1;
                  uVar11 = uVar11 + 1;
                  goto LAB_100576d8;
                }
                uVar14 = FUN_10091880(uVar7,s_ditherorderedmatrixsizescale_100b43e0);
                if ((int)uVar14 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  bVar5 = 1;
                  if (uVar6 != 0) {
                    ppcVar16 = (code **)(param_2 + 0x1d3);
                    goto LAB_10057d98;
                  }
                  goto LAB_100584dc;
                }
                iVar9 = FUN_10091880(uVar7,s_depthbuffersbitdepth_100b4788);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 == 1) {
                    uVar10 = (*(code *)auStack_f3._3_4_)();
                    uVar10 = (*extraout_w11_07)(uVar10,local_fc,uVar11,0);
                    iVar8 = FUN_10091880(uVar10,s_appdriven_100b3f28);
                    if (iVar8 != 0) {
                      iVar8 = FUN_10091880(uVar10,s_forcemin24bit_100b47a0);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_100581f4;
                      }
                      iVar8 = FUN_10091880(uVar10,s_force32bit_100b47b0);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_10058214;
                      }
                      goto LAB_100583c0;
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1d7);
LAB_100581d4:
                    *puVar19 = 0;
                    goto LAB_1005821c;
                  }
LAB_10058060:
                  bVar5 = 1;
                  if (uVar6 < 2) goto LAB_100584dc;
                }
                else {
                  iVar9 = FUN_10091880(uVar7,s_default3drenderformat_100b47c0);
                  uVar22 = local_e0;
                  if (local_e0 < 0x274 || iVar9 != 0) {
                    uVar14 = FUN_10091880(uVar7,s_shadercodegenerating_100b4810);
                    if (uVar22 == 0x260 && (int)uVar14 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      if (uVar6 == 1) {
                        local_ec = (code *)0x0;
                        uVar6 = 1;
                        ppcVar16 = &local_ec;
                        goto LAB_10057d98;
                      }
                    }
                    else {
                      uVar14 = FUN_10091880(uVar7,s_maxvsconstregisters_100b4828);
                      if (uVar22 < 0x261 || (int)uVar14 != 0) {
                        uVar14 = FUN_10091880(uVar7,s_npatchtesselationlevel_100b4840);
                        if (uVar22 < 0x276 || (int)uVar14 != 0) {
                          uVar14 = FUN_10091880(uVar7,s_displayoutputenablemask_100b4858);
                          if (uVar22 < 0x279 || (int)uVar14 != 0) {
                            uVar14 = FUN_10091880(uVar7,s_smootheddepthsampling_100b4870);
                            if ((int)uVar14 == 0) {
                              if (iVar8 != 0) {
                                return '\0';
                              }
                              bVar5 = 1;
                              if (uVar6 != 0) {
                                pbVar17 = (byte *)(param_2 + 0x1f5);
                                goto LAB_1005848c;
                              }
                            }
                            else {
                              uVar14 = FUN_10091880(uVar7,s_msd3ddevicenames_100b4888);
                              if ((int)uVar14 == 0) {
                                if (iVar8 != 0) {
                                  return '\0';
                                }
                                bVar5 = 1;
                                if (uVar6 != 0) {
                                  pbVar17 = (byte *)(param_2 + 499);
                                  goto LAB_1005848c;
                                }
                              }
                              else {
                                uVar14 = FUN_10091880(uVar7,s_rttexturesforcescaleandmsaa_100b48a0);
                                if ((int)uVar14 == 0) {
                                  if (iVar8 != 0) {
                                    return '\0';
                                  }
                                  bVar5 = 1;
                                  if (uVar6 != 0) {
                                    pbVar17 = (byte *)(param_2 + 500);
                                    goto LAB_1005848c;
                                  }
                                }
                                else {
                                  uVar14 = FUN_10091880(uVar7,s_deferredscreenmodeswitch_100b48c0);
                                  if ((int)uVar14 == 0) {
                                    if (iVar8 != 0) {
                                      return '\0';
                                    }
                                    bVar5 = 1;
                                    if (uVar6 != 0) {
                                      pbVar17 = (byte *)(param_2 + 0x1f6);
                                      goto LAB_1005848c;
                                    }
                                  }
                                  else {
                                    uVar14 = FUN_10091880(uVar7,s_disabledefaultresolutions_100b48e0
                                                         );
                                    if ((int)uVar14 == 0) {
                                      if (iVar8 != 0) {
                                        return '\0';
                                      }
                                      bVar5 = 1;
                                      if (uVar6 != 0) {
                                        local_100[0] = 0;
                                        bVar5 = FUN_10055830(uVar14,local_f8,local_fc,uVar11,
                                                             local_100,uVar6);
                                        uVar10 = 0;
                                        if (local_100[0] == 0) {
                                          uVar10 = 2;
                                        }
                                        *(undefined4 *)(param_2 + 0x1df) = uVar10;
                                      }
                                    }
                                    else {
                                      iVar9 = FUN_10091880(uVar7,
                                                  s_defaultenumeratedresolutions_100b4900);
                                      if (iVar9 == 0) {
                                        if (iVar8 != 0) {
                                          return '\0';
                                        }
                                        if (uVar6 == 1) {
                                          uVar10 = (*(code *)auStack_f3._3_4_)();
                                          uVar10 = (*extraout_w11_09)(uVar10,local_fc,uVar11,0);
                                          iVar8 = FUN_10091880(uVar10,0x100b4920);
                                          if (iVar8 != 0) {
                                            iVar8 = FUN_10091880(uVar10,s_classics_100b4928);
                                            if (iVar8 != 0) {
                                              iVar8 = FUN_10091880(uVar10,0x100b3fdc);
                                              if (iVar8 != 0) goto LAB_100583c0;
                                              puVar19 = (undefined4 *)(param_2 + 0x1df);
                                              goto LAB_10058214;
                                            }
                                            puVar19 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_100581f4;
                                          }
                                          puVar19 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_100581d4;
                                        }
                                        goto LAB_10058060;
                                      }
                                      iVar9 = FUN_10091880(uVar7,
                                                  s_enumeratedresolutionbitdepths_100b4938);
                                      if (iVar9 == 0) {
                                        if (bVar5 != 0 && uVar6 != 0) {
                                          local_ec = FUN_100a9050;
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
                                            pcStack_11c = s_8__c_100b4958;
                                            local_120 = uVar11;
                                            iVar8 = FUN_10091e70(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_16__c_100b4960;
                                            local_120 = uVar11;
                                            iVar9 = FUN_10091e70(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_32__c_100b4968;
                                            local_120 = uVar11;
                                            iVar12 = FUN_10091e70(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_all__c_100b4970;
                                            local_120 = uVar11;
                                            iVar13 = FUN_10091e70(&local_120,0xc);
                                            if (iVar8 == -1) {
                                              uVar11 = *puVar1 | 1;
LAB_1005836c:
                                              *puVar1 = uVar11;
                                              uVar21 = uVar21 | 1;
                                            }
                                            else {
                                              if (iVar9 == -1) {
                                                uVar11 = *puVar1 | 2;
                                                goto LAB_1005836c;
                                              }
                                              if (iVar12 == -1) {
                                                uVar11 = *puVar1 | 4;
                                                goto LAB_1005836c;
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
                                          goto LAB_100583bc;
                                        }
                                      }
                                      else {
                                        uVar14 = FUN_10091880(uVar7,
                                                  s_primarysurfacebatchedupdate_100b4978);
                                        if (uVar22 < 0x262 || (int)uVar14 != 0) {
                                          uVar14 = FUN_10091880(uVar7,
                                                  s_enablespecializedshaders_100b4998);
                                          if (((int)uVar14 == 0) && (uVar22 - 0x276 < 3)) {
                                            if (iVar8 != 0) {
                                              return '\0';
                                            }
                                            bVar5 = 1;
                                            if (uVar6 != 0) {
                                              pbVar17 = local_100;
                                              goto LAB_1005848c;
                                            }
                                          }
                                          else {
                                            uVar14 = FUN_10091880(uVar7,
                                                  s_d3d12boundschecking_100b49b8);
                                            uVar22 = local_e0;
                                            if (local_e0 < 0x283 || (int)uVar14 != 0) {
                                              uVar14 = FUN_10091880(uVar7,
                                                  s_suppressamdblacklist_100b49d0);
                                              if (uVar22 < 0x281 || (int)uVar14 != 0) {
                                                uVar14 = FUN_10091880(uVar7,
                                                  s_alternativescaling_100b49e8);
                                                if (uVar22 < 0x285 || (int)uVar14 != 0) {
                                                  return '\0';
                                                }
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1fa);
                                                  goto LAB_1005848c;
                                                }
                                              }
                                              else {
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1f8);
LAB_1005848c:
                                                  bVar5 = FUN_10055830(uVar14,local_f8,local_fc,
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
                                                goto LAB_1005848c;
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
                                            goto LAB_1005848c;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_100584dc;
                          }
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            ppcVar16 = (code **)(param_2 + 0x1ef);
                            uVar6 = 1;
                            goto LAB_10057d98;
                          }
                        }
                        else {
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            bVar5 = FUN_10055948(uVar14,local_f8,local_fc,uVar11,
                                                 (uint *)(param_2 + 0x1eb),1);
                            if (8 < *(uint *)(param_2 + 0x1eb)) {
                              bVar5 = 0;
                            }
                            goto LAB_100584dc;
                          }
                        }
                      }
                      else {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        if (uVar6 == 1) {
                          bVar5 = FUN_10055948(uVar14,local_f8,local_fc,uVar11,
                                               (int *)(param_2 + 0x1e7),1);
                          iVar8 = *(int *)(param_2 + 0x1e7);
                          bVar4 = (iVar8 - 0x100U & 0xfffffcff) != 0 || iVar8 == 0x300;
LAB_100583bc:
                          if (bVar4) goto LAB_100583c0;
                          goto LAB_100584dc;
                        }
                      }
                    }
                    goto LAB_10058060;
                  }
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_10058060;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_08)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_10091880(uVar10,0x100b47d8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100581d4;
                  }
                  iVar8 = FUN_10091880(uVar10,0x100b47e0);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100581f4;
                  }
                  iVar8 = FUN_10091880(uVar10,s_argb2101010_100b47f0);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_10058214;
                  }
                  iVar8 = FUN_10091880(uVar10,0x100b4800);
                  if (0x280 < uVar22 && iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_10057f34;
                  }
                }
LAB_100583c0:
                bVar5 = 0;
              }
            }
          }
        }
      }
    }
LAB_100584dc:
    uVar11 = uVar11 + 1;
    if (bVar5 == 0) {
      return '\0';
    }
  } while( true );
}

