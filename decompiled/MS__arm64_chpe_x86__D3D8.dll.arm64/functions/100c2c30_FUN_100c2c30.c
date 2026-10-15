/*
 * FUN_100c2c30 at 100c2c30
 * undefined FUN_100c2c30(void)
 * Address ranges: 100c2c30-100c33c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100c2c30(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
    iVar7 = FUN_100fef80(uVar5,s_outputapi_1012d3b8);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        if (uVar4 != 1) goto LAB_100c316c;
        (*pcVar2)();
        uVar5 = (*extraout_w11_03)(param_3,param_4,uVar10,0);
        iVar6 = FUN_100fef80(uVar5,&DAT_1012d3c8);
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else {
          iVar6 = FUN_100fef80(uVar5,0x1012d3d8);
          if (iVar6 == 0) {
            uVar5 = 1;
          }
          else {
            iVar6 = FUN_100fef80(uVar5,0x1012d3e8);
            if (iVar6 == 0) {
              uVar5 = 2;
            }
            else {
              iVar6 = FUN_100fef80(uVar5,0x1012d3f8);
              if (iVar6 == 0) {
                uVar5 = 4;
              }
              else {
                iVar6 = FUN_100fef80(uVar5,0x1012d408);
                if (local_48 < 0x264 || iVar6 != 0) {
                  iVar6 = FUN_100fef80(uVar5,0x1012d418);
                  if (iVar6 != 0) {
                    iVar6 = FUN_100fef80(uVar5,s_bestavailable_1012d428);
                    puVar9 = local_4c;
                    if (iVar6 == 0) goto LAB_100c2e54;
                    goto LAB_100c3170;
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
      iVar7 = FUN_100fef80(uVar5,s_adapters_1012d438);
      if (iVar7 == 0) {
        if (iVar6 == 0) {
          if (uVar4 == 1) {
            puVar9 = local_4c + 1;
            (*pcVar2)();
            uVar5 = (*extraout_w11_04)(param_3,param_4,uVar10,0);
            pcVar1 = (char *)0x1012d444;
LAB_100c2ebc:
            iVar6 = FUN_100fef80(uVar5,pcVar1);
            if (iVar6 == 0) {
              *puVar9 = 0;
            }
            else {
              (*pcVar2)();
              cVar3 = (*extraout_w11_05)(param_3,param_4,uVar10,0,puVar9);
            }
          }
          else {
LAB_100c316c:
            if (1 < uVar4) {
LAB_100c3170:
              cVar3 = '\0';
            }
          }
        }
      }
      else {
        iVar7 = FUN_100fef80(uVar5,s_fullscreenoutput_1012d448);
        if (iVar7 == 0) {
          if (iVar6 == 0) {
            if (uVar4 == 1) {
              puVar9 = local_4c + 2;
              (*pcVar2)();
              uVar5 = (*extraout_w11_06)(param_3,param_4,uVar10,0);
              pcVar1 = s_default_1012d460;
              goto LAB_100c2ebc;
            }
            goto LAB_100c316c;
          }
        }
        else {
          uVar8 = FUN_100fef80(uVar5,s_fullscreenmode_1012d468);
          uVar5 = local_44;
          if ((int)uVar8 == 0) {
            if (iVar6 == 0 && uVar4 != 0) {
              local_50[0] = '\0';
              cVar3 = FUN_100c2450(uVar8,param_3,param_4,uVar10,local_50,uVar4);
              *(bool *)(local_4c + 8) = local_50[0] == '\0';
            }
          }
          else {
            iVar7 = FUN_100fef80(local_44,s_scalingmode_1012d478);
            if (iVar7 == 0) {
              if (iVar6 == 0) {
                if (uVar4 != 1) goto LAB_100c316c;
                (*pcVar2)();
                uVar5 = (*extraout_w11_07)(param_3,param_4,uVar10,0);
                iVar6 = FUN_100fef80(uVar5,s_unspecified_1012d488);
                if (iVar6 == 0) {
                  puVar9 = local_4c + 7;
LAB_100c2e54:
                  *puVar9 = 0;
                }
                else {
                  iVar6 = FUN_100fef80(uVar5,s_centered_1012d498);
                  if (iVar6 == 0) {
                    puVar9 = local_4c + 7;
                    uVar5 = 1;
                  }
                  else {
                    iVar6 = FUN_100fef80(uVar5,s_stretched_1012d4a8);
                    if (iVar6 == 0) {
                      puVar9 = local_4c + 7;
                      uVar5 = 2;
                    }
                    else {
                      iVar6 = FUN_100fef80(uVar5,s_stretched_ar_1012d4b8);
                      if (iVar6 == 0) {
                        puVar9 = local_4c + 7;
                        uVar5 = 3;
                      }
                      else {
                        iVar6 = FUN_100fef80(uVar5,s_stretched_4_3_1012d4c8);
                        if (iVar6 == 0) {
                          puVar9 = local_4c + 7;
                          uVar5 = 4;
                        }
                        else {
                          iVar6 = FUN_100fef80(uVar5,s_stretched_4_3_crt_1012d4d8);
                          if (iVar6 == 0) {
                            puVar9 = local_4c + 7;
                            uVar5 = 5;
                          }
                          else {
                            iVar6 = FUN_100fef80(uVar5,s_stretched_4_3_c64_1012d4f0);
                            if (iVar6 == 0) {
                              puVar9 = local_4c + 7;
                              uVar5 = 6;
                            }
                            else {
                              iVar6 = FUN_100fef80(uVar5,s_centered_ar_1012d508);
                              if (iVar6 == 0) {
                                puVar9 = local_4c + 7;
                                uVar5 = 7;
                              }
                              else {
                                iVar6 = FUN_100fef80(uVar5,s_stretched_ar_crt_1012d518);
                                if (local_48 < 0x276 || iVar6 != 0) goto LAB_100c3170;
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
              uVar8 = FUN_100fef80(uVar5,s_progressivescanlineorder_1012d530);
              if ((int)uVar8 == 0) {
                if (iVar6 == 0 && uVar4 != 0) {
                  local_50[0] = '\0';
                  cVar3 = FUN_100c2450(uVar8,param_3,param_4,uVar10,local_50,uVar4);
                  local_4c[6] = (uint)(local_50[0] != '\0');
                }
              }
              else {
                uVar8 = FUN_100fef80(uVar5,s_enumeraterefreshrates_1012d550);
                if ((int)uVar8 == 0) {
                  if (iVar6 != 0) {
                    return '\0';
                  }
                  cVar3 = '\x01';
                  if (uVar4 != 0) {
                    puVar9 = (undefined4 *)((int)local_4c + 0x22);
                    goto LAB_100c337c;
                  }
                }
                else {
                  uVar8 = FUN_100fef80(uVar5,s_brightness_1012d568);
                  if ((int)uVar8 == 0) {
                    if (iVar6 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 != 0) {
                      puVar9 = local_4c + 3;
LAB_100c3224:
                      cVar3 = FUN_100c2568(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                    }
                  }
                  else {
                    uVar8 = FUN_100fef80(uVar5,s_color_1012b5cc);
                    if ((int)uVar8 == 0) {
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      cVar3 = '\x01';
                      if (uVar4 != 0) {
                        puVar9 = local_4c + 4;
                        goto LAB_100c3224;
                      }
                    }
                    else {
                      uVar8 = FUN_100fef80(uVar5,s_contrast_1012d578);
                      if ((int)uVar8 == 0) {
                        if (iVar6 != 0) {
                          return '\0';
                        }
                        cVar3 = '\x01';
                        if (uVar4 != 0) {
                          puVar9 = local_4c + 5;
                          goto LAB_100c3224;
                        }
                      }
                      else {
                        uVar8 = FUN_100fef80(uVar5,s_inheritcolorprofileinfullscreenm_1012d588);
                        if ((int)uVar8 == 0) {
                          if (iVar6 != 0) {
                            return '\0';
                          }
                          cVar3 = '\x01';
                          if (uVar4 != 0) {
                            puVar9 = (undefined4 *)((int)local_4c + 0x26);
                            goto LAB_100c337c;
                          }
                        }
                        else {
                          uVar8 = FUN_100fef80(uVar5,s_keepwindowaspectratio_1012d5b0);
                          if ((int)uVar8 == 0) {
                            if (iVar6 != 0) {
                              return '\0';
                            }
                            cVar3 = '\x01';
                            if (uVar4 != 0) {
                              puVar9 = (undefined4 *)((int)local_4c + 0x21);
                              goto LAB_100c337c;
                            }
                          }
                          else {
                            uVar8 = FUN_100fef80(uVar5,s_capturemouse_1012d5c8);
                            uVar5 = local_44;
                            if ((int)uVar8 == 0) {
                              if (iVar6 != 0) {
                                return '\0';
                              }
                              cVar3 = '\x01';
                              if (uVar4 != 0) {
                                puVar9 = (undefined4 *)((int)local_4c + 0x23);
                                goto LAB_100c337c;
                              }
                            }
                            else {
                              uVar8 = FUN_100fef80(local_44,s_centerappwindow_1012d5d8);
                              if ((int)uVar8 == 0) {
                                if (iVar6 != 0) {
                                  return '\0';
                                }
                                cVar3 = '\x01';
                                if (uVar4 != 0) {
                                  puVar9 = local_4c + 9;
LAB_100c337c:
                                  cVar3 = FUN_100c2450(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                                }
                              }
                              else {
                                if (local_48 < 0x285) {
                                  return '\0';
                                }
                                uVar8 = FUN_100fef80(uVar5,s_disablescreensaver_1012d5e8);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar6 == 0 && uVar4 != 0) {
                                  puVar9 = (undefined4 *)((int)local_4c + 0x25);
                                  goto LAB_100c337c;
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

