/*
 * FUN_1800d1d00 at 1800d1d00
 * undefined FUN_1800d1d00(void)
 * Address ranges: 1800d1d00-1800d2367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d1d00(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  char local_60 [4];
  undefined4 local_5c;
  longlong *local_58;
  
  cVar2 = '\x01';
  uVar10 = 0;
  local_5c = param_4;
  local_58 = param_3;
  do {
    plVar1 = local_58;
    uVar9 = local_5c;
    uVar3 = (**(code **)(*local_58 + 0x38))(local_58,local_5c);
    if (uVar3 <= uVar10) {
      return cVar2;
    }
    uVar6 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar9,uVar10);
    uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar9,uVar10);
    iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,uVar9,uVar10);
    iVar5 = func_0x000180222cb8(uVar6,s_outputapi_18023a0f8);
    if (iVar5 == 0) {
      if (iVar4 == 0) {
        if (uVar3 == 1) {
          uVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar9,uVar10,0);
          iVar4 = func_0x000180222cb8(uVar6,s_d3d11warp_18023a118);
          if (iVar4 == 0) {
            *param_2 = 3;
          }
          else {
            iVar4 = func_0x000180222cb8(uVar6,s_d3d11_fl10_0_18023a108);
            if (iVar4 == 0) {
              uVar9 = 1;
            }
            else {
              iVar4 = func_0x000180222cb8(uVar6,s_d3d11_fl10_1_18023a138);
              if (iVar4 == 0) {
                uVar9 = 2;
              }
              else {
                iVar4 = func_0x000180222cb8(uVar6,s_d3d11_fl11_0_18023a128);
                if (iVar4 == 0) {
                  uVar9 = 4;
                }
                else {
                  iVar4 = func_0x000180222cb8(uVar6,s_d3d12_fl11_0_18023a158);
                  if (param_5 < 0x264 || iVar4 != 0) {
                    iVar4 = func_0x000180222cb8(uVar6,s_d3d12_fl12_0_18023a148);
                    if (iVar4 != 0) {
                      iVar4 = func_0x000180222cb8(uVar6,s_bestavailable_18023a178);
                      if (iVar4 != 0) goto LAB_1800d2124;
                      *param_2 = 0;
                      goto LAB_1800d2338;
                    }
                    uVar9 = 6;
                  }
                  else {
                    uVar9 = 5;
                  }
                }
              }
            }
            *param_2 = uVar9;
          }
        }
        else {
LAB_1800d2120:
          if (1 < uVar3) goto LAB_1800d2124;
        }
      }
    }
    else {
      iVar5 = func_0x000180222cb8(uVar6,s_adapters_18023a168);
      if (iVar5 == 0) {
        if (iVar4 == 0) {
          if (uVar3 != 1) goto LAB_1800d2120;
          uVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar9,uVar10,0);
          iVar4 = func_0x000180222cb8(uVar6,&DAT_18023a188);
          if (iVar4 == 0) {
            param_2[1] = 0;
          }
          else {
            puVar8 = param_2 + 1;
LAB_1800d1f14:
            cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar9,uVar10,0,puVar8);
          }
        }
      }
      else {
        iVar5 = func_0x000180222cb8(uVar6,s_fullscreenoutput_18023a190);
        if (iVar5 == 0) {
          if (iVar4 == 0) {
            if (uVar3 != 1) goto LAB_1800d2120;
            uVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar9,uVar10,0);
            iVar4 = func_0x000180222cb8(uVar6,s_default_18023a1b8);
            if (iVar4 != 0) {
              puVar8 = param_2 + 2;
              goto LAB_1800d1f14;
            }
            param_2[2] = 0;
          }
        }
        else {
          uVar7 = func_0x000180222cb8(uVar6,s_fullscreenmode_18023a1a8);
          if ((int)uVar7 == 0) {
            if ((iVar4 == 0) && (uVar3 != 0)) {
              local_60[0] = '\0';
              cVar2 = FUN_1800d1868(uVar7,plVar1,uVar9,uVar10,local_60,uVar3);
              *(bool *)(param_2 + 8) = local_60[0] == '\0';
            }
          }
          else {
            iVar5 = func_0x000180222cb8(uVar6,s_scalingmode_18023a1c0);
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                if (uVar3 != 1) goto LAB_1800d2120;
                uVar6 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar9,uVar10,0);
                iVar4 = func_0x000180222cb8(uVar6,s_unspecified_18023a1d0);
                if (iVar4 == 0) {
                  param_2[7] = 0;
                }
                else {
                  iVar4 = func_0x000180222cb8(uVar6,s_centered_18023a1f0);
                  if (iVar4 == 0) {
                    uVar9 = 1;
                  }
                  else {
                    iVar4 = func_0x000180222cb8(uVar6,s_stretched_18023a1e0);
                    if (iVar4 == 0) {
                      uVar9 = 2;
                    }
                    else {
                      iVar4 = func_0x000180222cb8(uVar6,s_stretched_ar_18023a210);
                      if (iVar4 == 0) {
                        param_2[7] = 3;
                        goto LAB_1800d2338;
                      }
                      iVar4 = func_0x000180222cb8(uVar6,s_stretched_4_3_18023a200);
                      if (iVar4 == 0) {
                        uVar9 = 4;
                      }
                      else {
                        iVar4 = func_0x000180222cb8(uVar6,s_stretched_4_3_crt_18023a238);
                        if (iVar4 == 0) {
                          uVar9 = 5;
                        }
                        else {
                          iVar4 = func_0x000180222cb8(uVar6,s_stretched_4_3_c64_18023a220);
                          if (iVar4 == 0) {
                            uVar9 = 6;
                          }
                          else {
                            iVar4 = func_0x000180222cb8(uVar6,s_centered_ar_18023a268);
                            if (iVar4 == 0) {
                              uVar9 = 7;
                            }
                            else {
                              iVar4 = func_0x000180222cb8(uVar6,s_stretched_ar_crt_18023a250);
                              if (param_5 < 0x276 || iVar4 != 0) goto LAB_1800d2124;
                              uVar9 = 8;
                            }
                          }
                        }
                      }
                    }
                  }
                  param_2[7] = uVar9;
                }
              }
            }
            else {
              uVar7 = func_0x000180222cb8(uVar6,s_progressivescanlineorder_18023a278);
              if ((int)uVar7 == 0) {
                if ((iVar4 == 0) && (uVar3 != 0)) {
                  local_60[0] = '\0';
                  cVar2 = FUN_1800d1868(uVar7,plVar1,uVar9,uVar10,local_60,uVar3);
                  param_2[6] = (uint)(local_60[0] != '\0');
                }
              }
              else {
                uVar7 = func_0x000180222cb8(uVar6,s_enumeraterefreshrates_18023a298);
                if ((int)uVar7 == 0) {
                  if (iVar4 != 0) goto LAB_1800d2124;
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    puVar8 = (undefined4 *)((longlong)param_2 + 0x22);
                    goto LAB_1800d2320;
                  }
                }
                else {
                  iVar5 = func_0x000180222cb8(uVar6,s_brightness_18023a2b0);
                  if (iVar5 == 0) {
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      if (uVar3 == 1) {
                        puVar8 = param_2 + 3;
LAB_1800d21cc:
                        cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar9,uVar10,0,puVar8);
                        if (cVar2 != '\0') {
                          cVar2 = '\x01';
                          goto LAB_1800d2338;
                        }
                      }
LAB_1800d2124:
                      cVar2 = '\0';
                    }
                  }
                  else {
                    iVar5 = func_0x000180222cb8(uVar6,s_color_180233864);
                    if (iVar5 == 0) {
                      if (iVar4 != 0) {
                        return '\0';
                      }
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        if (uVar3 == 1) {
                          puVar8 = param_2 + 4;
                          goto LAB_1800d21cc;
                        }
                        goto LAB_1800d2124;
                      }
                    }
                    else {
                      iVar5 = func_0x000180222cb8(uVar6,s_contrast_18023a2c0);
                      if (iVar5 == 0) {
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          if (uVar3 == 1) {
                            puVar8 = param_2 + 5;
                            goto LAB_1800d21cc;
                          }
                          goto LAB_1800d2124;
                        }
                      }
                      else {
                        uVar7 = func_0x000180222cb8(uVar6,
                                                  s_inheritcolorprofileinfullscreenm_18023a2d0);
                        if ((int)uVar7 == 0) {
                          if (iVar4 != 0) goto LAB_1800d2124;
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            puVar8 = (undefined4 *)((longlong)param_2 + 0x26);
                            goto LAB_1800d2320;
                          }
                        }
                        else {
                          uVar7 = func_0x000180222cb8(uVar6,s_keepwindowaspectratio_18023a2f8);
                          if ((int)uVar7 == 0) {
                            if (iVar4 != 0) goto LAB_1800d2124;
                            cVar2 = '\x01';
                            if (uVar3 != 0) {
                              puVar8 = (undefined4 *)((longlong)param_2 + 0x21);
                              goto LAB_1800d2320;
                            }
                          }
                          else {
                            uVar7 = func_0x000180222cb8(uVar6,s_capturemouse_18023a310);
                            if ((int)uVar7 == 0) {
                              if (iVar4 != 0) goto LAB_1800d2124;
                              cVar2 = '\x01';
                              if (uVar3 != 0) {
                                puVar8 = (undefined4 *)((longlong)param_2 + 0x23);
                                goto LAB_1800d2320;
                              }
                            }
                            else {
                              uVar7 = func_0x000180222cb8(uVar6,s_centerappwindow_18023a320);
                              if ((int)uVar7 == 0) {
                                if (iVar4 != 0) goto LAB_1800d2124;
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  puVar8 = param_2 + 9;
                                  goto LAB_1800d2320;
                                }
                              }
                              else {
                                if (param_5 < 0x285) {
                                  return '\0';
                                }
                                uVar7 = func_0x000180222cb8(uVar6,s_disablescreensaver_18023a330);
                                if ((int)uVar7 != 0) {
                                  return '\0';
                                }
                                if ((iVar4 == 0) && (uVar3 != 0)) {
                                  puVar8 = (undefined4 *)((longlong)param_2 + 0x25);
LAB_1800d2320:
                                  cVar2 = FUN_1800d1868(uVar7,plVar1,uVar9,uVar10,puVar8,uVar3);
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
LAB_1800d2338:
    uVar10 = uVar10 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

