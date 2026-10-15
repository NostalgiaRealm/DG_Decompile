/*
 * FUN_1801f2160 at 1801f2160
 * undefined FUN_1801f2160(void)
 * Address ranges: 1801f2160-1801f2db7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801f2160(undefined8 param_1,code *param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  undefined4 uVar9;
  uint uVar10;
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
  code *pcVar11;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  char cVar12;
  uint uVar13;
  undefined1 *local_1a0 [2];
  char local_180 [4];
  undefined4 local_17c;
  uint local_178;
  undefined1 uStack_174;
  undefined1 auStack_173 [3];
  uint local_170 [2];
  code *local_168;
  code *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 auStack_140 [256];
  
  local_148 = 3;
  if (param_5 != 0x279) {
    local_148 = 1;
  }
  local_160 = (code *)__hybrid_os_arm64x_dispatch_icall;
  cVar1 = '\x01';
  uVar13 = 0;
  local_17c = param_4;
  local_178 = param_5;
LAB_1801f21b0:
  local_168 = local_160;
  (*local_160)();
  uVar9 = local_17c;
  uVar2 = (*extraout_x11)(param_3,local_17c);
  if (uVar2 <= uVar13) {
    return cVar1;
  }
  (*local_168)();
  uVar5 = (*extraout_x11_00)(param_3,uVar9,uVar13);
  (*local_168)();
  uVar2 = (*extraout_x11_01)(param_3,uVar9,uVar13);
  (*local_168)();
  uVar3 = (*extraout_x11_02)(param_3,uVar9,uVar13);
  if (local_178 < 0x263) {
    uVar6 = FUN_180222cb8(uVar5,s_forcenearestpointfilter_1802379a0);
    if ((int)uVar6 == 0) {
      if ((uVar3 == 0) && (uVar2 != 0)) {
        local_180[0] = '\0';
        cVar1 = FUN_1801ef878(uVar6,param_3,local_17c,uVar13,local_180,uVar2);
        *(uint *)(param_2 + 0xca) = (uint)(local_180[0] == '\0');
      }
    }
    else {
LAB_1801f25c4:
      uVar6 = FUN_180222cb8(uVar5,s_deframersize_180237ab0);
      if ((int)uVar6 == 0) {
        if ((uVar3 == 0) && (uVar2 != 0)) {
          pcVar8 = param_2 + 0x9e;
LAB_1801f25ac:
          cVar1 = FUN_1801ef980(uVar6,param_3,local_17c,uVar13,pcVar8,uVar2);
        }
      }
      else {
        uVar6 = FUN_180222cb8(uVar5,s_imagescalefactor_180237ac0);
        uVar9 = local_17c;
        if ((int)uVar6 == 0) {
          if (uVar2 == 0) {
            uVar2 = 0;
            if (uVar3 != 0) {
              do {
                local_170[0] = uVar3;
                pcVar8 = local_160;
                (*local_160)(0x180224000);
                uVar5 = (*extraout_x11_06)(param_3,uVar9,uVar13,uVar2);
                iVar4 = FUN_180222cb8(uVar5,&DAT_18022a3b4);
                if (iVar4 == 0) {
                  (*pcVar8)(0x180224000);
                  pcVar8 = param_2 + 0xa2;
                  pcVar11 = extraout_x11_07;
LAB_1801f26c0:
                  cVar1 = (*pcVar11)(param_3,uVar9,uVar13,uVar2,pcVar8);
                }
                else {
                  iVar4 = FUN_180222cb8(uVar5,&DAT_18022a3b8);
                  if (iVar4 == 0) {
                    (*pcVar8)(0x180224000);
                    pcVar8 = param_2 + 0xa6;
                    pcVar11 = extraout_x11_08;
                    goto LAB_1801f26c0;
                  }
                  cVar1 = '\0';
                }
                uVar2 = uVar2 + 1;
                uVar3 = local_170[0];
              } while (uVar2 < local_170[0]);
            }
          }
          else if (uVar3 == 0) {
            cVar1 = FUN_1801ef980(uVar6,param_3,local_17c,uVar13,param_2 + 0xa2,uVar2);
            *(undefined4 *)(param_2 + 0xa6) = *(undefined4 *)(param_2 + 0xa2);
          }
        }
        else if (local_178 < 0x274) {
          if (0x261 < local_178) goto LAB_1801f272c;
LAB_1801f291c:
          iVar4 = FUN_180222cb8(uVar5,s_desktopresolution_180237b20);
          if (iVar4 == 0) {
            if (uVar3 != 0) {
              return '\0';
            }
            cVar1 = '\x01';
            if (uVar2 != 1) {
              if (uVar2 == 0) goto LAB_1801f2d88;
              goto LAB_1801f2914;
            }
            (*local_160)();
            uVar5 = (*extraout_x11_12)(param_3,local_17c,uVar13,0);
            local_158 = 0;
            uVar7 = FUN_1801ef9d8(uVar5,&local_154,&uStack_150,&local_158,&local_14c);
            if ((uVar7 & 1) != 0) {
              uVar13 = uVar13 + 1;
              *(undefined4 *)(param_2 + 0x8a) = local_154;
              *(undefined4 *)(param_2 + 0x8e) = uStack_150;
              *(undefined4 *)(param_2 + 0x92) = local_158;
              *(undefined4 *)(param_2 + 0x96) = local_14c;
              goto LAB_1801f21b0;
            }
          }
          else {
            if ((0x25f < local_178) &&
               (uVar6 = FUN_180222cb8(uVar5,s_desktopbitdepth_180237b38), (int)uVar6 == 0)) {
              if ((uVar3 == 0) && (uVar2 != 0)) {
                pcVar8 = param_2 + 0x9a;
                goto LAB_1801f25ac;
              }
              goto LAB_1801f2d88;
            }
            uVar6 = FUN_180222cb8(uVar5,s_freemouse_180237b48);
            if ((int)uVar6 == 0) {
              if ((uVar3 == 0) && (uVar2 != 0)) {
                cVar1 = FUN_1801ef878(uVar6,param_3,local_17c,uVar13,param_2 + 0xe6,uVar2);
              }
              goto LAB_1801f2d88;
            }
            iVar4 = FUN_180222cb8(uVar5,s_fpslimit_180237b58);
            if (iVar4 != 0) {
              iVar4 = FUN_180222cb8(uVar5,s_environment_180237b68);
              if (iVar4 == 0) {
                if (uVar3 == 0 && uVar2 != 0) {
                  if (uVar2 != 1) goto LAB_1801f2914;
                  (*local_160)();
                  uVar5 = (*extraout_x11_14)(param_3,local_17c,uVar13,0);
                  iVar4 = FUN_180222cb8(uVar5,s_dosbox_180237b74);
                  if (iVar4 == 0) {
                    uVar9 = 1;
                  }
                  else {
                    iVar4 = FUN_180222cb8(uVar5,&DAT_180237b94);
                    if (iVar4 != 0) goto LAB_1801f2914;
                    uVar9 = 2;
                  }
                  *(undefined4 *)(param_2 + 0xbe) = uVar9;
                }
              }
              else {
                iVar4 = FUN_180222cb8(uVar5,s_windowedattributes_180237b80);
                if (iVar4 == 0) {
                  if (uVar3 == 0) {
                    *(undefined4 *)(param_2 + 0xc2) = 0;
                    uVar3 = 0;
                    if (uVar2 != 0) {
                      do {
                        (*local_160)();
                        uVar5 = (*extraout_x11_15)(param_3,local_17c,uVar13,uVar3);
                        iVar4 = FUN_180222cb8(uVar5,s_borderless_180237ba0);
                        if (iVar4 == 0) {
                          uVar10 = *(uint *)(param_2 + 0xc2) | 1;
LAB_1801f2bc0:
                          *(uint *)(param_2 + 0xc2) = uVar10;
                        }
                        else {
                          iVar4 = FUN_180222cb8(uVar5,s_alwaysontop_180237bc0);
                          if (iVar4 == 0) {
                            uVar10 = *(uint *)(param_2 + 0xc2) | 2;
                            goto LAB_1801f2bc0;
                          }
                          iVar4 = FUN_180222cb8(uVar5,s_fullscreensize_180237bb0);
                          if (iVar4 == 0) {
                            uVar10 = *(uint *)(param_2 + 0xc2) | 4;
                            goto LAB_1801f2bc0;
                          }
                          cVar1 = '\0';
                        }
                        uVar3 = uVar3 + 1;
                      } while (uVar3 < uVar2);
                    }
                  }
                }
                else if ((local_178 < 0x273) ||
                        (iVar4 = FUN_180222cb8(uVar5,s_fullscreenattributes_180237bd0),
                        pcVar8 = local_160, uVar9 = local_17c, iVar4 != 0)) {
                  if (local_178 < 0x280) {
                    if (0x279 < local_178) {
                      return '\0';
                    }
                    uVar5 = FUN_180222cb8(uVar5,s_enablegdihooking_180237c08);
                    if ((int)uVar5 != 0) {
                      return '\0';
                    }
                    if ((uVar3 == 0) && (uVar2 != 0)) {
                      local_180[0] = '\0';
                      cVar1 = FUN_1801ef878(uVar5,param_3,local_17c,uVar13,local_180,uVar2);
                      uVar9 = local_148;
                      if (local_180[0] == '\0') {
                        uVar9 = 0;
                      }
                      *(undefined4 *)(param_2 + 0xe2) = uVar9;
                    }
                  }
                  else {
                    iVar4 = FUN_180222cb8(uVar5,s_systemhookflags_180237be8);
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    if (uVar3 == 0) {
                      *(undefined4 *)(param_2 + 0xe2) = 0;
                      uVar3 = 0;
                      if (uVar2 != 0) {
                        do {
                          (*local_160)();
                          uVar5 = (*extraout_x11_17)(param_3,local_17c,uVar13,uVar3);
                          iVar4 = FUN_180222cb8(uVar5,&DAT_180237c00);
                          if (iVar4 == 0) {
                            uVar10 = *(uint *)(param_2 + 0xe2) | 1;
LAB_1801f2d14:
                            *(uint *)(param_2 + 0xe2) = uVar10;
                          }
                          else {
                            iVar4 = FUN_180222cb8(uVar5,s_cursor_180237c1c);
                            if (iVar4 == 0) {
                              uVar10 = *(uint *)(param_2 + 0xe2) | 2;
                              goto LAB_1801f2d14;
                            }
                            cVar1 = '\0';
                          }
                          uVar3 = uVar3 + 1;
                        } while (uVar3 < uVar2);
                      }
                    }
                  }
                }
                else if (uVar3 == 0) {
                  *(undefined4 *)(param_2 + 0xc6) = 0;
                  uVar3 = 0;
                  local_168 = param_2;
                  if (uVar2 != 0) {
                    do {
                      (*pcVar8)(0x180224000);
                      uVar5 = (*extraout_x11_16)(param_3,uVar9,uVar13,uVar3);
                      iVar4 = FUN_180222cb8(uVar5,&DAT_180237bf8);
                      if (iVar4 == 0) {
                        *(uint *)(local_168 + 0xc6) = *(uint *)(local_168 + 0xc6) | 1;
                      }
                      else {
                        cVar1 = '\0';
                      }
                      uVar3 = uVar3 + 1;
                      param_2 = local_168;
                    } while (uVar3 < uVar2);
                  }
                }
              }
              goto LAB_1801f2d88;
            }
            if (uVar3 != 0 || uVar2 == 0) goto LAB_1801f2d88;
            if (uVar2 == 1) {
              (*local_160)();
              uVar5 = (*extraout_x11_13)(param_3,local_17c,uVar13,0);
              uVar7 = FUN_1801fa898(uVar5,param_2 + 0xda,param_2 + 0xde);
              if ((uVar7 & 1) != 0) {
                cVar1 = '\x01';
                goto LAB_1801f2d88;
              }
            }
          }
LAB_1801f2914:
          cVar1 = '\0';
        }
        else {
          uVar6 = FUN_180222cb8(uVar5,s_cursorscalefactor_180237ad8);
          if ((int)uVar6 == 0) {
            if ((uVar3 == 0) && (uVar2 != 0)) {
              pcVar8 = param_2 + 0xaa;
              goto LAB_1801f25ac;
            }
          }
          else {
LAB_1801f272c:
            iVar4 = FUN_180222cb8(uVar5,s_displayroi_180237af0);
            uVar9 = local_17c;
            if (iVar4 != 0) goto LAB_1801f291c;
            uVar10 = 0;
            if (uVar3 != 0) {
              local_168 = (code *)CONCAT44(local_168._4_4_,uVar2);
              local_170[0] = uVar3;
              cVar12 = cVar1;
              do {
                pcVar8 = local_160;
                (*local_160)(0x180224000);
                uVar5 = (*extraout_x11_09)(param_3,uVar9,uVar13,uVar10);
                iVar4 = FUN_180222cb8(uVar5,&DAT_180237aec);
                cVar1 = cVar12;
                if (iVar4 == 0) {
                  (*pcVar8)(0x180224000);
                  uVar5 = (*extraout_x11_10)(param_3,uVar9,uVar13,uVar10);
                  iVar4 = FUN_180223228(uVar5,s__s__c_1802376a8,auStack_140,&uStack_174,local_1a0,0)
                  ;
                  if ((iVar4 == 1) &&
                     (iVar4 = FUN_180222cb8(auStack_140,s_centered_180236fe0), iVar4 == 0)) {
                    *(undefined4 *)(param_2 + 0xae) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0xb2) = 0xffffffff;
                  }
                  else {
                    local_1a0[0] = &uStack_174;
                    iVar4 = FUN_180223228(uVar5,s____d____d____c_180237b10,param_2 + 0xae,
                                          param_2 + 0xb2,local_1a0,8);
                    cVar1 = '\0';
                    if (iVar4 == 2) {
                      cVar1 = cVar12;
                    }
                  }
                }
                uVar10 = uVar10 + 1;
                cVar12 = cVar1;
              } while (uVar10 < local_170[0]);
              uVar2 = (uint)local_168;
              uVar3 = local_170[0];
            }
            if (cVar1 != '\0') {
              if (uVar2 == 0) {
                if (uVar3 != 0) goto LAB_1801f2914;
              }
              else {
                if (uVar2 != 1) goto LAB_1801f2914;
                local_170[0] = 0;
                local_168 = (code *)((ulonglong)local_168 & 0xffffffff00000000);
                (*local_160)();
                uVar5 = (*extraout_x11_11)(param_3,local_17c,uVar13,0);
                local_1a0[0] = auStack_173;
                iVar4 = FUN_180223228(uVar5,s__d__d__c_180237b00,local_170,&local_168,local_1a0,8);
                if (iVar4 == 2) {
                  *(undefined4 *)(param_2 + 0xb6) = 0xffffffff;
                  *(uint *)(param_2 + 0xba) = (uint)local_168 | local_170[0] << 0x10;
                }
                else {
                  local_1a0[0] = auStack_173;
                  iVar4 = FUN_180223228(uVar5,s____d____d____c_180237b10,param_2 + 0xb6,
                                        param_2 + 0xba,local_1a0,8);
                  if (iVar4 != 2) {
                    cVar1 = '\0';
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar4 = FUN_180222cb8(uVar5,s_resampling_1802379b8);
    if (iVar4 == 0) {
      if (uVar3 == 0 && uVar2 != 0) {
        if (uVar2 != 1) goto LAB_1801f2914;
        (*local_168)();
        uVar5 = (*extraout_x11_03)(param_3,local_17c,uVar13,0);
        iVar4 = FUN_180222cb8(uVar5,s_pointsampled_180237200);
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0xca) = 0;
        }
        else {
          iVar4 = FUN_180222cb8(uVar5,s_bilinear_1802371f0);
          if (iVar4 == 0) {
            uVar9 = 1;
          }
          else {
            iVar4 = FUN_180222cb8(uVar5,s_bicubic_1802379c8);
            if (iVar4 == 0) {
              uVar9 = 2;
            }
            else {
              iVar4 = FUN_180222cb8(uVar5,s_lanczos_2_1802379e0);
              if (iVar4 == 0) {
                uVar9 = 3;
              }
              else {
                iVar4 = FUN_180222cb8(uVar5,s_lanczos_3_1802379d0);
                if (iVar4 != 0) goto LAB_1801f2914;
                uVar9 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0xca) = uVar9;
        }
      }
    }
    else if ((local_178 < 0x279) ||
            (iVar4 = FUN_180222cb8(uVar5,s_presentationmodel_1802379f0), iVar4 != 0)) {
      if ((local_178 < 0x281) || (iVar4 = FUN_180222cb8(uVar5,s_colorspace_180237a30), iVar4 != 0))
      {
        if ((local_178 < 0x287) ||
           (uVar6 = FUN_180222cb8(uVar5,s_watermarkdisplayduration_180237a90), (int)uVar6 != 0))
        goto LAB_1801f25c4;
        if (uVar3 == 0) {
          if (uVar2 == 0) goto LAB_1801f2914;
          pcVar8 = param_2 + 0xd6;
          goto LAB_1801f25ac;
        }
      }
      else if (uVar3 == 0 && uVar2 != 0) {
        if (uVar2 != 1) goto LAB_1801f2914;
        (*local_160)();
        uVar5 = (*extraout_x11_05)(param_3,local_17c,uVar13,0);
        iVar4 = FUN_180222cb8(uVar5,s_appdriven_180236ec0);
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0xd2) = 0;
        }
        else {
          iVar4 = FUN_180222cb8(uVar5,s_argb8888_sdr_180237a50);
          if (iVar4 == 0) {
            uVar9 = 1;
          }
          else {
            iVar4 = FUN_180222cb8(uVar5,s_argb2101010_sdr_180237a40);
            if (iVar4 == 0) {
              uVar9 = 2;
            }
            else {
              iVar4 = FUN_180222cb8(uVar5,s_argb2101010_sdr_wcg_180237a78);
              if (iVar4 == 0) {
                uVar9 = 3;
              }
              else {
                iVar4 = FUN_180222cb8(uVar5,s_argb16161616_hdr_180237a60);
                if (iVar4 != 0) goto LAB_1801f2914;
                uVar9 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0xd2) = uVar9;
        }
      }
    }
    else if (uVar3 == 0 && uVar2 != 0) {
      if (uVar2 != 1) goto LAB_1801f2914;
      (*local_168)();
      uVar5 = (*extraout_x11_04)(param_3,local_17c,uVar13,0);
      iVar4 = FUN_180222cb8(uVar5,&DAT_180237774);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0xce) = 0;
      }
      else {
        iVar4 = FUN_180222cb8(uVar5,s_discard_180237a08);
        if (iVar4 == 0) {
          uVar9 = 1;
        }
        else {
          iVar4 = FUN_180222cb8(uVar5,&DAT_180237a04);
          if (iVar4 == 0) {
            uVar9 = 2;
          }
          else {
            iVar4 = FUN_180222cb8(uVar5,s_flip_discard_180237a20);
            if (iVar4 == 0) {
              uVar9 = 3;
            }
            else {
              iVar4 = FUN_180222cb8(uVar5,s_flip_seq_180237a10);
              if (iVar4 != 0) goto LAB_1801f2914;
              uVar9 = 4;
            }
          }
        }
        *(undefined4 *)(param_2 + 0xce) = uVar9;
      }
    }
  }
LAB_1801f2d88:
  uVar13 = uVar13 + 1;
  if (cVar1 == '\0') {
    return '\0';
  }
  goto LAB_1801f21b0;
}

