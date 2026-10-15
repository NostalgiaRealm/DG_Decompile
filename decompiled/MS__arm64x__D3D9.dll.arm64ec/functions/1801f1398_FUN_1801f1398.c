/*
 * FUN_1801f1398 at 1801f1398
 * undefined FUN_1801f1398(void)
 * Address ranges: 1801f1398-1801f215b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801f1398(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  char local_10a [2];
  undefined8 local_108;
  uint local_100;
  uint local_fc;
  code *local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  longlong local_d8;
  int *local_d0;
  uint *local_c8;
  undefined1 auStack_c0 [128];
  
  local_d0 = (int *)(param_2 + 0x1e7);
  local_c8 = (uint *)(param_2 + 0x1eb);
  local_f8 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar6 = 1;
  uVar16 = 0;
  local_108 = param_3;
  local_ec = param_5;
  do {
    while( true ) {
      uVar10 = local_108;
      (*local_f8)();
      uVar3 = (*extraout_x11)(uVar10,param_4);
      if (uVar3 <= uVar16) {
        return uVar6;
      }
      (*local_f8)();
      uVar9 = (*extraout_x11_00)(uVar10,param_4,uVar16);
      (*local_f8)();
      uVar3 = (*extraout_x11_01)(uVar10,param_4,uVar16);
      (*local_f8)();
      iVar4 = (*extraout_x11_02)(uVar10,param_4,uVar16);
      if ((local_ec < 0x260) ||
         (iVar5 = FUN_180222cb8(uVar9,s_adapteridtype_1802375f8), uVar10 = local_108, iVar5 != 0))
      break;
      if (iVar4 != 0) {
        return 0;
      }
      if (uVar3 == 0) {
        *(undefined4 *)(param_2 + 0xf7) = 0;
      }
      else {
        if (uVar3 != 1) goto LAB_1801f1ce4;
        (*local_f8)();
        uVar10 = (*extraout_x11_03)(uVar10,param_4,uVar16,0);
        iVar4 = FUN_180222cb8(uVar10,s_nvidia_18023760c);
        if (iVar4 == 0) {
          uVar14 = 1;
        }
        else {
          iVar4 = FUN_180222cb8(uVar10,&DAT_180237608);
          if (iVar4 == 0) {
            uVar14 = 2;
          }
          else {
            iVar4 = FUN_180222cb8(uVar10,s_intel_180237624);
            if (iVar4 != 0) goto LAB_1801f2014;
            uVar14 = 3;
          }
        }
        *(undefined4 *)(param_2 + 0xf7) = uVar14;
      }
LAB_1801f1e98:
      uVar6 = 1;
      uVar16 = uVar16 + 1;
    }
    uVar10 = FUN_180222cb8(uVar9,s_vendorid_180237618);
    if ((int)uVar10 == 0) {
      if (iVar4 != 0) goto LAB_1801f2014;
      uVar6 = 1;
      if (uVar3 != 0) {
        puVar12 = (uint *)(param_2 + 0xfb);
LAB_1801f1a28:
        uVar6 = FUN_1801ef980(uVar10,local_108,param_4,uVar16,puVar12,uVar3);
LAB_1801f20f4:
        uVar6 = uVar6 & 0xff;
      }
    }
    else {
      uVar10 = FUN_180222cb8(uVar9,s_deviceid_180237630);
      if ((int)uVar10 == 0) {
        if (iVar4 != 0) goto LAB_1801f2014;
        uVar6 = 1;
        if (uVar3 != 0) {
          puVar12 = (uint *)(param_2 + 0xff);
          goto LAB_1801f1a28;
        }
      }
      else {
        uVar10 = FUN_180222cb8(uVar9,s_subsystemid_180237640);
        if ((int)uVar10 == 0) {
          if (iVar4 != 0) goto LAB_1801f2014;
          uVar6 = 1;
          if (uVar3 != 0) {
            puVar12 = (uint *)(param_2 + 0x103);
            goto LAB_1801f1a28;
          }
        }
        else {
          uVar10 = FUN_180222cb8(uVar9,s_revisionid_180237650);
          if ((int)uVar10 == 0) {
            if (iVar4 != 0) goto LAB_1801f2014;
            uVar6 = 1;
            if (uVar3 != 0) {
              puVar12 = (uint *)(param_2 + 0x107);
              goto LAB_1801f1a28;
            }
          }
          else {
            iVar5 = FUN_180222cb8(uVar9,s_extraenumeratedresolutions_180237660);
            if (iVar5 == 0) {
              if (iVar4 != 0) {
                return 0;
              }
              uVar19 = 0;
              local_f0 = uVar16;
              local_e8 = uVar3;
              while( true ) {
                uVar6 = 1;
                uVar3 = (uint)uVar19;
                uVar16 = local_f0;
                if (local_e8 <= uVar3) break;
                uVar10 = (*local_f8)();
                uVar10 = (*extraout_x11_04)(uVar10,param_4,local_f0,uVar19);
                local_fc = 0;
                *(undefined4 *)(param_2 + 0x113 + uVar19 * 0xc) = 0;
                iVar4 = FUN_180223228(uVar10,s_max____d__c_180237698,&local_fc,&uStack_10c,
                                      &stack0xfffffffffffffee0,0);
                local_100 = FUN_180223228(uVar10,s_max_4_3____d__c_180237680,&local_fc,&uStack_10c,
                                          &stack0xfffffffffffffee0,0);
                iVar5 = FUN_180223228(uVar10,s_max_16_9____d__c_1802376b0,&local_fc,&uStack_10c,
                                      &stack0xfffffffffffffee0,0);
                uVar16 = local_fc;
                if (iVar4 == 1) {
                  *(undefined4 *)(param_2 + 0x10f + uVar19 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
LAB_1801f186c:
                  *(uint *)(param_2 + 0x113 + uVar19 * 0xc) = uVar16;
                }
                else {
                  if (local_100 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
                    uVar14 = 0x100;
LAB_1801f1714:
                    *(undefined4 *)(param_2 + 0x10f + uVar19 * 0xc) = uVar14;
                    goto LAB_1801f186c;
                  }
                  if (iVar5 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
                    uVar14 = 0x101;
                    goto LAB_1801f1714;
                  }
                  iVar4 = FUN_180223228(uVar10,s__s__c_1802376a8,auStack_c0,&uStack_10c,
                                        &stack0xfffffffffffffee0,0);
                  if ((iVar4 == 1) && (iVar4 = FUN_180222cb8(auStack_c0,&DAT_1802376d0), iVar4 == 0)
                     ) {
                    *(undefined4 *)(param_2 + 0x10f + uVar19 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
                  }
                  else {
                    iVar4 = FUN_180223228(uVar10,s__s__c_1802376a8,auStack_c0,&uStack_10c,
                                          &stack0xfffffffffffffee0,0);
                    if ((iVar4 == 1) &&
                       (iVar4 = FUN_180222cb8(auStack_c0,s_max_4_3_1802376c8), iVar4 == 0)) {
                      *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
                      uVar14 = 0x100;
                    }
                    else {
                      iVar4 = FUN_180223228(uVar10,s__s__c_1802376a8,auStack_c0,&uStack_10c,
                                            &stack0xfffffffffffffee0,0);
                      if ((iVar4 != 1) ||
                         (iVar4 = FUN_180222cb8(auStack_c0,s_max_16_9_1802376d8), iVar4 != 0)) {
                        local_100 = 0;
                        uVar11 = FUN_1801ef9d8(uVar10,&local_e4,local_e0,&local_100,&local_d8);
                        if ((uVar11 & 1) == 0) {
                          return 0;
                        }
                        if (uVar3 < 0x10) {
                          *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = local_e4;
                          *(undefined4 *)(param_2 + 0x10f + uVar19 * 0xc) = local_e0[0];
                          uVar16 = local_100;
                          goto LAB_1801f186c;
                        }
                        goto LAB_1801f1870;
                      }
                      *(undefined4 *)(param_2 + 0x10b + uVar19 * 0xc) = 0xffffffff;
                      uVar14 = 0x101;
                    }
                    *(undefined4 *)(param_2 + 0x10f + uVar19 * 0xc) = uVar14;
                  }
                }
LAB_1801f1870:
                uVar19 = (ulonglong)(uVar3 + 1);
              }
            }
            else {
              iVar5 = FUN_180222cb8(uVar9,s_ditheringeffect_180237308);
              if (iVar5 == 0) {
                if (iVar4 != 0) {
                  return 0;
                }
                uVar6 = 1;
                if (uVar3 != 1) goto LAB_1801f1ce4;
                uVar10 = (*local_f8)();
                uVar10 = (*extraout_x11_05)(uVar10,param_4,uVar16,0);
                iVar4 = FUN_180222cb8(uVar10,s_pure32bit_180237318);
                if ((iVar4 != 0) &&
                   ((local_ec < 0x281 ||
                    (iVar4 = FUN_180222cb8(uVar10,s_high_quality_1802376f8), iVar4 != 0)))) {
                  iVar4 = FUN_180222cb8(uVar10,s_ordered2x2_1802376e8);
                  if (iVar4 == 0) {
                    puVar15 = (undefined4 *)(param_2 + 0x1cb);
LAB_1801f1e70:
                    uVar14 = 1;
                  }
                  else {
                    iVar4 = FUN_180222cb8(uVar10,s_ordered4x4_180237708);
                    if (iVar4 != 0) {
                      return 0;
                    }
                    puVar15 = (undefined4 *)(param_2 + 0x1cb);
LAB_1801f1e90:
                    uVar14 = 2;
                  }
LAB_1801f1e94:
                  *puVar15 = uVar14;
                  goto LAB_1801f1e98;
                }
                *(undefined4 *)(param_2 + 0x1cb) = 0;
              }
              else {
                iVar5 = FUN_180222cb8(uVar9,s_dithering_180237348);
                if (iVar5 == 0) {
                  if (iVar4 != 0) {
                    return 0;
                  }
                  if (uVar3 != 1) goto LAB_1801f1ce4;
                  uVar10 = (*local_f8)();
                  uVar10 = (*extraout_x11_06)(uVar10,param_4,uVar16,0);
                  iVar4 = FUN_180222cb8(uVar10,s_disabled_180237368);
                  if (iVar4 == 0) {
                    puVar15 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1801f1e50;
                  }
                  iVar4 = FUN_180222cb8(uVar10,s_appdriven_180236ec0);
                  if (iVar4 == 0) {
                    puVar15 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1801f1e70;
                  }
                  iVar4 = FUN_180222cb8(uVar10,s_forceon16bit_180237718);
                  if (iVar4 == 0) {
                    puVar15 = (undefined4 *)(param_2 + 0x1cf);
                    goto LAB_1801f1e90;
                  }
                  iVar4 = FUN_180222cb8(uVar10,s_forcealways_180237358);
                  if (iVar4 == 0) {
                    puVar15 = (undefined4 *)(param_2 + 0x1cf);
LAB_1801f1bb0:
                    uVar14 = 3;
                    goto LAB_1801f1e94;
                  }
                }
                else {
                  uVar10 = FUN_180222cb8(uVar9,s_ditherorderedmatrixsizescale_180237378);
                  if ((int)uVar10 == 0) {
                    if (iVar4 == 0) {
                      uVar6 = 1;
                      if (uVar3 != 0) {
                        puVar12 = (uint *)(param_2 + 0x1d3);
                        goto LAB_1801f1a28;
                      }
                      goto LAB_1801f2130;
                    }
                  }
                  else {
                    iVar5 = FUN_180222cb8(uVar9,s_depthbuffersbitdepth_180237728);
                    if (iVar5 == 0) {
                      if (iVar4 != 0) {
                        return 0;
                      }
                      if (uVar3 == 1) {
                        uVar10 = (*local_f8)();
                        uVar10 = (*extraout_x11_07)(uVar10,param_4,uVar16,0);
                        iVar4 = FUN_180222cb8(uVar10,s_appdriven_180236ec0);
                        if (iVar4 == 0) {
                          puVar15 = (undefined4 *)(param_2 + 0x1d7);
LAB_1801f1e50:
                          *puVar15 = 0;
                          goto LAB_1801f1e98;
                        }
                        iVar4 = FUN_180222cb8(uVar10,s_forcemin24bit_180237740);
                        if (iVar4 == 0) {
                          puVar15 = (undefined4 *)(param_2 + 0x1d7);
                          goto LAB_1801f1e70;
                        }
                        iVar4 = FUN_180222cb8(uVar10,s_force32bit_180237768);
                        if (iVar4 == 0) {
                          puVar15 = (undefined4 *)(param_2 + 0x1d7);
                          goto LAB_1801f1e90;
                        }
                        goto LAB_1801f2014;
                      }
                    }
                    else {
                      iVar5 = FUN_180222cb8(uVar9,s_default3drenderformat_180237750);
                      uVar17 = local_ec;
                      if (local_ec < 0x274 || iVar5 != 0) {
                        uVar10 = FUN_180222cb8(uVar9,s_shadercodegenerating_1802377a0);
                        if (uVar17 == 0x260 && (int)uVar10 == 0) {
                          if (iVar4 != 0) {
                            return 0;
                          }
                          if (uVar3 == 1) {
                            local_100 = 0;
                            uVar3 = 1;
                            puVar12 = &local_100;
                            goto LAB_1801f1a28;
                          }
                        }
                        else {
                          uVar10 = FUN_180222cb8(uVar9,s_maxvsconstregisters_1802377c8);
                          piVar1 = local_d0;
                          if (uVar17 < 0x261 || (int)uVar10 != 0) {
                            uVar10 = FUN_180222cb8(uVar9,s_npatchtesselationlevel_1802377e0);
                            puVar12 = local_c8;
                            if (uVar17 < 0x276 || (int)uVar10 != 0) {
                              uVar10 = FUN_180222cb8(uVar9,s_displayoutputenablemask_1802377f8);
                              if (uVar17 < 0x279 || (int)uVar10 != 0) {
                                uVar10 = FUN_180222cb8(uVar9,s_smootheddepthsampling_180237810);
                                if ((int)uVar10 == 0) {
                                  if (iVar4 == 0) {
                                    uVar6 = 1;
                                    if (uVar3 != 0) {
                                      pcVar13 = (char *)(param_2 + 0x1f5);
                                      goto LAB_1801f20e0;
                                    }
                                    goto LAB_1801f2130;
                                  }
                                }
                                else {
                                  uVar10 = FUN_180222cb8(uVar9,s_msd3ddevicenames_180237828);
                                  if ((int)uVar10 == 0) {
                                    if (iVar4 == 0) {
                                      uVar6 = 1;
                                      if (uVar3 != 0) {
                                        pcVar13 = (char *)(param_2 + 499);
                                        goto LAB_1801f20e0;
                                      }
                                      goto LAB_1801f2130;
                                    }
                                  }
                                  else {
                                    uVar10 = FUN_180222cb8(uVar9,
                                                  s_rttexturesforcescaleandmsaa_180237840);
                                    if ((int)uVar10 == 0) {
                                      if (iVar4 == 0) {
                                        uVar6 = 1;
                                        if (uVar3 != 0) {
                                          pcVar13 = (char *)(param_2 + 500);
                                          goto LAB_1801f20e0;
                                        }
                                        goto LAB_1801f2130;
                                      }
                                    }
                                    else {
                                      uVar10 = FUN_180222cb8(uVar9,
                                                  s_deferredscreenmodeswitch_180237860);
                                      if ((int)uVar10 == 0) {
                                        if (iVar4 == 0) {
                                          uVar6 = 1;
                                          if (uVar3 != 0) {
                                            pcVar13 = (char *)(param_2 + 0x1f6);
                                            goto LAB_1801f20e0;
                                          }
                                          goto LAB_1801f2130;
                                        }
                                      }
                                      else {
                                        uVar10 = FUN_180222cb8(uVar9,
                                                  s_disabledefaultresolutions_180237880);
                                        if ((int)uVar10 == 0) {
                                          if (iVar4 == 0) {
                                            uVar6 = 1;
                                            if (uVar3 != 0) {
                                              local_10a[0] = '\0';
                                              uVar6 = FUN_1801ef878(uVar10,local_108,param_4,uVar16,
                                                                    local_10a,uVar3);
                                              uVar6 = uVar6 & 0xff;
                                              uVar14 = 0;
                                              if (local_10a[0] == '\0') {
                                                uVar14 = 2;
                                              }
                                              *(undefined4 *)(param_2 + 0x1df) = uVar14;
                                            }
                                            goto LAB_1801f2130;
                                          }
                                        }
                                        else {
                                          iVar5 = FUN_180222cb8(uVar9,
                                                  s_defaultenumeratedresolutions_1802378a0);
                                          if (iVar5 != 0) {
                                            iVar5 = FUN_180222cb8(uVar9,
                                                  s_enumeratedresolutionbitdepths_1802378e0);
                                            if (iVar5 == 0) {
                                              if (uVar6 != 0 && uVar3 != 0) {
                                                puVar12 = (uint *)(param_2 + 0x1e3);
                                                *puVar12 = 0;
                                                uVar18 = 0;
                                                uVar17 = 0;
                                                local_100 = uVar6;
                                                local_f0 = uVar16;
                                                local_e8 = uVar3;
                                                local_d8 = param_2;
                                                do {
                                                  uVar10 = (*local_f8)();
                                                  uVar10 = (*extraout_x11_10)(uVar10,param_4,
                                                                              local_f0,uVar17);
                                                  iVar4 = FUN_180223228(uVar10,s_8__c_1802378d4,
                                                                        &uStack_10b);
                                                  iVar5 = FUN_180223228(uVar10,s_16__c_180237908,
                                                                        &uStack_10b);
                                                  iVar7 = FUN_180223228(uVar10,s_32__c_180237900,
                                                                        &uStack_10b);
                                                  iVar8 = FUN_180223228(uVar10,s_all__c_180237930,
                                                                        &uStack_10b);
                                                  if (iVar4 == -1) {
                                                    uVar16 = *puVar12 | 1;
LAB_1801f1fc0:
                                                    *puVar12 = uVar16;
                                                    uVar18 = uVar18 | 1;
                                                  }
                                                  else {
                                                    if (iVar5 == -1) {
                                                      uVar16 = *puVar12 | 2;
                                                      goto LAB_1801f1fc0;
                                                    }
                                                    if (iVar7 == -1) {
                                                      uVar16 = *puVar12 | 4;
                                                      goto LAB_1801f1fc0;
                                                    }
                                                    if (iVar8 == -1) {
                                                      *puVar12 = *puVar12 | 7;
                                                      uVar18 = uVar18 | 2;
                                                    }
                                                    else {
                                                      local_100 = 0;
                                                    }
                                                  }
                                                  uVar17 = uVar17 + 1;
                                                } while (uVar17 < local_e8);
                                                bVar2 = uVar18 == 3;
                                                param_2 = local_d8;
                                                uVar16 = local_f0;
                                                uVar6 = local_100;
                                                goto LAB_1801f2010;
                                              }
                                            }
                                            else {
                                              uVar10 = FUN_180222cb8(uVar9,
                                                  s_primarysurfacebatchedupdate_180237910);
                                              if (uVar17 < 0x262 || (int)uVar10 != 0) {
                                                uVar10 = FUN_180222cb8(uVar9,
                                                  s_enablespecializedshaders_180237938);
                                                if (((int)uVar10 == 0) && (uVar17 - 0x276 < 3)) {
                                                  if (iVar4 != 0) goto LAB_1801f2014;
                                                  uVar6 = 1;
                                                  if (uVar3 != 0) {
                                                    pcVar13 = local_10a;
                                                    goto LAB_1801f20e0;
                                                  }
                                                }
                                                else {
                                                  uVar10 = FUN_180222cb8(uVar9,
                                                  s_d3d12boundschecking_180237958);
                                                  uVar6 = local_ec;
                                                  if (local_ec < 0x283 || (int)uVar10 != 0) {
                                                    uVar10 = FUN_180222cb8(uVar9,
                                                  s_suppressamdblacklist_180237970);
                                                  if (uVar6 < 0x281 || (int)uVar10 != 0) {
                                                    uVar10 = FUN_180222cb8(uVar9,
                                                  s_alternativescaling_180237988);
                                                  if (uVar6 < 0x285 || (int)uVar10 != 0) {
                                                    return 0;
                                                  }
                                                  if (iVar4 != 0) goto LAB_1801f2014;
                                                  uVar6 = 1;
                                                  if (uVar3 != 0) {
                                                    pcVar13 = (char *)(param_2 + 0x1fa);
                                                    goto LAB_1801f20e0;
                                                  }
                                                  }
                                                  else {
                                                    if (iVar4 != 0) goto LAB_1801f2014;
                                                    uVar6 = 1;
                                                    if (uVar3 != 0) {
                                                      pcVar13 = (char *)(param_2 + 0x1f8);
LAB_1801f20e0:
                                                      uVar6 = FUN_1801ef878(uVar10,local_108,param_4
                                                                            ,uVar16,pcVar13,uVar3);
                                                      goto LAB_1801f20f4;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if (iVar4 != 0) goto LAB_1801f2014;
                                                    uVar6 = 1;
                                                    if (uVar3 != 0) {
                                                      pcVar13 = (char *)(param_2 + 0x1f9);
                                                      goto LAB_1801f20e0;
                                                    }
                                                  }
                                                }
                                              }
                                              else {
                                                if (iVar4 != 0) goto LAB_1801f2014;
                                                uVar6 = 1;
                                                if (uVar3 != 0) {
                                                  pcVar13 = (char *)(param_2 + 0x1f7);
                                                  goto LAB_1801f20e0;
                                                }
                                              }
                                            }
                                            goto LAB_1801f2130;
                                          }
                                          if (iVar4 != 0) {
                                            return 0;
                                          }
                                          if (uVar3 != 1) goto LAB_1801f1ce4;
                                          uVar10 = (*local_f8)();
                                          uVar10 = (*extraout_x11_09)(uVar10,param_4,uVar16,0);
                                          iVar4 = FUN_180222cb8(uVar10,&DAT_1802378cc);
                                          if (iVar4 == 0) {
                                            puVar15 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_1801f1e50;
                                          }
                                          iVar4 = FUN_180222cb8(uVar10,s_classics_1802378c0);
                                          if (iVar4 == 0) {
                                            puVar15 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_1801f1e70;
                                          }
                                          iVar4 = FUN_180222cb8(uVar10,&DAT_180236f78);
                                          if (iVar4 == 0) {
                                            puVar15 = (undefined4 *)(param_2 + 0x1df);
                                            goto LAB_1801f1e90;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_1801f2014;
                              }
                              if (iVar4 != 0) {
                                return 0;
                              }
                              if (uVar3 == 1) {
                                uVar3 = 1;
                                puVar12 = (uint *)(param_2 + 0x1ef);
                                goto LAB_1801f1a28;
                              }
                            }
                            else {
                              if (iVar4 != 0) {
                                return 0;
                              }
                              if (uVar3 == 1) {
                                uVar6 = FUN_1801ef980(uVar10,local_108,param_4,uVar16,local_c8,1);
                                uVar6 = uVar6 & 0xff;
                                if (8 < *puVar12) {
                                  uVar6 = 0;
                                }
                                goto LAB_1801f2130;
                              }
                            }
                          }
                          else {
                            if (iVar4 != 0) {
                              return 0;
                            }
                            if (uVar3 == 1) {
                              uVar6 = FUN_1801ef980(uVar10,local_108,param_4,uVar16,local_d0,1);
                              bVar2 = (*piVar1 - 0x100U & 0xfffffcff) != 0 || *piVar1 == 0x300;
                              uVar6 = uVar6 & 0xff;
LAB_1801f2010:
                              if (bVar2) goto LAB_1801f2014;
                              goto LAB_1801f2130;
                            }
                          }
                        }
                      }
                      else {
                        if (iVar4 != 0) {
                          return 0;
                        }
                        if (uVar3 == 1) {
                          uVar10 = (*local_f8)();
                          uVar10 = (*extraout_x11_08)(uVar10,param_4,uVar16,0);
                          iVar4 = FUN_180222cb8(uVar10,&DAT_180237774);
                          if (iVar4 == 0) {
                            puVar15 = (undefined4 *)(param_2 + 0x1db);
                            goto LAB_1801f1e50;
                          }
                          iVar4 = FUN_180222cb8(uVar10,s_argb8888_180237790);
                          if (iVar4 == 0) {
                            puVar15 = (undefined4 *)(param_2 + 0x1db);
                            goto LAB_1801f1e70;
                          }
                          iVar4 = FUN_180222cb8(uVar10,s_argb2101010_180237780);
                          if (iVar4 == 0) {
                            puVar15 = (undefined4 *)(param_2 + 0x1db);
                            goto LAB_1801f1e90;
                          }
                          iVar4 = FUN_180222cb8(uVar10,s_argb16161616_1802377b8);
                          if (0x280 < uVar17 && iVar4 == 0) {
                            puVar15 = (undefined4 *)(param_2 + 0x1db);
                            goto LAB_1801f1bb0;
                          }
                          goto LAB_1801f2014;
                        }
                      }
                    }
LAB_1801f1ce4:
                    uVar6 = 1;
                    if (uVar3 < 2) goto LAB_1801f2130;
                  }
                }
LAB_1801f2014:
                uVar6 = 0;
              }
            }
          }
        }
      }
    }
LAB_1801f2130:
    uVar16 = uVar16 + 1;
    if (uVar6 == 0) {
      return 0;
    }
  } while( true );
}

