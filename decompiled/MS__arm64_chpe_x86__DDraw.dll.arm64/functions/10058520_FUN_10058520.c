/*
 * FUN_10058520 at 10058520
 * undefined FUN_10058520(void)
 * Address ranges: 10058520-1005933f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_10058520(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  uint *puVar1;
  code *******pppppppcVar2;
  code *******pppppppcVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
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
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  char cVar15;
  uint uVar16;
  uint uVar17;
  code *pcVar18;
  undefined4 local_1c0;
  char *pcStack_1bc;
  code *******local_1b8;
  code *******local_1b4;
  undefined1 *local_1b0;
  int local_190;
  char local_18c [4];
  undefined4 local_188;
  undefined4 local_184;
  code *******local_180;
  uint local_17c;
  undefined4 uStack_178;
  code *******local_174;
  code *local_170;
  code *******local_16c;
  code *******local_168;
  code *******local_164;
  code *******local_160;
  code *******local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  code ******appppppcStack_148 [66];
  
  cVar6 = '\x01';
  uVar17 = 0;
  local_180 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_190 = param_2;
  local_188 = param_4;
  local_184 = param_3;
  local_17c = param_5;
LAB_10058560:
  do {
    pppppppcVar2 = local_180;
    uVar4 = local_184;
    (*(code *)local_180)();
    uVar11 = local_188;
    uVar7 = (*extraout_w11)(uVar4,local_188);
    if (uVar7 <= uVar17) {
      return cVar6;
    }
    (*(code *)pppppppcVar2)();
    uVar8 = (*extraout_w11_00)(uVar4,uVar11,uVar17);
    (*(code *)pppppppcVar2)();
    pcVar9 = (code *)(*extraout_w11_01)(uVar4,uVar11,uVar17);
    (*(code *)pppppppcVar2)();
    uVar7 = (*extraout_w11_02)(uVar4,uVar11,uVar17);
    if (local_17c < 0x263) {
      uVar12 = FUN_10091880(uVar8,s_forcenearestpointfilter_100b4a00);
      if ((int)uVar12 == 0) {
        if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_10059308;
        local_18c[0] = '\0';
        cVar6 = FUN_10055830(uVar12,uVar4,uVar11,uVar17,local_18c,pcVar9);
        uVar7 = (uint)(local_18c[0] == '\0');
        puVar1 = (uint *)(local_190 + 0xca);
LAB_10059300:
        *puVar1 = uVar7;
      }
      else {
LAB_100589ec:
        uVar12 = FUN_10091880(uVar8,s_deframersize_100b4b18);
        if ((int)uVar12 == 0) {
          if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_10059308;
          iVar10 = local_190 + 0x9e;
LAB_100589d8:
          cVar6 = FUN_10055948(uVar12,local_184,local_188,uVar17,iVar10,pcVar9);
        }
        else {
          uVar12 = FUN_10091880(uVar8,s_imagescalefactor_100b4b28);
          pppppppcVar2 = local_180;
          uVar4 = local_184;
          uVar11 = local_188;
          iVar10 = local_190;
          if ((int)uVar12 == 0) {
            if (pcVar9 == (code *)0x0) {
              uVar16 = 0;
              if (uVar7 != 0) {
                local_164 = (code *******)(local_190 + 0xa2);
                local_174 = (code *******)(local_190 + 0xa6);
                local_15c = local_180;
                local_160 = (code *******)FUN_100a90f8;
                local_16c = local_180;
                local_168 = (code *******)FUN_100a90f8;
                do {
                  (*(code *)pppppppcVar2)();
                  uVar8 = (*extraout_w11_06)(uVar4,uVar11,uVar17,uVar16);
                  iVar10 = FUN_10091880(uVar8,&DAT_100b4b3c);
                  if (iVar10 == 0) {
                    (*(code *)local_16c)();
                    pppppppcVar3 = local_164;
                    pcVar9 = extraout_w11_07;
LAB_10058b30:
                    cVar6 = (*pcVar9)(uVar4,uVar11,uVar17,uVar16,pppppppcVar3);
                  }
                  else {
                    iVar10 = FUN_10091880(uVar8,&DAT_100b4b40);
                    if (iVar10 == 0) {
                      (*(code *)local_15c)();
                      pppppppcVar3 = local_174;
                      pcVar9 = extraout_w11_08;
                      goto LAB_10058b30;
                    }
                    cVar6 = '\0';
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar7);
              }
            }
            else if (uVar7 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xa2);
              cVar6 = FUN_10055948(uVar12,local_184,local_188,uVar17,puVar14,pcVar9);
              *(undefined4 *)(iVar10 + 0xa6) = *puVar14;
            }
          }
          else if (local_17c < 0x274) {
            if (local_17c < 0x262) {
LAB_10058de0:
              iVar10 = FUN_10091880(uVar8,s_desktopresolution_100b4b90);
              if (iVar10 != 0) {
                if ((local_17c < 0x260) ||
                   (uVar12 = FUN_10091880(uVar8,s_desktopbitdepth_100b4ba8), (int)uVar12 != 0)) {
                  uVar12 = FUN_10091880(uVar8,s_freemouse_100b4bb8);
                  if ((int)uVar12 == 0) {
                    if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                      cVar6 = FUN_10055830(uVar12,local_184,local_188,uVar17,local_190 + 0xe6,pcVar9
                                          );
                    }
                  }
                  else {
                    iVar10 = FUN_10091880(uVar8,s_fpslimit_100b4bc8);
                    if (iVar10 == 0) {
                      if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                        if (pcVar9 == (code *)0x1) {
                          uVar11 = (*(code *)local_180)();
                          uVar11 = (*extraout_w11_13)(uVar11,local_188,uVar17,0);
                          uVar13 = FUN_1005e928(uVar11,local_190 + 0xda,local_190 + 0xde);
                          if ((uVar13 & 1) != 0) {
                            cVar6 = '\x01';
                            goto LAB_10059308;
                          }
                        }
                        cVar6 = '\0';
                      }
                    }
                    else {
                      iVar10 = FUN_10091880(uVar8,s_environment_100b4bd8);
                      if (iVar10 == 0) {
                        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                          if (pcVar9 == (code *)0x1) {
                            uVar11 = (*(code *)local_180)();
                            uVar11 = (*extraout_w11_14)(uVar11,local_188,uVar17,0);
                            iVar10 = FUN_10091880(uVar11,&DAT_100b4be4);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_1005871c;
                            }
                            iVar10 = FUN_10091880(uVar11,0x100b4bec);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_10058744;
                            }
                          }
                          goto LAB_10058dd8;
                        }
                      }
                      else {
                        iVar10 = FUN_10091880(uVar8,s_windowedattributes_100b4bf8);
                        uVar4 = local_184;
                        uVar11 = local_188;
                        if (iVar10 == 0) {
                          if (uVar7 == 0) {
                            pcVar18 = (code *)0x0;
                            puVar1 = (uint *)(local_190 + 0xc2);
                            *puVar1 = 0;
                            if (pcVar9 != (code *)0x0) {
                              local_174 = local_180;
                              local_170 = FUN_100a9050;
                              do {
                                (*(code *)local_174)();
                                uVar8 = (*extraout_w11_15)(uVar4,uVar11,uVar17,pcVar18);
                                iVar10 = FUN_10091880(uVar8,s_borderless_100b4c10);
                                if (iVar10 == 0) {
                                  uVar7 = *puVar1 | 1;
LAB_10059100:
                                  *puVar1 = uVar7;
                                }
                                else {
                                  iVar10 = FUN_10091880(uVar8,s_alwaysontop_100b4c20);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 2;
                                    goto LAB_10059100;
                                  }
                                  iVar10 = FUN_10091880(uVar8,s_fullscreensize_100b4c30);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 4;
                                    goto LAB_10059100;
                                  }
                                  cVar6 = '\0';
                                }
                                pcVar18 = pcVar18 + 1;
                              } while (pcVar18 < pcVar9);
                            }
                          }
                        }
                        else if ((local_17c < 0x273) ||
                                (iVar10 = FUN_10091880(uVar8,s_fullscreenattributes_100b4c40),
                                pppppppcVar2 = local_180, uVar4 = local_184, uVar11 = local_188,
                                iVar10 != 0)) {
                          uVar16 = local_17c;
                          if (local_17c < 0x280) {
                            if (0x279 < local_17c) {
                              return '\0';
                            }
                            uVar12 = FUN_10091880(uVar8,s_enablegdihooking_100b4c80);
                            if ((int)uVar12 != 0) {
                              return '\0';
                            }
                            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                              local_18c[0] = '\0';
                              cVar6 = FUN_10055830(uVar12,local_184,local_188,uVar17,local_18c,
                                                   pcVar9);
                              uVar7 = 3;
                              if (uVar16 != 0x279) {
                                uVar7 = 1;
                              }
                              if (local_18c[0] == '\0') {
                                uVar7 = 0;
                              }
                              puVar1 = (uint *)(local_190 + 0xe2);
                              goto LAB_10059300;
                            }
                          }
                          else {
                            iVar10 = FUN_10091880(uVar8,s_systemhookflags_100b4c60);
                            uVar4 = local_184;
                            uVar11 = local_188;
                            if (iVar10 != 0) {
                              return '\0';
                            }
                            if (uVar7 == 0) {
                              puVar1 = (uint *)(local_190 + 0xe2);
                              *puVar1 = 0;
                              if (pcVar9 != (code *)0x0) {
                                local_174 = local_180;
                                local_170 = FUN_100a9050;
                                pcVar18 = (code *)0x0;
                                do {
                                  (*(code *)local_174)();
                                  uVar8 = (*extraout_w11_17)(uVar4,uVar11,uVar17,pcVar18);
                                  iVar10 = FUN_10091880(uVar8,&DAT_100b4c70);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 1;
LAB_10059280:
                                    *puVar1 = uVar7;
                                  }
                                  else {
                                    iVar10 = FUN_10091880(uVar8,s_cursor_100b4c74);
                                    if (iVar10 == 0) {
                                      uVar7 = *puVar1 | 2;
                                      goto LAB_10059280;
                                    }
                                    cVar6 = '\0';
                                  }
                                  pcVar18 = pcVar18 + 1;
                                } while (pcVar18 < pcVar9);
                              }
                            }
                          }
                        }
                        else if (uVar7 == 0) {
                          *(uint *)(local_190 + 0xc6) = 0;
                          pcVar18 = (code *)0x0;
                          pcVar5 = (code *)(local_190 + 0xc6);
                          if (pcVar9 != (code *)0x0) {
                            do {
                              local_170 = pcVar5;
                              (*(code *)pppppppcVar2)();
                              uVar8 = (*extraout_w11_16)(uVar4,uVar11,uVar17,pcVar18);
                              iVar10 = FUN_10091880(uVar8,&DAT_100b4c58);
                              if (iVar10 == 0) {
                                *(uint *)local_170 = *(uint *)local_170 | 1;
                              }
                              else {
                                cVar6 = '\0';
                              }
                              pcVar18 = pcVar18 + 1;
                              pcVar5 = local_170;
                            } while (pcVar18 < pcVar9);
                          }
                        }
                      }
                    }
                  }
                }
                else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                  iVar10 = local_190 + 0x9a;
                  goto LAB_100589d8;
                }
                goto LAB_10059308;
              }
              if (uVar7 != 0) {
                return '\0';
              }
              cVar6 = '\x01';
              if (pcVar9 == (code *)0x1) {
                uVar11 = (*(code *)local_180)();
                uVar11 = (*extraout_w11_12)(uVar11,local_188,uVar17,0);
                local_158 = 0;
                uVar13 = FUN_100559b8(uVar11,&local_154,&local_150,&local_158,&local_14c);
                if ((uVar13 & 1) != 0) {
                  *(undefined4 *)(local_190 + 0x8a) = local_154;
                  *(undefined4 *)(local_190 + 0x8e) = local_150;
                  *(undefined4 *)(local_190 + 0x92) = local_158;
                  *(undefined4 *)(local_190 + 0x96) = local_14c;
LAB_10058e8c:
                  uVar17 = uVar17 + 1;
                  goto LAB_10058560;
                }
              }
              else if (pcVar9 == (code *)0x0) goto LAB_10059308;
            }
            else {
LAB_10058ba0:
              iVar10 = FUN_10091880(uVar8,s_displayroi_100b4b60);
              uVar4 = local_184;
              uVar11 = local_188;
              if (iVar10 != 0) goto LAB_10058de0;
              uVar16 = 0;
              if (uVar7 != 0) {
                local_15c = (code *******)FUN_100a9050;
                local_174 = local_180;
                local_164 = (code *******)(local_190 + 0xae);
                local_168 = (code *******)(local_190 + 0xb2);
                local_160 = local_180;
                local_16c = (code *******)(local_190 + 0xae);
                local_170 = pcVar9;
                cVar15 = cVar6;
                do {
                  (*(code *)local_174)();
                  uVar8 = (*extraout_w11_09)(uVar4,uVar11,uVar17,uVar16);
                  iVar10 = FUN_10091880(uVar8,&DAT_100b4b6c);
                  cVar6 = cVar15;
                  if (iVar10 == 0) {
                    (*(code *)local_160)();
                    uVar8 = (*extraout_w11_10)(uVar4,uVar11,uVar17,uVar16);
                    local_1b4 = (code *******)&uStack_178;
                    local_1b8 = appppppcStack_148;
                    pcStack_1bc = s__s__c_100b4724;
                    local_1c0 = uVar8;
                    iVar10 = FUN_10091e70(&local_1c0,0x10);
                    if ((iVar10 == 1) &&
                       (iVar10 = FUN_10091880(appppppcStack_148,s_centered_100b4030), iVar10 == 0))
                    {
                      local_164[0] = (code ******)0xffffffff;
                      local_164[1] = (code ******)0xffffffff;
                    }
                    else {
                      local_1b0 = (undefined1 *)&uStack_178;
                      local_1b4 = local_168;
                      local_1b8 = local_16c;
                      pcStack_1bc = s____d____d____c_100b4b70;
                      local_1c0 = uVar8;
                      iVar10 = FUN_10091e70(&local_1c0,0x14);
                      cVar6 = '\0';
                      if (iVar10 == 2) {
                        cVar6 = cVar15;
                      }
                    }
                  }
                  uVar16 = uVar16 + 1;
                  pcVar9 = local_170;
                  cVar15 = cVar6;
                } while (uVar16 < uVar7);
              }
              if (cVar6 == '\0') goto LAB_10059308;
              if (pcVar9 == (code *)0x0) {
                if (uVar7 != 0) goto LAB_10058dd8;
                goto LAB_10059308;
              }
              if (pcVar9 == (code *)0x1) {
                local_16c = (code *******)0x0;
                local_168 = (code *******)0x0;
                uVar11 = (*(code *)local_180)();
                uVar11 = (*extraout_w11_11)(uVar11,local_188,uVar17,0);
                pppppppcVar2 = (code *******)(local_190 + 0xba);
                pppppppcVar3 = (code *******)(local_190 + 0xb6);
                local_1b0 = (undefined1 *)((int)&uStack_178 + 1);
                local_1b4 = (code *******)&local_168;
                local_1b8 = (code *******)&local_16c;
                pcStack_1bc = s__d__d__c_100b4b80;
                local_1c0 = uVar11;
                iVar10 = FUN_10091e70(&local_1c0,0x14);
                if (iVar10 != 2) {
                  local_1b0 = (undefined1 *)((int)&uStack_178 + 1);
                  pcStack_1bc = s____d____d____c_100b4b70;
                  local_1c0 = uVar11;
                  local_1b8 = pppppppcVar3;
                  local_1b4 = pppppppcVar2;
                  iVar10 = FUN_10091e70(&local_1c0,0x14);
                  if (iVar10 != 2) {
                    cVar6 = '\0';
                  }
                  goto LAB_10059308;
                }
                *pppppppcVar3 = (code ******)0xffffffff;
                *pppppppcVar2 = (code ******)((uint)local_168 | (int)local_16c << 0x10);
                goto LAB_10058e8c;
              }
            }
LAB_10058dd8:
            cVar6 = '\0';
          }
          else {
            uVar12 = FUN_10091880(uVar8,s_cursorscalefactor_100b4b48);
            if ((int)uVar12 != 0) goto LAB_10058ba0;
            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xaa;
              goto LAB_100589d8;
            }
          }
        }
      }
    }
    else {
      iVar10 = FUN_10091880(uVar8,s_resampling_100b4a18);
      if (iVar10 == 0) {
        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 != (code *)0x1) goto LAB_10058dd8;
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_03)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_10091880(uVar11,s_pointsampled_100b4258);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100586f8:
            *puVar14 = 0;
            goto LAB_10059308;
          }
          iVar10 = FUN_10091880(uVar11,s_bilinear_100b4268);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_1005871c:
            uVar11 = 1;
          }
          else {
            iVar10 = FUN_10091880(uVar11,s_bicubic_100b4a28);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_10058744:
              uVar11 = 2;
            }
            else {
              iVar10 = FUN_10091880(uVar11,0x100b4a30);
              if (iVar10 == 0) {
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_10058768:
                uVar11 = 3;
              }
              else {
                iVar10 = FUN_10091880(uVar11,0x100b4a40);
                if (iVar10 != 0) goto LAB_10058dd8;
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_1005878c:
                uVar11 = 4;
              }
            }
          }
          *puVar14 = uVar11;
        }
      }
      else if ((local_17c < 0x279) ||
              (iVar10 = FUN_10091880(uVar8,s_presentationmodel_100b4a50), iVar10 != 0)) {
        if ((local_17c < 0x281) || (iVar10 = FUN_10091880(uVar8,s_colorspace_100b4a98), iVar10 != 0)
           ) {
          if ((local_17c < 0x287) ||
             (uVar12 = FUN_10091880(uVar8,s_watermarkdisplayduration_100b4af8), (int)uVar12 != 0))
          goto LAB_100589ec;
          if (uVar7 == 0) {
            if (pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xd6;
              goto LAB_100589d8;
            }
            goto LAB_10058dd8;
          }
        }
        else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 == (code *)0x1) {
            uVar11 = (*(code *)local_180)();
            uVar11 = (*extraout_w11_05)(uVar11,local_188,uVar17,0);
            iVar10 = FUN_10091880(uVar11,s_appdriven_100b3f28);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100586f8;
            }
            iVar10 = FUN_10091880(uVar11,0x100b4aa8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_1005871c;
            }
            iVar10 = FUN_10091880(uVar11,s_argb2101010_sdr_100b4ab8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_10058744;
            }
            iVar10 = FUN_10091880(uVar11,s_argb2101010_sdr_wcg_100b4ac8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_10058768;
            }
            iVar10 = FUN_10091880(uVar11,0x100b4ae0);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_1005878c;
            }
          }
          goto LAB_10058dd8;
        }
      }
      else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
        if (pcVar9 == (code *)0x1) {
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_04)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_10091880(uVar11,0x100b47d8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100586f8;
          }
          iVar10 = FUN_10091880(uVar11,s_discard_100b4a68);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_1005871c;
          }
          iVar10 = FUN_10091880(uVar11,0x100b4a70);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_10058744;
          }
          iVar10 = FUN_10091880(uVar11,s_flip_discard_100b4a78);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_10058768;
          }
          iVar10 = FUN_10091880(uVar11,s_flip_seq_100b4a88);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_1005878c;
          }
        }
        goto LAB_10058dd8;
      }
    }
LAB_10059308:
    uVar17 = uVar17 + 1;
    if (cVar6 == '\0') {
      return '\0';
    }
  } while( true );
}

