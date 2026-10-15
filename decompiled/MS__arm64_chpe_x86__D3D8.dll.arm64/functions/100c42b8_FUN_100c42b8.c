/*
 * FUN_100c42b8 at 100c42b8
 * undefined FUN_100c42b8(void)
 * Address ranges: 100c42b8-100c512f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_100c42b8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
LAB_100c42f8:
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
    if ((0x25f < local_e0) && (iVar9 = FUN_100fef80(uVar7,s_adapteridtype_1012dac0), iVar9 == 0)) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 0) {
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_100c4df4;
      }
      if (uVar6 == 1) {
        (*(code *)auStack_f3._3_4_)();
        uVar10 = (*extraout_w11_03)(uVar2,uVar10,uVar11,0);
        iVar8 = FUN_100fef80(uVar10,0x1012dad0);
        if (iVar8 == 0) {
          puVar19 = (undefined4 *)(param_2 + 0xf7);
          goto LAB_100c4e14;
        }
        iVar8 = FUN_100fef80(uVar10,0x1012dad8);
        if (iVar8 != 0) {
          iVar8 = FUN_100fef80(uVar10,s_intel_1012dadc);
          if (iVar8 == 0) {
            puVar19 = (undefined4 *)(param_2 + 0xf7);
            goto LAB_100c4b54;
          }
          goto LAB_100c4fe0;
        }
        puVar19 = (undefined4 *)(param_2 + 0xf7);
        goto LAB_100c4e34;
      }
      goto LAB_100c4c80;
    }
    uVar14 = FUN_100fef80(uVar7,s_vendorid_1012dae8);
    if ((int)uVar14 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      bVar5 = 1;
      if (uVar6 != 0) {
        ppcVar16 = (code **)(param_2 + 0xfb);
LAB_100c49b8:
        bVar5 = FUN_100c2568(uVar14,local_f8,local_fc,uVar11,ppcVar16,uVar6);
      }
    }
    else {
      uVar14 = FUN_100fef80(uVar7,s_deviceid_1012daf8);
      if ((int)uVar14 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        bVar5 = 1;
        if (uVar6 != 0) {
          ppcVar16 = (code **)(param_2 + 0xff);
          goto LAB_100c49b8;
        }
      }
      else {
        uVar14 = FUN_100fef80(uVar7,s_subsystemid_1012db08);
        if ((int)uVar14 == 0) {
          if (iVar8 != 0) {
            return '\0';
          }
          bVar5 = 1;
          if (uVar6 != 0) {
            ppcVar16 = (code **)(param_2 + 0x103);
            goto LAB_100c49b8;
          }
        }
        else {
          uVar14 = FUN_100fef80(uVar7,s_revisionid_1012db18);
          if ((int)uVar14 == 0) {
            if (iVar8 != 0) {
              return '\0';
            }
            bVar5 = 1;
            if (uVar6 != 0) {
              ppcVar16 = (code **)(param_2 + 0x107);
              goto LAB_100c49b8;
            }
          }
          else {
            iVar9 = FUN_100fef80(uVar7,s_extraenumeratedresolutions_1012db28);
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
                pcStack_11c = s_max____d__c_1012db48;
                *(undefined4 *)(iVar8 + 0x113) = 0;
                local_120 = uVar11;
                iVar9 = FUN_100ff6d0(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_4_3____d__c_1012db58;
                local_120 = uVar11;
                iVar12 = FUN_100ff6d0(&local_120,0x10);
                local_114 = &uStack_f4;
                local_118 = &local_e8;
                pcStack_11c = s_max_16_9____d__c_1012db70;
                local_120 = uVar11;
                iVar13 = FUN_100ff6d0(&local_120,0x10);
                if (iVar9 == 1) {
                  uVar14 = 0xffffffffffffffff;
LAB_100c465c:
                  *(undefined8 *)(iVar8 + 0x10b) = uVar14;
                  *(undefined4 *)(iVar8 + 0x113) = local_e8;
                }
                else {
                  if (iVar12 == 1) {
                    uVar14 = 0x100ffffffff;
                    goto LAB_100c465c;
                  }
                  if (iVar13 == 1) {
                    uVar14 = 0x101ffffffff;
                    goto LAB_100c465c;
                  }
                  local_114 = &uStack_f4;
                  pcStack_11c = s__s__c_1012db84;
                  local_118 = auStack_c8;
                  local_120 = uVar11;
                  iVar9 = FUN_100ff6d0(&local_120,0x10);
                  if ((iVar9 == 1) && (iVar9 = FUN_100fef80(auStack_c8,&DAT_1012db8c), iVar9 == 0))
                  {
                    *(undefined8 *)(iVar8 + 0x10b) = 0xffffffffffffffff;
                  }
                  else {
                    local_114 = &uStack_f4;
                    pcStack_11c = s__s__c_1012db84;
                    local_118 = auStack_c8;
                    local_120 = uVar11;
                    iVar8 = FUN_100ff6d0(&local_120,0x10);
                    if ((iVar8 == 1) && (iVar8 = FUN_100fef80(auStack_c8,&DAT_1012db90), iVar8 == 0)
                       ) {
                      *(undefined4 *)(param_2 + (int)local_ec * 4 + 0x10b) = 0xffffffff;
                      piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                      pcVar18 = (code *)0x100;
                    }
                    else {
                      local_114 = &uStack_f4;
                      pcStack_11c = s__s__c_1012db84;
                      local_118 = auStack_c8;
                      local_120 = uVar11;
                      iVar8 = FUN_100ff6d0(&local_120,0x10);
                      if ((iVar8 == 1) &&
                         (iVar8 = FUN_100fef80(auStack_c8,&DAT_1012db98), iVar8 == 0)) {
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = 0xffffffff;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x10f);
                        pcVar18 = (code *)0x101;
                      }
                      else {
                        local_ec = (code *)0x0;
                        uVar15 = FUN_100c25d8(uVar11,&local_d4,&local_d0,&local_ec,&local_d8);
                        if ((uVar15 & 1) == 0) {
                          return '\0';
                        }
                        if (0xf < uVar22) goto LAB_100c47e8;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10b) = local_d4;
                        *(undefined4 *)(param_2 + uVar22 * 0xc + 0x10f) = local_d0;
                        piVar20 = (int *)(param_2 + uVar22 * 0xc + 0x113);
                        pcVar18 = local_ec;
                      }
                    }
                    *piVar20 = (int)pcVar18;
                  }
                }
LAB_100c47e8:
              }
            }
            else {
              iVar9 = FUN_100fef80(uVar7,s_ditheringeffect_1012d7d0);
              if (iVar9 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                if (uVar6 != 1) goto LAB_100c4c80;
                uVar10 = (*(code *)auStack_f3._3_4_)();
                uVar10 = (*extraout_w11_05)(uVar10,local_fc,uVar11,0);
                iVar8 = FUN_100fef80(uVar10,s_pure32bit_1012d7e0);
                if ((iVar8 != 0) &&
                   ((local_e0 < 0x281 ||
                    (iVar8 = FUN_100fef80(uVar10,s_high_quality_1012dba8), iVar8 != 0)))) {
                  iVar8 = FUN_100fef80(uVar10,s_ordered2x2_1012dbb8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_100c4e14:
                    uVar10 = 1;
                  }
                  else {
                    iVar8 = FUN_100fef80(uVar10,s_ordered4x4_1012dbc8);
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1cb);
LAB_100c4e34:
                    uVar10 = 2;
                  }
                  goto LAB_100c4e38;
                }
                *(undefined4 *)(param_2 + 0x1cb) = 0;
                bVar5 = 1;
              }
              else {
                iVar9 = FUN_100fef80(uVar7,s_dithering_1012d810);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_100c4c80;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_06)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_100fef80(uVar10,s_disabled_1012d820);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_100c4df4;
                  }
                  iVar8 = FUN_100fef80(uVar10,s_appdriven_1012d390);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_100c4e14;
                  }
                  iVar8 = FUN_100fef80(uVar10,s_forceon16bit_1012dbd8);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_100c4e34;
                  }
                  iVar8 = FUN_100fef80(uVar10,s_forcealways_1012d830);
                  if (iVar8 != 0) goto LAB_100c4fe0;
                  puVar19 = (undefined4 *)(param_2 + 0x1cf);
LAB_100c4b54:
                  uVar10 = 3;
LAB_100c4e38:
                  *puVar19 = uVar10;
LAB_100c4e3c:
                  bVar5 = 1;
                  uVar11 = uVar11 + 1;
                  goto LAB_100c42f8;
                }
                uVar14 = FUN_100fef80(uVar7,s_ditherorderedmatrixsizescale_1012d840);
                if ((int)uVar14 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  bVar5 = 1;
                  if (uVar6 != 0) {
                    ppcVar16 = (code **)(param_2 + 0x1d3);
                    goto LAB_100c49b8;
                  }
                  goto LAB_100c50fc;
                }
                iVar9 = FUN_100fef80(uVar7,s_depthbuffersbitdepth_1012dbe8);
                if (iVar9 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 == 1) {
                    uVar10 = (*(code *)auStack_f3._3_4_)();
                    uVar10 = (*extraout_w11_07)(uVar10,local_fc,uVar11,0);
                    iVar8 = FUN_100fef80(uVar10,s_appdriven_1012d390);
                    if (iVar8 != 0) {
                      iVar8 = FUN_100fef80(uVar10,s_forcemin24bit_1012dc00);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_100c4e14;
                      }
                      iVar8 = FUN_100fef80(uVar10,s_force32bit_1012dc10);
                      if (iVar8 == 0) {
                        puVar19 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_100c4e34;
                      }
                      goto LAB_100c4fe0;
                    }
                    puVar19 = (undefined4 *)(param_2 + 0x1d7);
LAB_100c4df4:
                    *puVar19 = 0;
                    goto LAB_100c4e3c;
                  }
LAB_100c4c80:
                  bVar5 = 1;
                  if (uVar6 < 2) goto LAB_100c50fc;
                }
                else {
                  iVar9 = FUN_100fef80(uVar7,s_default3drenderformat_1012dc20);
                  uVar22 = local_e0;
                  if (local_e0 < 0x274 || iVar9 != 0) {
                    uVar14 = FUN_100fef80(uVar7,s_shadercodegenerating_1012dc70);
                    if (uVar22 == 0x260 && (int)uVar14 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      if (uVar6 == 1) {
                        local_ec = (code *)0x0;
                        uVar6 = 1;
                        ppcVar16 = &local_ec;
                        goto LAB_100c49b8;
                      }
                    }
                    else {
                      uVar14 = FUN_100fef80(uVar7,s_maxvsconstregisters_1012dc88);
                      if (uVar22 < 0x261 || (int)uVar14 != 0) {
                        uVar14 = FUN_100fef80(uVar7,s_npatchtesselationlevel_1012dca0);
                        if (uVar22 < 0x276 || (int)uVar14 != 0) {
                          uVar14 = FUN_100fef80(uVar7,s_displayoutputenablemask_1012dcb8);
                          if (uVar22 < 0x279 || (int)uVar14 != 0) {
                            uVar14 = FUN_100fef80(uVar7,s_smootheddepthsampling_1012dcd0);
                            if ((int)uVar14 == 0) {
                              if (iVar8 != 0) {
                                return '\0';
                              }
                              bVar5 = 1;
                              if (uVar6 != 0) {
                                pbVar17 = (byte *)(param_2 + 0x1f5);
                                goto LAB_100c50ac;
                              }
                            }
                            else {
                              uVar14 = FUN_100fef80(uVar7,s_msd3ddevicenames_1012dce8);
                              if ((int)uVar14 == 0) {
                                if (iVar8 != 0) {
                                  return '\0';
                                }
                                bVar5 = 1;
                                if (uVar6 != 0) {
                                  pbVar17 = (byte *)(param_2 + 499);
                                  goto LAB_100c50ac;
                                }
                              }
                              else {
                                uVar14 = FUN_100fef80(uVar7,s_rttexturesforcescaleandmsaa_1012dd00);
                                if ((int)uVar14 == 0) {
                                  if (iVar8 != 0) {
                                    return '\0';
                                  }
                                  bVar5 = 1;
                                  if (uVar6 != 0) {
                                    pbVar17 = (byte *)(param_2 + 500);
                                    goto LAB_100c50ac;
                                  }
                                }
                                else {
                                  uVar14 = FUN_100fef80(uVar7,s_deferredscreenmodeswitch_1012dd20);
                                  if ((int)uVar14 == 0) {
                                    if (iVar8 != 0) {
                                      return '\0';
                                    }
                                    bVar5 = 1;
                                    if (uVar6 != 0) {
                                      pbVar17 = (byte *)(param_2 + 0x1f6);
                                      goto LAB_100c50ac;
                                    }
                                  }
                                  else {
                                    uVar14 = FUN_100fef80(uVar7,s_disabledefaultresolutions_1012dd40
                                                         );
                                    if ((int)uVar14 == 0) {
                                      if (iVar8 != 0) {
                                        return '\0';
                                      }
                                      bVar5 = 1;
                                      if (uVar6 != 0) {
                                        local_100[0] = 0;
                                        bVar5 = FUN_100c2450(uVar14,local_f8,local_fc,uVar11,
                                                             local_100,uVar6);
                                        uVar10 = 0;
                                        if (local_100[0] == 0) {
                                          uVar10 = 2;
                                        }
                                        *(undefined4 *)(param_2 + 0x1df) = uVar10;
                                      }
                                    }
                                    else {
                                      iVar9 = FUN_100fef80(uVar7,
                                                  s_defaultenumeratedresolutions_1012dd60);
                                      if (iVar9 == 0) {
                                        if (iVar8 != 0) {
                                          return '\0';
                                        }
                                        if (uVar6 == 1) {
                                          uVar10 = (*(code *)auStack_f3._3_4_)();
                                          uVar10 = (*extraout_w11_09)(uVar10,local_fc,uVar11,0);
                                          iVar8 = FUN_100fef80(uVar10,0x1012dd80);
                                          if (iVar8 != 0) {
                                            iVar8 = FUN_100fef80(uVar10,s_classics_1012dd88);
                                            if (iVar8 != 0) {
                                              iVar8 = FUN_100fef80(uVar10,0x1012d444);
                                              if (iVar8 != 0) goto LAB_100c4fe0;
                                              puVar19 = (undefined4 *)(param_2 + 0x1df);
                                              goto LAB_100c4e34;
                                            }
                                            puVar19 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_100c4e14;
                                          }
                                          puVar19 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_100c4df4;
                                        }
                                        goto LAB_100c4c80;
                                      }
                                      iVar9 = FUN_100fef80(uVar7,
                                                  s_enumeratedresolutionbitdepths_1012dd98);
                                      if (iVar9 == 0) {
                                        if (bVar5 != 0 && uVar6 != 0) {
                                          local_ec = FUN_1011fd50;
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
                                            pcStack_11c = s_8__c_1012ddb8;
                                            local_120 = uVar11;
                                            iVar8 = FUN_100ff6d0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_16__c_1012ddc0;
                                            local_120 = uVar11;
                                            iVar9 = FUN_100ff6d0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_32__c_1012ddc8;
                                            local_120 = uVar11;
                                            iVar12 = FUN_100ff6d0(&local_120,0xc);
                                            local_118 = (undefined4 *)auStack_f3;
                                            pcStack_11c = s_all__c_1012ddd0;
                                            local_120 = uVar11;
                                            iVar13 = FUN_100ff6d0(&local_120,0xc);
                                            if (iVar8 == -1) {
                                              uVar11 = *puVar1 | 1;
LAB_100c4f8c:
                                              *puVar1 = uVar11;
                                              uVar21 = uVar21 | 1;
                                            }
                                            else {
                                              if (iVar9 == -1) {
                                                uVar11 = *puVar1 | 2;
                                                goto LAB_100c4f8c;
                                              }
                                              if (iVar12 == -1) {
                                                uVar11 = *puVar1 | 4;
                                                goto LAB_100c4f8c;
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
                                          goto LAB_100c4fdc;
                                        }
                                      }
                                      else {
                                        uVar14 = FUN_100fef80(uVar7,
                                                  s_primarysurfacebatchedupdate_1012ddd8);
                                        if (uVar22 < 0x262 || (int)uVar14 != 0) {
                                          uVar14 = FUN_100fef80(uVar7,
                                                  s_enablespecializedshaders_1012ddf8);
                                          if (((int)uVar14 == 0) && (uVar22 - 0x276 < 3)) {
                                            if (iVar8 != 0) {
                                              return '\0';
                                            }
                                            bVar5 = 1;
                                            if (uVar6 != 0) {
                                              pbVar17 = local_100;
                                              goto LAB_100c50ac;
                                            }
                                          }
                                          else {
                                            uVar14 = FUN_100fef80(uVar7,
                                                  s_d3d12boundschecking_1012de18);
                                            uVar22 = local_e0;
                                            if (local_e0 < 0x283 || (int)uVar14 != 0) {
                                              uVar14 = FUN_100fef80(uVar7,
                                                  s_suppressamdblacklist_1012de30);
                                              if (uVar22 < 0x281 || (int)uVar14 != 0) {
                                                uVar14 = FUN_100fef80(uVar7,
                                                  s_alternativescaling_1012de48);
                                                if (uVar22 < 0x285 || (int)uVar14 != 0) {
                                                  return '\0';
                                                }
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1fa);
                                                  goto LAB_100c50ac;
                                                }
                                              }
                                              else {
                                                if (iVar8 != 0) {
                                                  return '\0';
                                                }
                                                bVar5 = 1;
                                                if (uVar6 != 0) {
                                                  pbVar17 = (byte *)(param_2 + 0x1f8);
LAB_100c50ac:
                                                  bVar5 = FUN_100c2450(uVar14,local_f8,local_fc,
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
                                                goto LAB_100c50ac;
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
                                            goto LAB_100c50ac;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_100c50fc;
                          }
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            ppcVar16 = (code **)(param_2 + 0x1ef);
                            uVar6 = 1;
                            goto LAB_100c49b8;
                          }
                        }
                        else {
                          if (iVar8 != 0) {
                            return '\0';
                          }
                          if (uVar6 == 1) {
                            bVar5 = FUN_100c2568(uVar14,local_f8,local_fc,uVar11,
                                                 (uint *)(param_2 + 0x1eb),1);
                            if (8 < *(uint *)(param_2 + 0x1eb)) {
                              bVar5 = 0;
                            }
                            goto LAB_100c50fc;
                          }
                        }
                      }
                      else {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        if (uVar6 == 1) {
                          bVar5 = FUN_100c2568(uVar14,local_f8,local_fc,uVar11,
                                               (int *)(param_2 + 0x1e7),1);
                          iVar8 = *(int *)(param_2 + 0x1e7);
                          bVar4 = (iVar8 - 0x100U & 0xfffffcff) != 0 || iVar8 == 0x300;
LAB_100c4fdc:
                          if (bVar4) goto LAB_100c4fe0;
                          goto LAB_100c50fc;
                        }
                      }
                    }
                    goto LAB_100c4c80;
                  }
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  if (uVar6 != 1) goto LAB_100c4c80;
                  uVar10 = (*(code *)auStack_f3._3_4_)();
                  uVar10 = (*extraout_w11_08)(uVar10,local_fc,uVar11,0);
                  iVar8 = FUN_100fef80(uVar10,0x1012dc38);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100c4df4;
                  }
                  iVar8 = FUN_100fef80(uVar10,0x1012dc40);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100c4e14;
                  }
                  iVar8 = FUN_100fef80(uVar10,s_argb2101010_1012dc50);
                  if (iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100c4e34;
                  }
                  iVar8 = FUN_100fef80(uVar10,0x1012dc60);
                  if (0x280 < uVar22 && iVar8 == 0) {
                    puVar19 = (undefined4 *)(param_2 + 0x1db);
                    goto LAB_100c4b54;
                  }
                }
LAB_100c4fe0:
                bVar5 = 0;
              }
            }
          }
        }
      }
    }
LAB_100c50fc:
    uVar11 = uVar11 + 1;
    if (bVar5 == 0) {
      return '\0';
    }
  } while( true );
}

