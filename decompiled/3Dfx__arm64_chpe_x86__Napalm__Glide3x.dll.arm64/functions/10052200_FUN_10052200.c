/*
 * FUN_10052200 at 10052200
 * undefined FUN_10052200(void)
 * Address ranges: 10052200-1005301f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char FUN_10052200(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
LAB_10052240:
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
      uVar12 = FUN_10083500(uVar8,s_forcenearestpointfilter_100a1620);
      if ((int)uVar12 == 0) {
        if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_10052fe8;
        local_18c[0] = '\0';
        cVar6 = FUN_1004f510(uVar12,uVar4,uVar11,uVar17,local_18c,pcVar9);
        uVar7 = (uint)(local_18c[0] == '\0');
        puVar1 = (uint *)(local_190 + 0xca);
LAB_10052fe0:
        *puVar1 = uVar7;
      }
      else {
LAB_100526cc:
        uVar12 = FUN_10083500(uVar8,s_deframersize_100a1738);
        if ((int)uVar12 == 0) {
          if (uVar7 != 0 || pcVar9 == (code *)0x0) goto LAB_10052fe8;
          iVar10 = local_190 + 0x9e;
LAB_100526b8:
          cVar6 = FUN_1004f628(uVar12,local_184,local_188,uVar17,iVar10,pcVar9);
        }
        else {
          uVar12 = FUN_10083500(uVar8,s_imagescalefactor_100a1748);
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
                local_160 = (code *******)FUN_10097c48;
                local_16c = local_180;
                local_168 = (code *******)FUN_10097c48;
                do {
                  (*(code *)pppppppcVar2)();
                  uVar8 = (*extraout_w11_06)(uVar4,uVar11,uVar17,uVar16);
                  iVar10 = FUN_10083500(uVar8,&DAT_100a175c);
                  if (iVar10 == 0) {
                    (*(code *)local_16c)();
                    pppppppcVar3 = local_164;
                    pcVar9 = extraout_w11_07;
LAB_10052810:
                    cVar6 = (*pcVar9)(uVar4,uVar11,uVar17,uVar16,pppppppcVar3);
                  }
                  else {
                    iVar10 = FUN_10083500(uVar8,&DAT_100a1760);
                    if (iVar10 == 0) {
                      (*(code *)local_15c)();
                      pppppppcVar3 = local_174;
                      pcVar9 = extraout_w11_08;
                      goto LAB_10052810;
                    }
                    cVar6 = '\0';
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < uVar7);
              }
            }
            else if (uVar7 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xa2);
              cVar6 = FUN_1004f628(uVar12,local_184,local_188,uVar17,puVar14,pcVar9);
              *(undefined4 *)(iVar10 + 0xa6) = *puVar14;
            }
          }
          else if (local_17c < 0x274) {
            if (local_17c < 0x262) {
LAB_10052ac0:
              iVar10 = FUN_10083500(uVar8,s_desktopresolution_100a17b0);
              if (iVar10 != 0) {
                if ((local_17c < 0x260) ||
                   (uVar12 = FUN_10083500(uVar8,s_desktopbitdepth_100a17c8), (int)uVar12 != 0)) {
                  uVar12 = FUN_10083500(uVar8,s_freemouse_100a17d8);
                  if ((int)uVar12 == 0) {
                    if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                      cVar6 = FUN_1004f510(uVar12,local_184,local_188,uVar17,local_190 + 0xe6,pcVar9
                                          );
                    }
                  }
                  else {
                    iVar10 = FUN_10083500(uVar8,s_fpslimit_100a17e8);
                    if (iVar10 == 0) {
                      if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                        if (pcVar9 == (code *)0x1) {
                          uVar11 = (*(code *)local_180)();
                          uVar11 = (*extraout_w11_13)(uVar11,local_188,uVar17,0);
                          uVar13 = FUN_1004d038(uVar11,local_190 + 0xda,local_190 + 0xde);
                          if ((uVar13 & 1) != 0) {
                            cVar6 = '\x01';
                            goto LAB_10052fe8;
                          }
                        }
                        cVar6 = '\0';
                      }
                    }
                    else {
                      iVar10 = FUN_10083500(uVar8,s_environment_100a17f8);
                      if (iVar10 == 0) {
                        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                          if (pcVar9 == (code *)0x1) {
                            uVar11 = (*(code *)local_180)();
                            uVar11 = (*extraout_w11_14)(uVar11,local_188,uVar17,0);
                            iVar10 = FUN_10083500(uVar11,&DAT_1009faa4);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_100523fc;
                            }
                            iVar10 = FUN_10083500(uVar11,0x100a1804);
                            if (iVar10 == 0) {
                              puVar14 = (undefined4 *)(local_190 + 0xbe);
                              goto LAB_10052424;
                            }
                          }
                          goto LAB_10052ab8;
                        }
                      }
                      else {
                        iVar10 = FUN_10083500(uVar8,s_windowedattributes_100a1810);
                        uVar4 = local_184;
                        uVar11 = local_188;
                        if (iVar10 == 0) {
                          if (uVar7 == 0) {
                            pcVar18 = (code *)0x0;
                            puVar1 = (uint *)(local_190 + 0xc2);
                            *puVar1 = 0;
                            if (pcVar9 != (code *)0x0) {
                              local_174 = local_180;
                              local_170 = FUN_10097ba0;
                              do {
                                (*(code *)local_174)();
                                uVar8 = (*extraout_w11_15)(uVar4,uVar11,uVar17,pcVar18);
                                iVar10 = FUN_10083500(uVar8,s_borderless_100a1828);
                                if (iVar10 == 0) {
                                  uVar7 = *puVar1 | 1;
LAB_10052de0:
                                  *puVar1 = uVar7;
                                }
                                else {
                                  iVar10 = FUN_10083500(uVar8,s_alwaysontop_100a1838);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 2;
                                    goto LAB_10052de0;
                                  }
                                  iVar10 = FUN_10083500(uVar8,s_fullscreensize_100a1848);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 4;
                                    goto LAB_10052de0;
                                  }
                                  cVar6 = '\0';
                                }
                                pcVar18 = pcVar18 + 1;
                              } while (pcVar18 < pcVar9);
                            }
                          }
                        }
                        else if ((local_17c < 0x273) ||
                                (iVar10 = FUN_10083500(uVar8,s_fullscreenattributes_100a1858),
                                pppppppcVar2 = local_180, uVar4 = local_184, uVar11 = local_188,
                                iVar10 != 0)) {
                          uVar16 = local_17c;
                          if (local_17c < 0x280) {
                            if (0x279 < local_17c) {
                              return '\0';
                            }
                            uVar12 = FUN_10083500(uVar8,s_enablegdihooking_100a1898);
                            if ((int)uVar12 != 0) {
                              return '\0';
                            }
                            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
                              local_18c[0] = '\0';
                              cVar6 = FUN_1004f510(uVar12,local_184,local_188,uVar17,local_18c,
                                                   pcVar9);
                              uVar7 = 3;
                              if (uVar16 != 0x279) {
                                uVar7 = 1;
                              }
                              if (local_18c[0] == '\0') {
                                uVar7 = 0;
                              }
                              puVar1 = (uint *)(local_190 + 0xe2);
                              goto LAB_10052fe0;
                            }
                          }
                          else {
                            iVar10 = FUN_10083500(uVar8,s_systemhookflags_100a1878);
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
                                local_170 = FUN_10097ba0;
                                pcVar18 = (code *)0x0;
                                do {
                                  (*(code *)local_174)();
                                  uVar8 = (*extraout_w11_17)(uVar4,uVar11,uVar17,pcVar18);
                                  iVar10 = FUN_10083500(uVar8,&DAT_100a1888);
                                  if (iVar10 == 0) {
                                    uVar7 = *puVar1 | 1;
LAB_10052f60:
                                    *puVar1 = uVar7;
                                  }
                                  else {
                                    iVar10 = FUN_10083500(uVar8,s_cursor_100a188c);
                                    if (iVar10 == 0) {
                                      uVar7 = *puVar1 | 2;
                                      goto LAB_10052f60;
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
                              iVar10 = FUN_10083500(uVar8,&DAT_100a1870);
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
                  goto LAB_100526b8;
                }
                goto LAB_10052fe8;
              }
              if (uVar7 != 0) {
                return '\0';
              }
              cVar6 = '\x01';
              if (pcVar9 == (code *)0x1) {
                uVar11 = (*(code *)local_180)();
                uVar11 = (*extraout_w11_12)(uVar11,local_188,uVar17,0);
                local_158 = 0;
                uVar13 = FUN_1004f698(uVar11,&local_154,&local_150,&local_158,&local_14c);
                if ((uVar13 & 1) != 0) {
                  *(undefined4 *)(local_190 + 0x8a) = local_154;
                  *(undefined4 *)(local_190 + 0x8e) = local_150;
                  *(undefined4 *)(local_190 + 0x92) = local_158;
                  *(undefined4 *)(local_190 + 0x96) = local_14c;
LAB_10052b6c:
                  uVar17 = uVar17 + 1;
                  goto LAB_10052240;
                }
              }
              else if (pcVar9 == (code *)0x0) goto LAB_10052fe8;
            }
            else {
LAB_10052880:
              iVar10 = FUN_10083500(uVar8,s_displayroi_100a1780);
              uVar4 = local_184;
              uVar11 = local_188;
              if (iVar10 != 0) goto LAB_10052ac0;
              uVar16 = 0;
              if (uVar7 != 0) {
                local_15c = (code *******)FUN_10097ba0;
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
                  iVar10 = FUN_10083500(uVar8,&DAT_100a178c);
                  cVar6 = cVar15;
                  if (iVar10 == 0) {
                    (*(code *)local_160)();
                    uVar8 = (*extraout_w11_10)(uVar4,uVar11,uVar17,uVar16);
                    local_1b4 = (code *******)&uStack_178;
                    local_1b8 = appppppcStack_148;
                    pcStack_1bc = s__s__c_100a09a0;
                    local_1c0 = uVar8;
                    iVar10 = FUN_10086210(&local_1c0,0x10);
                    if ((iVar10 == 1) &&
                       (iVar10 = FUN_10083500(appppppcStack_148,s_centered_100a0c58), iVar10 == 0))
                    {
                      local_164[0] = (code ******)0xffffffff;
                      local_164[1] = (code ******)0xffffffff;
                    }
                    else {
                      local_1b0 = (undefined1 *)&uStack_178;
                      local_1b4 = local_168;
                      local_1b8 = local_16c;
                      pcStack_1bc = s____d____d____c_100a1790;
                      local_1c0 = uVar8;
                      iVar10 = FUN_10086210(&local_1c0,0x14);
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
              if (cVar6 == '\0') goto LAB_10052fe8;
              if (pcVar9 == (code *)0x0) {
                if (uVar7 != 0) goto LAB_10052ab8;
                goto LAB_10052fe8;
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
                pcStack_1bc = s__d__d__c_100a17a0;
                local_1c0 = uVar11;
                iVar10 = FUN_10086210(&local_1c0,0x14);
                if (iVar10 != 2) {
                  local_1b0 = (undefined1 *)((int)&uStack_178 + 1);
                  pcStack_1bc = s____d____d____c_100a1790;
                  local_1c0 = uVar11;
                  local_1b8 = pppppppcVar3;
                  local_1b4 = pppppppcVar2;
                  iVar10 = FUN_10086210(&local_1c0,0x14);
                  if (iVar10 != 2) {
                    cVar6 = '\0';
                  }
                  goto LAB_10052fe8;
                }
                *pppppppcVar3 = (code ******)0xffffffff;
                *pppppppcVar2 = (code ******)((uint)local_168 | (int)local_16c << 0x10);
                goto LAB_10052b6c;
              }
            }
LAB_10052ab8:
            cVar6 = '\0';
          }
          else {
            uVar12 = FUN_10083500(uVar8,s_cursorscalefactor_100a1768);
            if ((int)uVar12 != 0) goto LAB_10052880;
            if (uVar7 == 0 && pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xaa;
              goto LAB_100526b8;
            }
          }
        }
      }
    }
    else {
      iVar10 = FUN_10083500(uVar8,s_resampling_100a1638);
      if (iVar10 == 0) {
        if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 != (code *)0x1) goto LAB_10052ab8;
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_03)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_10083500(uVar11,s_pointsampled_100a0e80);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100523d8:
            *puVar14 = 0;
            goto LAB_10052fe8;
          }
          iVar10 = FUN_10083500(uVar11,s_bilinear_100a0e90);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_100523fc:
            uVar11 = 1;
          }
          else {
            iVar10 = FUN_10083500(uVar11,s_bicubic_100a1648);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_10052424:
              uVar11 = 2;
            }
            else {
              iVar10 = FUN_10083500(uVar11,0x100a1650);
              if (iVar10 == 0) {
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_10052448:
                uVar11 = 3;
              }
              else {
                iVar10 = FUN_10083500(uVar11,0x100a1660);
                if (iVar10 != 0) goto LAB_10052ab8;
                puVar14 = (undefined4 *)(local_190 + 0xca);
LAB_1005246c:
                uVar11 = 4;
              }
            }
          }
          *puVar14 = uVar11;
        }
      }
      else if ((local_17c < 0x279) ||
              (iVar10 = FUN_10083500(uVar8,s_presentationmodel_100a1670), iVar10 != 0)) {
        if ((local_17c < 0x281) || (iVar10 = FUN_10083500(uVar8,s_colorspace_100a16b8), iVar10 != 0)
           ) {
          if ((local_17c < 0x287) ||
             (uVar12 = FUN_10083500(uVar8,s_watermarkdisplayduration_100a1718), (int)uVar12 != 0))
          goto LAB_100526cc;
          if (uVar7 == 0) {
            if (pcVar9 != (code *)0x0) {
              iVar10 = local_190 + 0xd6;
              goto LAB_100526b8;
            }
            goto LAB_10052ab8;
          }
        }
        else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
          if (pcVar9 == (code *)0x1) {
            uVar11 = (*(code *)local_180)();
            uVar11 = (*extraout_w11_05)(uVar11,local_188,uVar17,0);
            iVar10 = FUN_10083500(uVar11,s_appdriven_100a0b50);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100523d8;
            }
            iVar10 = FUN_10083500(uVar11,0x100a16c8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_100523fc;
            }
            iVar10 = FUN_10083500(uVar11,s_argb2101010_sdr_100a16d8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_10052424;
            }
            iVar10 = FUN_10083500(uVar11,s_argb2101010_sdr_wcg_100a16e8);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_10052448;
            }
            iVar10 = FUN_10083500(uVar11,0x100a1700);
            if (iVar10 == 0) {
              puVar14 = (undefined4 *)(local_190 + 0xd2);
              goto LAB_1005246c;
            }
          }
          goto LAB_10052ab8;
        }
      }
      else if (uVar7 == 0 && pcVar9 != (code *)0x0) {
        if (pcVar9 == (code *)0x1) {
          (*(code *)pppppppcVar2)();
          uVar11 = (*extraout_w11_04)(uVar4,uVar11,uVar17,0);
          iVar10 = FUN_10083500(uVar11,0x100a13f8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100523d8;
          }
          iVar10 = FUN_10083500(uVar11,s_discard_100a1688);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_100523fc;
          }
          iVar10 = FUN_10083500(uVar11,0x100a1690);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_10052424;
          }
          iVar10 = FUN_10083500(uVar11,s_flip_discard_100a1698);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_10052448;
          }
          iVar10 = FUN_10083500(uVar11,s_flip_seq_100a16a8);
          if (iVar10 == 0) {
            puVar14 = (undefined4 *)(local_190 + 0xce);
            goto LAB_1005246c;
          }
        }
        goto LAB_10052ab8;
      }
    }
LAB_10052fe8:
    uVar17 = uVar17 + 1;
    if (cVar6 == '\0') {
      return '\0';
    }
  } while( true );
}

