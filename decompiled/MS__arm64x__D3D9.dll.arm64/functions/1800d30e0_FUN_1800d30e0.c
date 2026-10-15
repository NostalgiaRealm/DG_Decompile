/*
 * FUN_1800d30e0 at 1800d30e0
 * undefined FUN_1800d30e0(void)
 * Address ranges: 1800d30e0-1800d3e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d30e0(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint *puVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
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
  int *local_e8;
  uint *local_e0;
  undefined1 auStack_d8 [136];
  
  local_e8 = (int *)(param_2 + 0x1e7);
  local_e0 = (uint *)(param_2 + 0x1eb);
  cVar3 = '\x01';
  uVar18 = 0;
  local_114 = param_5;
  do {
    while( true ) {
      uVar4 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar4 <= uVar18) {
        return cVar3;
      }
      uVar9 = (**(code **)(*param_3 + 0x40))(param_3,param_4,uVar18);
      uVar4 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar18);
      iVar5 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar18);
      if ((local_114 < 0x260) ||
         (iVar6 = func_0x000180222cb8(uVar9,s_adapteridtype_18023a808), iVar6 != 0)) break;
      if (iVar5 != 0) {
        return '\0';
      }
      if (uVar4 == 0) {
        *(undefined4 *)(param_2 + 0xf7) = 0;
      }
      else {
        if (uVar4 != 1) goto LAB_1800d39c4;
        uVar9 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar18,0);
        iVar5 = func_0x000180222cb8(uVar9,s_nvidia_18023a81c);
        if (iVar5 == 0) {
          uVar15 = 1;
        }
        else {
          iVar5 = func_0x000180222cb8(uVar9,&DAT_18023a818);
          if (iVar5 == 0) {
            *(undefined4 *)(param_2 + 0xf7) = 2;
            goto LAB_1800d3b64;
          }
          iVar5 = func_0x000180222cb8(uVar9,s_intel_18023a834);
          if (iVar5 != 0) goto LAB_1800d3cac;
          uVar15 = 3;
        }
        *(undefined4 *)(param_2 + 0xf7) = uVar15;
      }
LAB_1800d3b64:
      cVar3 = '\x01';
      uVar18 = uVar18 + 1;
    }
    iVar6 = func_0x000180222cb8(uVar9,s_vendorid_18023a828);
    if (iVar6 == 0) {
      if (iVar5 != 0) {
        return '\0';
      }
      cVar3 = '\x01';
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          lVar12 = param_2 + 0xfb;
LAB_1800d3270:
          cVar3 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar18,0,lVar12);
          if (cVar3 != '\0') {
            cVar3 = '\x01';
            goto LAB_1800d3dd4;
          }
        }
LAB_1800d3cac:
        cVar3 = '\0';
      }
    }
    else {
      iVar6 = func_0x000180222cb8(uVar9,s_deviceid_18023a840);
      if (iVar6 == 0) {
        if (iVar5 != 0) {
          return '\0';
        }
        cVar3 = '\x01';
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            lVar12 = param_2 + 0xff;
            goto LAB_1800d3270;
          }
          goto LAB_1800d3cac;
        }
      }
      else {
        iVar6 = func_0x000180222cb8(uVar9,s_subsystemid_18023a850);
        if (iVar6 == 0) {
          if (iVar5 != 0) {
            return '\0';
          }
          cVar3 = '\x01';
          if (uVar4 != 0) {
            if (uVar4 == 1) {
              lVar12 = param_2 + 0x103;
              goto LAB_1800d3270;
            }
            goto LAB_1800d3cac;
          }
        }
        else {
          iVar6 = func_0x000180222cb8(uVar9,s_revisionid_18023a860);
          if (iVar6 == 0) {
            if (iVar5 != 0) {
              return '\0';
            }
            cVar3 = '\x01';
            if (uVar4 != 0) {
              if (uVar4 == 1) {
                lVar12 = param_2 + 0x107;
                goto LAB_1800d3270;
              }
              goto LAB_1800d3cac;
            }
          }
          else {
            iVar6 = func_0x000180222cb8(uVar9,s_extraenumeratedresolutions_18023a870);
            if (iVar6 == 0) {
              if (iVar5 != 0) {
                return '\0';
              }
              uVar21 = 0;
              local_118 = param_4;
              local_110 = uVar4;
              local_108 = uVar18;
              local_100 = param_3;
              while( true ) {
                cVar3 = '\x01';
                uVar4 = (uint)uVar21;
                param_3 = local_100;
                param_4 = local_118;
                uVar18 = local_108;
                if (local_110 <= uVar4) break;
                uVar9 = (**(code **)(*local_100 + 0x50))(local_100,local_118,local_108,uVar21);
                local_11c = 0;
                *(undefined4 *)(param_2 + 0x113 + uVar21 * 0xc) = 0;
                iVar5 = FUN_180103688(uVar9,s_max____d__c_18023a8a8,&local_11c,&uStack_120);
                iVar6 = FUN_180103688(uVar9,s_max_4_3____d__c_18023a890,&local_11c,&uStack_120);
                iVar7 = FUN_180103688(uVar9,s_max_16_9____d__c_18023a8c0,&local_11c,&uStack_120);
                uVar15 = local_11c;
                if (iVar5 == 1) {
                  *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
LAB_1800d3564:
                  *(undefined4 *)(param_2 + 0x113 + uVar21 * 0xc) = uVar15;
                }
                else {
                  if (iVar6 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0x100;
                    goto LAB_1800d3564;
                  }
                  if (iVar7 == 1) {
                    *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0x101;
                    goto LAB_1800d3564;
                  }
                  iVar5 = FUN_180103688(uVar9,s__s__c_18023a8b8,auStack_d8,&uStack_120);
                  if ((iVar5 == 1) &&
                     (iVar5 = func_0x000180222cb8(auStack_d8,&DAT_18023a8e0), iVar5 == 0)) {
                    *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
                  }
                  else {
                    iVar5 = FUN_180103688(uVar9,s__s__c_18023a8b8,auStack_d8,&uStack_120);
                    if ((iVar5 == 1) &&
                       (iVar5 = func_0x000180222cb8(auStack_d8,s_max_4_3_18023a8d8), iVar5 == 0)) {
                      *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
                      *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0x100;
                    }
                    else {
                      iVar5 = FUN_180103688(uVar9,s__s__c_18023a8b8,auStack_d8,&uStack_120);
                      if ((iVar5 == 1) &&
                         (iVar5 = func_0x000180222cb8(auStack_d8,s_max_16_9_18023a8e8), iVar5 == 0))
                      {
                        *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = 0xffffffff;
                        *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = 0x101;
                      }
                      else {
                        local_10c = 0;
                        uVar10 = FUN_1800d1950(uVar9,&local_f8,&local_f4,&local_10c,&local_f0);
                        if ((uVar10 & 1) == 0) {
                          return '\0';
                        }
                        if (uVar4 < 0x10) {
                          *(undefined4 *)(param_2 + 0x10b + uVar21 * 0xc) = local_f8;
                          *(undefined4 *)(param_2 + 0x10f + uVar21 * 0xc) = local_f4;
                          uVar15 = local_10c;
                          goto LAB_1800d3564;
                        }
                      }
                    }
                  }
                }
                uVar21 = (ulonglong)(uVar4 + 1);
              }
            }
            else {
              iVar6 = func_0x000180222cb8(uVar9,s_ditheringeffect_18023a518);
              if (iVar6 == 0) {
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar3 = '\x01';
                if (uVar4 == 1) {
                  uVar9 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar18,0);
                  iVar5 = func_0x000180222cb8(uVar9,s_pure32bit_18023a528);
                  if ((iVar5 != 0) &&
                     ((local_114 < 0x281 ||
                      (iVar5 = func_0x000180222cb8(uVar9,s_high_quality_18023a908), iVar5 != 0)))) {
                    iVar5 = func_0x000180222cb8(uVar9,s_ordered2x2_18023a8f8);
                    if (iVar5 != 0) {
                      iVar5 = func_0x000180222cb8(uVar9,s_ordered4x4_18023a918);
                      if (iVar5 != 0) {
                        return '\0';
                      }
                      puVar17 = (undefined4 *)(param_2 + 0x1cb);
LAB_1800d3b60:
                      *puVar17 = 2;
                      goto LAB_1800d3b64;
                    }
                    puVar17 = (undefined4 *)(param_2 + 0x1cb);
LAB_1800d3b3c:
                    uVar15 = 1;
LAB_1800d3b40:
                    *puVar17 = uVar15;
                    goto LAB_1800d3b64;
                  }
                  *(undefined4 *)(param_2 + 0x1cb) = 0;
                  goto LAB_1800d3dd4;
                }
              }
              else {
                iVar6 = func_0x000180222cb8(uVar9,s_dithering_18023a558);
                if (iVar6 == 0) {
                  if (iVar5 != 0) {
                    return '\0';
                  }
                  if (uVar4 == 1) {
                    uVar9 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar18,0);
                    iVar5 = func_0x000180222cb8(uVar9,s_disabled_18023a578);
                    if (iVar5 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_1800d3b1c;
                    }
                    iVar5 = func_0x000180222cb8(uVar9,s_appdriven_18023a0d0);
                    if (iVar5 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_1800d3b3c;
                    }
                    iVar5 = func_0x000180222cb8(uVar9,s_forceon16bit_18023a928);
                    if (iVar5 == 0) {
                      puVar17 = (undefined4 *)(param_2 + 0x1cf);
                      goto LAB_1800d3b60;
                    }
                    iVar5 = func_0x000180222cb8(uVar9,s_forcealways_18023a568);
                    if (iVar5 != 0) goto LAB_1800d3cac;
                    puVar17 = (undefined4 *)(param_2 + 0x1cf);
LAB_1800d385c:
                    uVar15 = 3;
                    goto LAB_1800d3b40;
                  }
                }
                else {
                  iVar6 = func_0x000180222cb8(uVar9,s_ditherorderedmatrixsizescale_18023a588);
                  if (iVar6 == 0) {
                    if (iVar5 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 == 0) goto LAB_1800d3dd4;
                    if (uVar4 == 1) {
                      lVar12 = param_2 + 0x1d3;
                      goto LAB_1800d3270;
                    }
                    goto LAB_1800d3cac;
                  }
                  iVar6 = func_0x000180222cb8(uVar9,s_depthbuffersbitdepth_18023a938);
                  if (iVar6 == 0) {
                    if (iVar5 != 0) {
                      return '\0';
                    }
                    if (uVar4 == 1) {
                      uVar9 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar18,0);
                      iVar5 = func_0x000180222cb8(uVar9,s_appdriven_18023a0d0);
                      if (iVar5 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
LAB_1800d3b1c:
                        *puVar17 = 0;
                        goto LAB_1800d3b64;
                      }
                      iVar5 = func_0x000180222cb8(uVar9,s_forcemin24bit_18023a950);
                      if (iVar5 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_1800d3b3c;
                      }
                      iVar5 = func_0x000180222cb8(uVar9,s_force32bit_18023a978);
                      if (iVar5 == 0) {
                        puVar17 = (undefined4 *)(param_2 + 0x1d7);
                        goto LAB_1800d3b60;
                      }
                      goto LAB_1800d3cac;
                    }
                  }
                  else {
                    iVar6 = func_0x000180222cb8(uVar9,s_default3drenderformat_18023a960);
                    uVar19 = local_114;
                    if (local_114 < 0x274 || iVar6 != 0) {
                      iVar6 = func_0x000180222cb8(uVar9,s_shadercodegenerating_18023a9b0);
                      if (uVar19 == 0x260 && iVar6 == 0) {
                        if (iVar5 != 0) {
                          return '\0';
                        }
                        if (uVar4 == 1) {
                          local_110 = 0;
                          puVar13 = &local_110;
LAB_1800d3894:
                          cVar3 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar18,0,puVar13);
                          cVar3 = cVar3 != '\0';
                          goto LAB_1800d3dd4;
                        }
                      }
                      else {
                        iVar6 = func_0x000180222cb8(uVar9,s_maxvsconstregisters_18023a9d8);
                        piVar1 = local_e8;
                        if (uVar19 < 0x261 || iVar6 != 0) {
                          iVar6 = func_0x000180222cb8(uVar9,s_npatchtesselationlevel_18023a9f0);
                          puVar13 = local_e0;
                          if (uVar19 < 0x276 || iVar6 != 0) {
                            iVar6 = func_0x000180222cb8(uVar9,s_displayoutputenablemask_18023aa08);
                            if (uVar19 < 0x279 || iVar6 != 0) {
                              uVar11 = func_0x000180222cb8(uVar9,s_smootheddepthsampling_18023aa20);
                              if ((int)uVar11 == 0) {
                                if (iVar5 == 0) {
                                  cVar3 = '\x01';
                                  if (uVar4 != 0) {
                                    pcVar14 = (char *)(param_2 + 0x1f5);
                                    goto LAB_1800d3d78;
                                  }
                                  goto LAB_1800d3dd4;
                                }
                              }
                              else {
                                uVar11 = func_0x000180222cb8(uVar9,s_msd3ddevicenames_18023aa38);
                                if ((int)uVar11 == 0) {
                                  if (iVar5 == 0) {
                                    cVar3 = '\x01';
                                    if (uVar4 != 0) {
                                      pcVar14 = (char *)(param_2 + 499);
                                      goto LAB_1800d3d78;
                                    }
                                    goto LAB_1800d3dd4;
                                  }
                                }
                                else {
                                  uVar11 = func_0x000180222cb8(uVar9,
                                                  s_rttexturesforcescaleandmsaa_18023aa50);
                                  if ((int)uVar11 == 0) {
                                    if (iVar5 == 0) {
                                      cVar3 = '\x01';
                                      if (uVar4 != 0) {
                                        pcVar14 = (char *)(param_2 + 500);
                                        goto LAB_1800d3d78;
                                      }
                                      goto LAB_1800d3dd4;
                                    }
                                  }
                                  else {
                                    uVar11 = func_0x000180222cb8(uVar9,
                                                  s_deferredscreenmodeswitch_18023aa70);
                                    if ((int)uVar11 == 0) {
                                      if (iVar5 == 0) {
                                        cVar3 = '\x01';
                                        if (uVar4 != 0) {
                                          pcVar14 = (char *)(param_2 + 0x1f6);
                                          goto LAB_1800d3d78;
                                        }
                                        goto LAB_1800d3dd4;
                                      }
                                    }
                                    else {
                                      uVar11 = func_0x000180222cb8(uVar9,
                                                  s_disabledefaultresolutions_18023aa90);
                                      if ((int)uVar11 == 0) {
                                        if (iVar5 == 0) {
                                          cVar3 = '\x01';
                                          if (uVar4 != 0) {
                                            local_11e[0] = '\0';
                                            cVar3 = FUN_1800d1868(uVar11,param_3,param_4,uVar18,
                                                                  local_11e,uVar4);
                                            uVar15 = 0;
                                            if (local_11e[0] == '\0') {
                                              uVar15 = 2;
                                            }
                                            *(undefined4 *)(param_2 + 0x1df) = uVar15;
                                          }
                                          goto LAB_1800d3dd4;
                                        }
                                      }
                                      else {
                                        iVar6 = func_0x000180222cb8(uVar9,
                                                  s_defaultenumeratedresolutions_18023aab0);
                                        if (iVar6 != 0) {
                                          iVar6 = func_0x000180222cb8(uVar9,
                                                  s_enumeratedresolutionbitdepths_18023aaf0);
                                          if (iVar6 == 0) {
                                            if (cVar3 != '\0' && uVar4 != 0) {
                                              puVar13 = (uint *)(param_2 + 0x1e3);
                                              *puVar13 = 0;
                                              uVar20 = 0;
                                              uVar19 = 0;
                                              local_118 = param_4;
                                              local_100 = param_3;
                                              local_f0 = param_2;
                                              do {
                                                uVar9 = (**(code **)(*local_100 + 0x50))
                                                                  (local_100,local_118,uVar18,uVar19
                                                                  );
                                                iVar5 = FUN_180103688(uVar9,s_8__c_18023aae4,
                                                                      &uStack_11f);
                                                iVar6 = FUN_180103688(uVar9,s_16__c_18023ab18,
                                                                      &uStack_11f);
                                                iVar7 = FUN_180103688(uVar9,s_32__c_18023ab10,
                                                                      &uStack_11f);
                                                iVar8 = FUN_180103688(uVar9,s_all__c_18023ab40,
                                                                      &uStack_11f);
                                                if (iVar5 == -1) {
                                                  uVar16 = *puVar13 | 1;
LAB_1800d3c58:
                                                  *puVar13 = uVar16;
                                                  uVar20 = uVar20 | 1;
                                                }
                                                else {
                                                  if (iVar6 == -1) {
                                                    uVar16 = *puVar13 | 2;
                                                    goto LAB_1800d3c58;
                                                  }
                                                  if (iVar7 == -1) {
                                                    uVar16 = *puVar13 | 4;
                                                    goto LAB_1800d3c58;
                                                  }
                                                  if (iVar8 == -1) {
                                                    *puVar13 = *puVar13 | 7;
                                                    uVar20 = uVar20 | 2;
                                                  }
                                                  else {
                                                    cVar3 = '\0';
                                                  }
                                                }
                                                uVar19 = uVar19 + 1;
                                              } while (uVar19 < uVar4);
                                              bVar2 = uVar20 == 3;
                                              param_2 = local_f0;
                                              param_3 = local_100;
                                              param_4 = local_118;
                                              goto LAB_1800d3ca8;
                                            }
                                          }
                                          else {
                                            uVar11 = func_0x000180222cb8(uVar9,
                                                  s_primarysurfacebatchedupdate_18023ab20);
                                            if (uVar19 < 0x262 || (int)uVar11 != 0) {
                                              uVar11 = func_0x000180222cb8(uVar9,
                                                  s_enablespecializedshaders_18023ab48);
                                              if (((int)uVar11 == 0) && (uVar19 - 0x276 < 3)) {
                                                if (iVar5 != 0) goto LAB_1800d3cac;
                                                cVar3 = '\x01';
                                                if (uVar4 != 0) {
                                                  pcVar14 = local_11e;
                                                  goto LAB_1800d3d78;
                                                }
                                              }
                                              else {
                                                uVar11 = func_0x000180222cb8(uVar9,
                                                  s_d3d12boundschecking_18023ab68);
                                                uVar19 = local_114;
                                                if (local_114 < 0x283 || (int)uVar11 != 0) {
                                                  uVar11 = func_0x000180222cb8(uVar9,
                                                  s_suppressamdblacklist_18023ab80);
                                                  if (uVar19 < 0x281 || (int)uVar11 != 0) {
                                                    uVar11 = func_0x000180222cb8(uVar9,
                                                  s_alternativescaling_18023ab98);
                                                  if (uVar19 < 0x285 || (int)uVar11 != 0) {
                                                    return '\0';
                                                  }
                                                  if (iVar5 != 0) goto LAB_1800d3cac;
                                                  cVar3 = '\x01';
                                                  if (uVar4 != 0) {
                                                    pcVar14 = (char *)(param_2 + 0x1fa);
                                                    goto LAB_1800d3d78;
                                                  }
                                                  }
                                                  else {
                                                    if (iVar5 != 0) goto LAB_1800d3cac;
                                                    cVar3 = '\x01';
                                                    if (uVar4 != 0) {
                                                      pcVar14 = (char *)(param_2 + 0x1f8);
LAB_1800d3d78:
                                                      cVar3 = FUN_1800d1868(uVar11,param_3,param_4,
                                                                            uVar18,pcVar14,uVar4);
                                                    }
                                                  }
                                                }
                                                else {
                                                  if (iVar5 != 0) goto LAB_1800d3cac;
                                                  cVar3 = '\x01';
                                                  if (uVar4 != 0) {
                                                    pcVar14 = (char *)(param_2 + 0x1f9);
                                                    goto LAB_1800d3d78;
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              if (iVar5 != 0) goto LAB_1800d3cac;
                                              cVar3 = '\x01';
                                              if (uVar4 != 0) {
                                                pcVar14 = (char *)(param_2 + 0x1f7);
                                                goto LAB_1800d3d78;
                                              }
                                            }
                                          }
                                          goto LAB_1800d3dd4;
                                        }
                                        if (iVar5 != 0) {
                                          return '\0';
                                        }
                                        if (uVar4 != 1) goto LAB_1800d39c4;
                                        uVar9 = (**(code **)(*param_3 + 0x50))
                                                          (param_3,param_4,uVar18,0);
                                        iVar5 = func_0x000180222cb8(uVar9,&DAT_18023aadc);
                                        if (iVar5 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_1800d3b1c;
                                        }
                                        iVar5 = func_0x000180222cb8(uVar9,s_classics_18023aad0);
                                        if (iVar5 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_1800d3b3c;
                                        }
                                        iVar5 = func_0x000180222cb8(uVar9,&DAT_18023a188);
                                        if (iVar5 == 0) {
                                          puVar17 = (undefined4 *)(param_2 + 0x1df);
                                          goto LAB_1800d3b60;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_1800d3cac;
                            }
                            if (iVar5 != 0) {
                              return '\0';
                            }
                            if (uVar4 == 1) {
                              puVar13 = (uint *)(param_2 + 0x1ef);
                              goto LAB_1800d3894;
                            }
                          }
                          else {
                            if (iVar5 != 0) {
                              return '\0';
                            }
                            if (uVar4 == 1) {
                              cVar3 = (**(code **)(*param_3 + 0x58))
                                                (param_3,param_4,uVar18,0,local_e0);
                              cVar3 = cVar3 != '\0';
                              if (8 < *puVar13) {
                                cVar3 = '\0';
                              }
                              goto LAB_1800d3dd4;
                            }
                          }
                        }
                        else {
                          if (iVar5 != 0) {
                            return '\0';
                          }
                          if (uVar4 == 1) {
                            cVar3 = (**(code **)(*param_3 + 0x58))
                                              (param_3,param_4,uVar18,0,local_e8);
                            cVar3 = cVar3 != '\0';
                            bVar2 = (*piVar1 - 0x100U & 0xfffffcff) != 0 || *piVar1 == 0x300;
LAB_1800d3ca8:
                            if (bVar2) goto LAB_1800d3cac;
                            goto LAB_1800d3dd4;
                          }
                        }
                      }
                    }
                    else {
                      if (iVar5 != 0) {
                        return '\0';
                      }
                      if (uVar4 == 1) {
                        uVar9 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar18,0);
                        iVar5 = func_0x000180222cb8(uVar9,&DAT_18023a984);
                        if (iVar5 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_1800d3b1c;
                        }
                        iVar5 = func_0x000180222cb8(uVar9,s_argb8888_18023a9a0);
                        if (iVar5 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_1800d3b3c;
                        }
                        iVar5 = func_0x000180222cb8(uVar9,s_argb2101010_18023a990);
                        if (iVar5 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_1800d3b60;
                        }
                        iVar5 = func_0x000180222cb8(uVar9,s_argb16161616_18023a9c8);
                        if (0x280 < uVar19 && iVar5 == 0) {
                          puVar17 = (undefined4 *)(param_2 + 0x1db);
                          goto LAB_1800d385c;
                        }
                        goto LAB_1800d3cac;
                      }
                    }
                  }
                }
              }
LAB_1800d39c4:
              cVar3 = '\x01';
              if (1 < uVar4) goto LAB_1800d3cac;
            }
          }
        }
      }
    }
LAB_1800d3dd4:
    uVar18 = uVar18 + 1;
    if (cVar3 == '\0') {
      return '\0';
    }
  } while( true );
}

