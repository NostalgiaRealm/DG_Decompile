/*
 * FUN_100c5140 at 100c5140
 * undefined FUN_100c5140(void)
 * Address ranges: 100c5140-100c5f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_100c5140(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
LAB_100c5180:
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
      uVar12 = FUN_100fef80(uVar8,s_forcenearestpointfilter_1012de60);
      if ((int)uVar12 == 0) {
        if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_100c5f28;
        local_18c[0] = '\0';
        cVar6 = FUN_100c2450(uVar12,uVar4,uVar11,uVar17,local_18c,pcVar9);
        uVar7 = (uint)(local_18c[0] == '\0');
        puVar1 = (uint *)(local_190 + 0xca);
LAB_100c5f20:
        *puVar1 = uVar7;
      }
      else {
LAB_100c560c:
        uVar12 = FUN_100fef80(uVar8,s_deframersize_1012df78);
        if ((int)uVar12 == 0) {
          if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_100c5f28;
          iVar10 = local_190 + 0x9e;
LAB_100c55f8:
          cVar6 = FUN_100c2568(uVar12,local_184,local_188,uVar17,iVar10,pcVar9);
        }
        else {
          uVar12 = FUN_100fef80(uVar8,s_imagescalefactor_1012df88);
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
                local_160 = (code *******)FUN_1011fdf8;
                local_16c = local_180;
                local_168 = (code *******)FUN_1011fdf8;
                do {
                  (*(code *)pppppppcVar2)();
                  uVar8 = (*extraout_w11_06)(uVar4,uVar11,uVar17,uVar16);
                  iVar10 = FUN_100fef80(uVar8,&DAT_1012b5c4);
                  if (iVar10 == 0) {
                    (*(code *)local_16c)();
                    pppppppcVar3 = local_164;
                    pcVar9 = extraout_w11_07;
LAB_100c5750:
                    cVar6 = (*pcVar9)(uVar4,uVar11,uVar17,uVar16,pppppppcVar3);
                  }
                  else {
                    iVar10 = FUN_100fef80(uVar8,&DAT_1012b5c8);
                    if (iVar10 == 0) {
                      (*(code *)local_15c)();
                      pppppppcVar3 = local_174;
                      pcVar9 = extraout_w11_08;
                      goto LAB_100c5750;
                    }
                    cVar6 = '\0';
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar7);
              }
            }
            else if (uVar7 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xa2);
              cVar6 = FUN_100c2568(uVar12,local_184,local_188,uVar17,puVar14,pcVar9);
              *(undefined4 *)(iVar10 + 0xa6) = *puVar14;
            }
          }
          else if (local_17c < 0x274) {
            if (local_17c < 0x262) {
LAB_100c5a00:
              iVar10 = FUN_100fef80(uVar8,s_desktopresolution_1012dfe8);
              if (iVar10 != 0) {
                if ((local_17c < 0x260) ||
                   (uVar12 = FUN_100fef80(uVar8,s_desktopbitdepth_1012e000), (int)uVar12 != 0)) {
                  uVar12 = FUN_100fef80(uVar8,s_freemouse_1012e010);
                  if ((int)uVar12 == 0) {
                    if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                      cVar6 = FUN_100c2450(uVar12,local_184,local_188,uVar17,local_190 + 0xe6,pcVar9
                                          );
                    }
                  }
                  else {
                    iVar10 = FUN_100fef80(uVar8,s_fpslimit_1012e020);
                    if (iVar10 == 0) {
                      if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                        if (pcVar9 == (code *)0x1) {
                          uVar11 = (*(code *)local_180)();
                          uVar11 = (*extraout_w11_13)(uVar11,local_188,uVar17,0);
                          uVar13 = FUN_100cb548(uVar11,local_190 + 0xda,local_190 + 0xde);
                          if ((uVar13 & 1) != 0) {
                            cVar6 = '\x01';
                            goto LAB_100c5f28;
                          }
                        }
                        cVar6 = '\0';
                      }
                    }
                    else {
                      iVar10 = FUN_100fef80(uVar8,s_environment_1012e030);
                      if (iVar10 == 0) {
                        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                          if (pcVar9 == (code *)0x1) {
                            uVar11 = (*(code *)local_180)();
                            uVar11 = (*extraout_w11_14)(uVar11,local_188,uVar17,0);
                            iVar10 = FUN_100fef80(uVar11,&DAT_1012e03c);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_100c533c;
                            }
                            iVar10 = FUN_100fef80(uVar11,0x1012e044);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_100c5364;
                            }
                          }
                          goto LAB_100c59f8;
                        }
                      }
                      else {
                        iVar10 = FUN_100fef80(uVar8,s_windowedattributes_1012e050);
                        uVar4 = local_184;
                        uVar11 = local_188;
                        if (iVar10 == 0) {
                          if (uVar7 == 0) {
                            pcVar18 = (code *)0x0;
                            puVar1 = (uint *)(local_190 + 0xc2);
                            *puVar1 = 0;
                            if (pcVar9 != (code *)0x0) {
                              local_174 = local_180;
                              local_170 = FUN_1011fd50;
                              do {
                                (*(code *)local_174)();
                                uVar8 = (*extraout_w11_15)(uVar4,uVar11,uVar17,pcVar18);
                                iVar10 = FUN_100fef80(uVar8,s_borderless_1012e068);
                                if (iVar10 == 0) {
                                  uVar7 = *puVar1 | 1;
LAB_100c5d20:
                                  *puVar1 = uVar7;
                                }
                                else {
                                  iVar10 = FUN_100fef80(uVar8,s_alwaysontop_1012e078);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 2;
                                    goto LAB_100c5d20;
                                  }
                                  iVar10 = FUN_100fef80(uVar8,s_fullscreensize_1012e088);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 4;
                                    goto LAB_100c5d20;
                                  }
                                  cVar6 = '\0';
                                }
                                pcVar18 = pcVar18 + 1;
                              } while (pcVar18 < pcVar9);
                            }
                          }
                        }
                        else if ((local_17c < 0x273) ||
                                (iVar10 = FUN_100fef80(uVar8,s_fullscreenattributes_1012e098),
                                pppppppcVar2 = local_180, uVar4 = local_184, uVar11 = local_188,
                                iVar10 != 0)) {
                          uVar16 = local_17c;
                          if (local_17c < 0x280) {
                            if (0x279 < local_17c) {
                              return '\0';
                            }
                            uVar12 = FUN_100fef80(uVar8,s_enablegdihooking_1012e0d8);
                            if ((int)uVar12 != 0) {
                              return '\0';
                            }
                            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                              local_18c[0] = '\0';
                              cVar6 = FUN_100c2450(uVar12,local_184,local_188,uVar17,local_18c,
                                                   pcVar9);
                              uVar7 = 3;
                              if (uVar16 != 0x279) {
                                uVar7 = 1;
                              }
                              if (local_18c[0] == '\0') {
                                uVar7 = 0;
                              }
                              puVar1 = (uint *)(local_190 + 0xe2);
                              goto LAB_100c5f20;
                            }
                          }
                          else {
                            iVar10 = FUN_100fef80(uVar8,s_systemhookflags_1012e0b8);
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
                                local_170 = FUN_1011fd50;
                                pcVar18 = (code *)0x0;
                                do {
                                  (*(code *)local_174)();
                                  uVar8 = (*extraout_w11_17)(uVar4,uVar11,uVar17,pcVar18);
                                  iVar10 = FUN_100fef80(uVar8,&DAT_1012e0c8);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 1;
LAB_100c5ea0:
                                    *puVar1 = uVar7;
                                  }
                                  else {
                                    iVar10 = FUN_100fef80(uVar8,s_cursor_1012e0cc);
                                    if (iVar10 == 0) {
                                      uVar7 = *puVar1 | 2;
                                      goto LAB_100c5ea0;
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
                              iVar10 = FUN_100fef80(uVar8,&DAT_1012e0b0);
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
                  goto LAB_100c55f8;
                }
                goto LAB_100c5f28;
              }
              if (uVar7 != 0) {
                return '\0';
              }
              cVar6 = '\x01';
              if (pcVar9 == (code *)0x1) {
                uVar11 = (*(code *)local_180)();
                uVar11 = (*extraout_w11_12)(uVar11,local_188,uVar17,0);
                local_158 = 0;
                uVar13 = FUN_100c25d8(uVar11,&local_154,&local_150,&local_158,&local_14c);
                if ((uVar13 & 1) != 0) {
                  *(undefined4 *)(local_190 + 0x8a) = local_154;
                  *(undefined4 *)(local_190 + 0x8e) = local_150;
                  *(undefined4 *)(local_190 + 0x92) = local_158;
                  *(undefined4 *)(local_190 + 0x96) = local_14c;
LAB_100c5aac:
                  uVar17 = uVar17 + 1;
                  goto LAB_100c5180;
                }
              }
              else if (pcVar9 == (code *)0x0) goto LAB_100c5f28;
            }
            else {
LAB_100c57c0:
              iVar10 = FUN_100fef80(uVar8,s_displayroi_1012dfb8);
              uVar4 = local_184;
              uVar11 = local_188;
              if (iVar10 != 0) goto LAB_100c5a00;
              uVar16 = 0;
              if (uVar7 != 0) {
                local_15c = (code *******)FUN_1011fd50;
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
                  iVar10 = FUN_100fef80(uVar8,&DAT_1012dfc4);
                  cVar6 = cVar15;
                  if (iVar10 == 0) {
                    (*(code *)local_160)();
                    uVar8 = (*extraout_w11_10)(uVar4,uVar11,uVar17,uVar16);
                    local_1b4 = (code *******)&uStack_178;
                    local_1b8 = appppppcStack_148;
                    pcStack_1bc = s__s__c_1012db84;
                    local_1c0 = uVar8;
                    iVar10 = FUN_100ff6d0(&local_1c0,0x10);
                    if ((iVar10 == 1) &&
                       (iVar10 = FUN_100fef80(appppppcStack_148,s_centered_1012d498), iVar10 == 0))
                    {
                      local_164[0] = (code ******)0xffffffff;
                      local_164[1] = (code ******)0xffffffff;
                    }
                    else {
                      local_1b0 = (undefined1 *)&uStack_178;
                      local_1b4 = local_168;
                      local_1b8 = local_16c;
                      pcStack_1bc = s____d____d____c_1012dfc8;
                      local_1c0 = uVar8;
                      iVar10 = FUN_100ff6d0(&local_1c0,0x14);
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
              if (cVar6 == '\0') goto LAB_100c5f28;
              if (pcVar9 == (code *)0x0) {
                if (uVar7 != 0) goto LAB_100c59f8;
                goto LAB_100c5f28;
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
                pcStack_1bc = s__d__d__c_1012dfd8;
                local_1c0 = uVar11;
                iVar10 = FUN_100ff6d0(&local_1c0,0x14);
                if (iVar10 != 2) {
                  local_1b0 = (undefined1 *)((int)&uStack_178 + 1);
                  pcStack_1bc = s____d____d____c_1012dfc8;
                  local_1c0 = uVar11;
                  local_1b8 = pppppppcVar3;
                  local_1b4 = pppppppcVar2;
                  iVar10 = FUN_100ff6d0(&local_1c0,0x14);
                  if (iVar10 != 2) {
                    cVar6 = '\0';
                  }
                  goto LAB_100c5f28;
                }
                *pppppppcVar3 = (code ******)0xffffffff;
                *pppppppcVar2 = (code ******)((uint)local_168 | (int)local_16c << 0x10);
                goto LAB_100c5aac;
              }
            }
LAB_100c59f8:
            cVar6 = '\0';
          }
          else {
            uVar12 = FUN_100fef80(uVar8,s_cursorscalefactor_1012dfa0);
            if ((int)uVar12 != 0) goto LAB_100c57c0;
            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xaa;
              goto LAB_100c55f8;
            }
          }
        }
      }
    }
    else {
      iVar10 = FUN_100fef80(uVar8,s_resampling_1012de78);
      if (iVar10 == 0) {
        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 != (code *)0x1) goto LAB_100c59f8;
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_03)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_100fef80(uVar11,s_pointsampled_1012d6b8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100c5318:
            *puVar14 = 0;
            goto LAB_100c5f28;
          }
          iVar10 = FUN_100fef80(uVar11,s_bilinear_1012d6c8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100c533c:
            uVar11 = 1;
          }
          else {
            iVar10 = FUN_100fef80(uVar11,s_bicubic_1012de88);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100c5364:
              uVar11 = 2;
            }
            else {
              iVar10 = FUN_100fef80(uVar11,0x1012de90);
              if (iVar10 == 0) {
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100c5388:
                uVar11 = 3;
              }
              else {
                iVar10 = FUN_100fef80(uVar11,0x1012dea0);
                if (iVar10 != 0) goto LAB_100c59f8;
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100c53ac:
                uVar11 = 4;
              }
            }
          }
          *puVar14 = uVar11;
        }
      }
      else if ((local_17c < 0x279) ||
              (iVar10 = FUN_100fef80(uVar8,s_presentationmodel_1012deb0), iVar10 != 0)) {
        if ((local_17c < 0x281) || (iVar10 = FUN_100fef80(uVar8,s_colorspace_1012def8), iVar10 != 0)
           ) {
          if ((local_17c < 0x287) ||
             (uVar12 = FUN_100fef80(uVar8,s_watermarkdisplayduration_1012df58), (int)uVar12 != 0))
          goto LAB_100c560c;
          if (uVar7 == 0) {
            if (pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xd6;
              goto LAB_100c55f8;
            }
            goto LAB_100c59f8;
          }
        }
        else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 == (code *)0x1) {
            uVar11 = (*(code *)local_180)();
            uVar11 = (*extraout_w11_05)(uVar11,local_188,uVar17,0);
            iVar10 = FUN_100fef80(uVar11,s_appdriven_1012d390);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100c5318;
            }
            iVar10 = FUN_100fef80(uVar11,0x1012df08);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100c533c;
            }
            iVar10 = FUN_100fef80(uVar11,s_argb2101010_sdr_1012df18);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100c5364;
            }
            iVar10 = FUN_100fef80(uVar11,s_argb2101010_sdr_wcg_1012df28);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100c5388;
            }
            iVar10 = FUN_100fef80(uVar11,0x1012df40);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100c53ac;
            }
          }
          goto LAB_100c59f8;
        }
      }
      else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
        if (pcVar9 == (code *)0x1) {
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_04)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_100fef80(uVar11,0x1012dc38);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100c5318;
          }
          iVar10 = FUN_100fef80(uVar11,s_discard_1012dec8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100c533c;
          }
          iVar10 = FUN_100fef80(uVar11,0x1012ded0);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100c5364;
          }
          iVar10 = FUN_100fef80(uVar11,s_flip_discard_1012ded8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100c5388;
          }
          iVar10 = FUN_100fef80(uVar11,s_flip_seq_1012dee8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100c53ac;
          }
        }
        goto LAB_100c59f8;
      }
    }
LAB_100c5f28:
    uVar17 = uVar17 + 1;
    if (cVar6 == '\0') {
      return '\0';
    }
  } while( true );
}

