/*
 * FUN_1004fcf0 at 1004fcf0
 * undefined FUN_1004fcf0(void)
 * Address ranges: 1004fcf0-10050483
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004fcf0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint uVar10;
  char local_50 [4];
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_44;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar3 = '\x01';
  uVar10 = 0;
  local_4c = param_2;
  local_48 = param_5;
  do {
    (*pcVar2)();
    uVar4 = (*extraout_w11)(param_3,param_4);
    if (uVar4 <= uVar10) {
      return cVar3;
    }
    (*pcVar2)();
    uVar5 = (*extraout_w11_00)(param_3,param_4,uVar10);
    local_44 = uVar5;
    (*pcVar2)();
    uVar4 = (*extraout_w11_01)(param_3,param_4,uVar10);
    (*pcVar2)();
    iVar6 = (*extraout_w11_02)(param_3,param_4,uVar10);
    iVar7 = FUN_10083500(uVar5,s_outputapi_100a0b78);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        if (uVar4 != 1) goto LAB_1005022c;
        (*pcVar2)();
        uVar5 = (*extraout_w11_03)(param_3,param_4,uVar10,0);
        iVar6 = FUN_10083500(uVar5,&DAT_100a0b88);
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else {
          iVar6 = FUN_10083500(uVar5,0x100a0b98);
          if (iVar6 == 0) {
            uVar5 = 1;
          }
          else {
            iVar6 = FUN_10083500(uVar5,0x100a0ba8);
            if (iVar6 == 0) {
              uVar5 = 2;
            }
            else {
              iVar6 = FUN_10083500(uVar5,0x100a0bb8);
              if (iVar6 == 0) {
                uVar5 = 4;
              }
              else {
                iVar6 = FUN_10083500(uVar5,0x100a0bc8);
                if (local_48 < 0x264 || iVar6 != 0) {
                  iVar6 = FUN_10083500(uVar5,0x100a0bd8);
                  if (iVar6 != 0) {
                    iVar6 = FUN_10083500(uVar5,s_bestavailable_100a0be8);
                    puVar9 = local_4c;
                    if (iVar6 == 0) goto LAB_1004ff14;
                    goto LAB_10050230;
                  }
                  uVar5 = 6;
                }
                else {
                  uVar5 = 5;
                }
              }
            }
          }
        }
        *local_4c = uVar5;
      }
    }
    else {
      iVar7 = FUN_10083500(uVar5,s_adapters_100a0bf8);
      if (iVar7 == 0) {
        if (iVar6 == 0) {
          if (uVar4 == 1) {
            puVar9 = local_4c + 1;
            (*pcVar2)();
            uVar5 = (*extraout_w11_04)(param_3,param_4,uVar10,0);
            pcVar1 = (char *)0x100a0c04;
LAB_1004ff7c:
            iVar6 = FUN_10083500(uVar5,pcVar1);
            if (iVar6 == 0) {
              *puVar9 = 0;
            }
            else {
              (*pcVar2)();
              cVar3 = (*extraout_w11_05)(param_3,param_4,uVar10,0,puVar9);
            }
          }
          else {
LAB_1005022c:
            if (1 < uVar4) {
LAB_10050230:
              cVar3 = '\0';
            }
          }
        }
      }
      else {
        iVar7 = FUN_10083500(uVar5,s_fullscreenoutput_100a0c08);
        if (iVar7 == 0) {
          if (iVar6 == 0) {
            if (uVar4 == 1) {
              puVar9 = local_4c + 2;
              (*pcVar2)();
              uVar5 = (*extraout_w11_06)(param_3,param_4,uVar10,0);
              pcVar1 = s_default_100a0c20;
              goto LAB_1004ff7c;
            }
            goto LAB_1005022c;
          }
        }
        else {
          uVar8 = FUN_10083500(uVar5,s_fullscreenmode_100a0c28);
          uVar5 = local_44;
          if ((int)uVar8 == 0) {
            if (iVar6 == 0 && uVar4 != 0) {
              local_50[0] = '\0';
              cVar3 = FUN_1004f510(uVar8,param_3,param_4,uVar10,local_50,uVar4);
              *(bool *)(local_4c + 8) = local_50[0] == '\0';
            }
          }
          else {
            iVar7 = FUN_10083500(local_44,s_scalingmode_100a0c38);
            if (iVar7 == 0) {
              if (iVar6 == 0) {
                if (uVar4 != 1) goto LAB_1005022c;
                (*pcVar2)();
                uVar5 = (*extraout_w11_07)(param_3,param_4,uVar10,0);
                iVar6 = FUN_10083500(uVar5,s_unspecified_100a0c48);
                if (iVar6 == 0) {
                  puVar9 = local_4c + 7;
LAB_1004ff14:
                  *puVar9 = 0;
                }
                else {
                  iVar6 = FUN_10083500(uVar5,s_centered_100a0c58);
                  if (iVar6 == 0) {
                    puVar9 = local_4c + 7;
                    uVar5 = 1;
                  }
                  else {
                    iVar6 = FUN_10083500(uVar5,s_stretched_100a0c68);
                    if (iVar6 == 0) {
                      puVar9 = local_4c + 7;
                      uVar5 = 2;
                    }
                    else {
                      iVar6 = FUN_10083500(uVar5,s_stretched_ar_100a0c78);
                      if (iVar6 == 0) {
                        puVar9 = local_4c + 7;
                        uVar5 = 3;
                      }
                      else {
                        iVar6 = FUN_10083500(uVar5,s_stretched_4_3_100a0c88);
                        if (iVar6 == 0) {
                          puVar9 = local_4c + 7;
                          uVar5 = 4;
                        }
                        else {
                          iVar6 = FUN_10083500(uVar5,s_stretched_4_3_crt_100a0c98);
                          if (iVar6 == 0) {
                            puVar9 = local_4c + 7;
                            uVar5 = 5;
                          }
                          else {
                            iVar6 = FUN_10083500(uVar5,s_stretched_4_3_c64_100a0cb0);
                            if (iVar6 == 0) {
                              puVar9 = local_4c + 7;
                              uVar5 = 6;
                            }
                            else {
                              iVar6 = FUN_10083500(uVar5,s_centered_ar_100a0cc8);
                              if (iVar6 == 0) {
                                puVar9 = local_4c + 7;
                                uVar5 = 7;
                              }
                              else {
                                iVar6 = FUN_10083500(uVar5,s_stretched_ar_crt_100a0cd8);
                                if (local_48 < 0x276 || iVar6 != 0) goto LAB_10050230;
                                puVar9 = local_4c + 7;
                                uVar5 = 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *puVar9 = uVar5;
                }
              }
            }
            else {
              uVar8 = FUN_10083500(uVar5,s_progressivescanlineorder_100a0cf0);
              if ((int)uVar8 == 0) {
                if (iVar6 == 0 && uVar4 != 0) {
                  local_50[0] = '\0';
                  cVar3 = FUN_1004f510(uVar8,param_3,param_4,uVar10,local_50,uVar4);
                  local_4c[6] = (uint)(local_50[0] != '\0');
                }
              }
              else {
                uVar8 = FUN_10083500(uVar5,s_enumeraterefreshrates_100a0d10);
                if ((int)uVar8 == 0) {
                  if (iVar6 != 0) {
                    return '\0';
                  }
                  cVar3 = '\x01';
                  if (uVar4 != 0) {
                    puVar9 = (undefined4 *)((int)local_4c + 0x22);
                    goto LAB_1005043c;
                  }
                }
                else {
                  uVar8 = FUN_10083500(uVar5,s_brightness_100a0d28);
                  if ((int)uVar8 == 0) {
                    if (iVar6 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 != 0) {
                      puVar9 = local_4c + 3;
LAB_100502e4:
                      cVar3 = FUN_1004f628(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                    }
                  }
                  else {
                    uVar8 = FUN_10083500(uVar5,s_color_100a0d34);
                    if ((int)uVar8 == 0) {
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      cVar3 = '\x01';
                      if (uVar4 != 0) {
                        puVar9 = local_4c + 4;
                        goto LAB_100502e4;
                      }
                    }
                    else {
                      uVar8 = FUN_10083500(uVar5,s_contrast_100a0d40);
                      if ((int)uVar8 == 0) {
                        if (iVar6 != 0) {
                          return '\0';
                        }
                        cVar3 = '\x01';
                        if (uVar4 != 0) {
                          puVar9 = local_4c + 5;
                          goto LAB_100502e4;
                        }
                      }
                      else {
                        uVar8 = FUN_10083500(uVar5,s_inheritcolorprofileinfullscreenm_100a0d50);
                        if ((int)uVar8 == 0) {
                          if (iVar6 != 0) {
                            return '\0';
                          }
                          cVar3 = '\x01';
                          if (uVar4 != 0) {
                            puVar9 = (undefined4 *)((int)local_4c + 0x26);
                            goto LAB_1005043c;
                          }
                        }
                        else {
                          uVar8 = FUN_10083500(uVar5,s_keepwindowaspectratio_100a0d78);
                          if ((int)uVar8 == 0) {
                            if (iVar6 != 0) {
                              return '\0';
                            }
                            cVar3 = '\x01';
                            if (uVar4 != 0) {
                              puVar9 = (undefined4 *)((int)local_4c + 0x21);
                              goto LAB_1005043c;
                            }
                          }
                          else {
                            uVar8 = FUN_10083500(uVar5,s_capturemouse_100a0d90);
                            uVar5 = local_44;
                            if ((int)uVar8 == 0) {
                              if (iVar6 != 0) {
                                return '\0';
                              }
                              cVar3 = '\x01';
                              if (uVar4 != 0) {
                                puVar9 = (undefined4 *)((int)local_4c + 0x23);
                                goto LAB_1005043c;
                              }
                            }
                            else {
                              uVar8 = FUN_10083500(local_44,s_centerappwindow_100a0da0);
                              if ((int)uVar8 == 0) {
                                if (iVar6 != 0) {
                                  return '\0';
                                }
                                cVar3 = '\x01';
                                if (uVar4 != 0) {
                                  puVar9 = local_4c + 9;
LAB_1005043c:
                                  cVar3 = FUN_1004f510(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                                }
                              }
                              else {
                                if (local_48 < 0x285) {
                                  return '\0';
                                }
                                uVar8 = FUN_10083500(uVar5,s_disablescreensaver_100a0db0);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar6 == 0 && uVar4 != 0) {
                                  puVar9 = (undefined4 *)((int)local_4c + 0x25);
                                  goto LAB_1005043c;
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
    uVar10 = uVar10 + 1;
    if (cVar3 == '\0') {
      return '\0';
    }
  } while( true );
}

