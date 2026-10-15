/*
 * FUN_1801efe20 at 1801efe20
 * undefined FUN_1801efe20(void)
 * Address ranges: 1801efe20-1801f04f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801efe20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *pcVar9;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  uint uVar10;
  char local_70 [4];
  uint local_6c;
  undefined4 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 local_50;
  code *pcStack_48;
  
  cVar1 = '\x01';
  uVar10 = 0;
  pcStack_48 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_6c = param_5;
  local_68 = param_4;
  local_50 = param_3;
  do {
    pcVar9 = pcStack_48;
    uVar5 = local_50;
    local_58 = pcStack_48;
    (*pcStack_48)(0x180224000);
    uVar8 = local_68;
    uVar2 = (*extraout_x11)(uVar5,local_68);
    if (uVar2 <= uVar10) {
      return cVar1;
    }
    (*pcVar9)(0x180224000);
    local_60 = (*extraout_x11_00)(uVar5,uVar8,uVar10);
    (*pcVar9)(0x180224000);
    uVar2 = (*extraout_x11_01)(uVar5,uVar8,uVar10);
    (*pcVar9)(0x180224000);
    iVar3 = (*extraout_x11_02)(uVar5,uVar8,uVar10);
    iVar4 = FUN_180222cb8(local_60,s_outputapi_180236ee8);
    if (iVar4 == 0) {
      if (iVar3 == 0) {
        if (uVar2 == 1) {
          (*local_58)(0x180224000);
          uVar5 = (*extraout_x11_03)(uVar5,uVar8,uVar10,0);
          iVar3 = FUN_180222cb8(uVar5,s_d3d11warp_180236f08);
          if (iVar3 == 0) {
            uVar8 = 3;
          }
          else {
            iVar3 = FUN_180222cb8(uVar5,s_d3d11_fl10_0_180236ef8);
            if (iVar3 == 0) {
              uVar8 = 1;
            }
            else {
              iVar3 = FUN_180222cb8(uVar5,s_d3d11_fl10_1_180236f28);
              if (iVar3 == 0) {
                uVar8 = 2;
              }
              else {
                iVar3 = FUN_180222cb8(uVar5,s_d3d11_fl11_0_180236f18);
                if (iVar3 == 0) {
                  uVar8 = 4;
                }
                else {
                  iVar3 = FUN_180222cb8(uVar5,s_d3d12_fl11_0_180236f48);
                  if (local_6c < 0x264 || iVar3 != 0) {
                    iVar3 = FUN_180222cb8(uVar5,s_d3d12_fl12_0_180236f38);
                    if (iVar3 != 0) {
                      iVar3 = FUN_180222cb8(uVar5,s_bestavailable_180236f68);
                      if (iVar3 != 0) goto LAB_1801f02dc;
                      *param_2 = 0;
                      goto LAB_1801f04c8;
                    }
                    uVar8 = 6;
                  }
                  else {
                    uVar8 = 5;
                  }
                }
              }
            }
          }
          *param_2 = uVar8;
        }
        else {
LAB_1801f02d8:
          if (1 < uVar2) goto LAB_1801f02dc;
        }
      }
    }
    else {
      iVar4 = FUN_180222cb8(local_60,s_adapters_180236f58);
      pcVar9 = local_58;
      if (iVar4 == 0) {
        if (iVar3 == 0) {
          if (uVar2 != 1) goto LAB_1801f02d8;
          (*local_58)(0x180224000);
          uVar6 = (*extraout_x11_04)(uVar5,uVar8,uVar10,0);
          iVar3 = FUN_180222cb8(uVar6,&DAT_180236f78);
          if (iVar3 == 0) {
            param_2[1] = 0;
          }
          else {
            (*pcVar9)(0x180224000);
            puVar7 = param_2 + 1;
            pcVar9 = extraout_x11_05;
LAB_1801f009c:
            cVar1 = (*pcVar9)(uVar5,uVar8,uVar10,0,puVar7);
          }
        }
      }
      else {
        iVar4 = FUN_180222cb8(local_60,s_fullscreenoutput_180236f80);
        pcVar9 = local_58;
        if (iVar4 == 0) {
          if (iVar3 == 0) {
            if (uVar2 != 1) goto LAB_1801f02d8;
            (*local_58)(0x180224000);
            uVar6 = (*extraout_x11_06)(uVar5,uVar8,uVar10,0);
            iVar3 = FUN_180222cb8(uVar6,s_default_180236fa8);
            if (iVar3 != 0) {
              (*pcVar9)(0x180224000);
              puVar7 = param_2 + 2;
              pcVar9 = extraout_x11_07;
              goto LAB_1801f009c;
            }
            param_2[2] = 0;
          }
        }
        else {
          uVar6 = FUN_180222cb8(local_60,s_fullscreenmode_180236f98);
          if ((int)uVar6 == 0) {
            if ((iVar3 == 0) && (uVar2 != 0)) {
              local_70[0] = '\0';
              cVar1 = FUN_1801ef878(uVar6,uVar5,uVar8,uVar10,local_70,uVar2);
              *(bool *)(param_2 + 8) = local_70[0] == '\0';
            }
          }
          else {
            iVar4 = FUN_180222cb8(local_60,s_scalingmode_180236fb0);
            if (iVar4 == 0) {
              if (iVar3 == 0) {
                if (uVar2 != 1) goto LAB_1801f02d8;
                (*local_58)(0x180224000);
                uVar5 = (*extraout_x11_08)(uVar5,uVar8,uVar10,0);
                iVar3 = FUN_180222cb8(uVar5,s_unspecified_180236fc0);
                if (iVar3 == 0) {
                  param_2[7] = 0;
                }
                else {
                  iVar3 = FUN_180222cb8(uVar5,s_centered_180236fe0);
                  if (iVar3 == 0) {
                    uVar8 = 1;
                  }
                  else {
                    iVar3 = FUN_180222cb8(uVar5,s_stretched_180236fd0);
                    if (iVar3 == 0) {
                      uVar8 = 2;
                    }
                    else {
                      iVar3 = FUN_180222cb8(uVar5,s_stretched_ar_180237000);
                      if (iVar3 == 0) {
                        uVar8 = 3;
                      }
                      else {
                        iVar3 = FUN_180222cb8(uVar5,s_stretched_4_3_180236ff0);
                        if (iVar3 == 0) {
                          uVar8 = 4;
                        }
                        else {
                          iVar3 = FUN_180222cb8(uVar5,s_stretched_4_3_crt_180237028);
                          if (iVar3 == 0) {
                            uVar8 = 5;
                          }
                          else {
                            iVar3 = FUN_180222cb8(uVar5,s_stretched_4_3_c64_180237010);
                            if (iVar3 == 0) {
                              uVar8 = 6;
                            }
                            else {
                              iVar3 = FUN_180222cb8(uVar5,s_centered_ar_180237058);
                              if (iVar3 == 0) {
                                uVar8 = 7;
                              }
                              else {
                                iVar3 = FUN_180222cb8(uVar5,s_stretched_ar_crt_180237040);
                                if (local_6c < 0x276 || iVar3 != 0) goto LAB_1801f02dc;
                                uVar8 = 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  param_2[7] = uVar8;
                }
              }
            }
            else {
              uVar6 = FUN_180222cb8(local_60,s_progressivescanlineorder_180237068);
              if ((int)uVar6 == 0) {
                if ((iVar3 == 0) && (uVar2 != 0)) {
                  local_70[0] = '\0';
                  cVar1 = FUN_1801ef878(uVar6,uVar5,uVar8,uVar10,local_70,uVar2);
                  param_2[6] = (uint)(local_70[0] != '\0');
                }
              }
              else {
                uVar6 = FUN_180222cb8(local_60,s_enumeraterefreshrates_180237088);
                if ((int)uVar6 == 0) {
                  if (iVar3 == 0) {
                    cVar1 = '\x01';
                    if (uVar2 != 0) {
                      puVar7 = (undefined4 *)((longlong)param_2 + 0x22);
                      goto LAB_1801f04b0;
                    }
                  }
                  else {
LAB_1801f02dc:
                    cVar1 = '\0';
                  }
                }
                else {
                  uVar6 = FUN_180222cb8(local_60,s_brightness_1802370a0);
                  if ((int)uVar6 == 0) {
                    if (iVar3 != 0) goto LAB_1801f02dc;
                    cVar1 = '\x01';
                    if (uVar2 != 0) {
                      puVar7 = param_2 + 3;
LAB_1801f037c:
                      cVar1 = FUN_1801ef980(uVar6,uVar5,uVar8,uVar10,puVar7,uVar2);
                    }
                  }
                  else {
                    uVar6 = FUN_180222cb8(local_60,s_color_18022a3bc);
                    if ((int)uVar6 == 0) {
                      if (iVar3 != 0) goto LAB_1801f02dc;
                      cVar1 = '\x01';
                      if (uVar2 != 0) {
                        puVar7 = param_2 + 4;
                        goto LAB_1801f037c;
                      }
                    }
                    else {
                      uVar6 = FUN_180222cb8(local_60,s_contrast_1802370b0);
                      if ((int)uVar6 == 0) {
                        if (iVar3 != 0) goto LAB_1801f02dc;
                        cVar1 = '\x01';
                        if (uVar2 != 0) {
                          puVar7 = param_2 + 5;
                          goto LAB_1801f037c;
                        }
                      }
                      else {
                        uVar6 = FUN_180222cb8(local_60,s_inheritcolorprofileinfullscreenm_1802370c0)
                        ;
                        if ((int)uVar6 == 0) {
                          if (iVar3 != 0) goto LAB_1801f02dc;
                          cVar1 = '\x01';
                          if (uVar2 != 0) {
                            puVar7 = (undefined4 *)((longlong)param_2 + 0x26);
                            goto LAB_1801f04b0;
                          }
                        }
                        else {
                          uVar6 = FUN_180222cb8(local_60,s_keepwindowaspectratio_1802370e8);
                          if ((int)uVar6 == 0) {
                            if (iVar3 != 0) goto LAB_1801f02dc;
                            cVar1 = '\x01';
                            if (uVar2 != 0) {
                              puVar7 = (undefined4 *)((longlong)param_2 + 0x21);
                              goto LAB_1801f04b0;
                            }
                          }
                          else {
                            uVar6 = FUN_180222cb8(local_60,s_capturemouse_180237100);
                            if ((int)uVar6 == 0) {
                              if (iVar3 != 0) goto LAB_1801f02dc;
                              cVar1 = '\x01';
                              if (uVar2 != 0) {
                                puVar7 = (undefined4 *)((longlong)param_2 + 0x23);
                                goto LAB_1801f04b0;
                              }
                            }
                            else {
                              uVar6 = FUN_180222cb8(local_60,s_centerappwindow_180237110);
                              if ((int)uVar6 == 0) {
                                if (iVar3 != 0) goto LAB_1801f02dc;
                                cVar1 = '\x01';
                                if (uVar2 != 0) {
                                  puVar7 = param_2 + 9;
                                  goto LAB_1801f04b0;
                                }
                              }
                              else {
                                if ((local_6c < 0x285) ||
                                   (uVar6 = FUN_180222cb8(local_60,s_disablescreensaver_180237120),
                                   (int)uVar6 != 0)) {
                                  return '\0';
                                }
                                if ((iVar3 == 0) && (uVar2 != 0)) {
                                  puVar7 = (undefined4 *)((longlong)param_2 + 0x25);
LAB_1801f04b0:
                                  cVar1 = FUN_1801ef878(uVar6,uVar5,uVar8,uVar10,puVar7,uVar2);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_1801f04c8:
    uVar10 = uVar10 + 1;
    if (cVar1 == '\0') {
      return '\0';
    }
  } while( true );
}

