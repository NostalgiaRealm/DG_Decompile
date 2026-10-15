/*
 * FUN_1004a640 at 1004a640
 * undefined FUN_1004a640(void)
 * Address ranges: 1004a640-1004add3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004a640(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
    iVar7 = FUN_1007de60(uVar5,s_outputapi_1009a328);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        if (uVar4 != 1) goto LAB_1004ab7c;
        (*pcVar2)();
        uVar5 = (*extraout_w11_03)(param_3,param_4,uVar10,0);
        iVar6 = FUN_1007de60(uVar5,&DAT_1009a338);
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else {
          iVar6 = FUN_1007de60(uVar5,0x1009a348);
          if (iVar6 == 0) {
            uVar5 = 1;
          }
          else {
            iVar6 = FUN_1007de60(uVar5,0x1009a358);
            if (iVar6 == 0) {
              uVar5 = 2;
            }
            else {
              iVar6 = FUN_1007de60(uVar5,0x1009a368);
              if (iVar6 == 0) {
                uVar5 = 4;
              }
              else {
                iVar6 = FUN_1007de60(uVar5,0x1009a378);
                if (local_48 < 0x264 || iVar6 != 0) {
                  iVar6 = FUN_1007de60(uVar5,0x1009a388);
                  if (iVar6 != 0) {
                    iVar6 = FUN_1007de60(uVar5,s_bestavailable_1009a398);
                    puVar9 = local_4c;
                    if (iVar6 == 0) goto LAB_1004a864;
                    goto LAB_1004ab80;
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
      iVar7 = FUN_1007de60(uVar5,s_adapters_1009a3a8);
      if (iVar7 == 0) {
        if (iVar6 == 0) {
          if (uVar4 == 1) {
            puVar9 = local_4c + 1;
            (*pcVar2)();
            uVar5 = (*extraout_w11_04)(param_3,param_4,uVar10,0);
            pcVar1 = (char *)0x1009a3b4;
LAB_1004a8cc:
            iVar6 = FUN_1007de60(uVar5,pcVar1);
            if (iVar6 == 0) {
              *puVar9 = 0;
            }
            else {
              (*pcVar2)();
              cVar3 = (*extraout_w11_05)(param_3,param_4,uVar10,0,puVar9);
            }
          }
          else {
LAB_1004ab7c:
            if (1 < uVar4) {
LAB_1004ab80:
              cVar3 = '\0';
            }
          }
        }
      }
      else {
        iVar7 = FUN_1007de60(uVar5,s_fullscreenoutput_1009a3b8);
        if (iVar7 == 0) {
          if (iVar6 == 0) {
            if (uVar4 == 1) {
              puVar9 = local_4c + 2;
              (*pcVar2)();
              uVar5 = (*extraout_w11_06)(param_3,param_4,uVar10,0);
              pcVar1 = s_default_1009a3d0;
              goto LAB_1004a8cc;
            }
            goto LAB_1004ab7c;
          }
        }
        else {
          uVar8 = FUN_1007de60(uVar5,s_fullscreenmode_1009a3d8);
          uVar5 = local_44;
          if ((int)uVar8 == 0) {
            if (iVar6 == 0 && uVar4 != 0) {
              local_50[0] = '\0';
              cVar3 = FUN_10049e60(uVar8,param_3,param_4,uVar10,local_50,uVar4);
              *(bool *)(local_4c + 8) = local_50[0] == '\0';
            }
          }
          else {
            iVar7 = FUN_1007de60(local_44,s_scalingmode_1009a3e8);
            if (iVar7 == 0) {
              if (iVar6 == 0) {
                if (uVar4 != 1) goto LAB_1004ab7c;
                (*pcVar2)();
                uVar5 = (*extraout_w11_07)(param_3,param_4,uVar10,0);
                iVar6 = FUN_1007de60(uVar5,s_unspecified_1009a3f8);
                if (iVar6 == 0) {
                  puVar9 = local_4c + 7;
LAB_1004a864:
                  *puVar9 = 0;
                }
                else {
                  iVar6 = FUN_1007de60(uVar5,s_centered_1009a408);
                  if (iVar6 == 0) {
                    puVar9 = local_4c + 7;
                    uVar5 = 1;
                  }
                  else {
                    iVar6 = FUN_1007de60(uVar5,s_stretched_1009a418);
                    if (iVar6 == 0) {
                      puVar9 = local_4c + 7;
                      uVar5 = 2;
                    }
                    else {
                      iVar6 = FUN_1007de60(uVar5,s_stretched_ar_1009a428);
                      if (iVar6 == 0) {
                        puVar9 = local_4c + 7;
                        uVar5 = 3;
                      }
                      else {
                        iVar6 = FUN_1007de60(uVar5,s_stretched_4_3_1009a438);
                        if (iVar6 == 0) {
                          puVar9 = local_4c + 7;
                          uVar5 = 4;
                        }
                        else {
                          iVar6 = FUN_1007de60(uVar5,s_stretched_4_3_crt_1009a448);
                          if (iVar6 == 0) {
                            puVar9 = local_4c + 7;
                            uVar5 = 5;
                          }
                          else {
                            iVar6 = FUN_1007de60(uVar5,s_stretched_4_3_c64_1009a460);
                            if (iVar6 == 0) {
                              puVar9 = local_4c + 7;
                              uVar5 = 6;
                            }
                            else {
                              iVar6 = FUN_1007de60(uVar5,s_centered_ar_1009a478);
                              if (iVar6 == 0) {
                                puVar9 = local_4c + 7;
                                uVar5 = 7;
                              }
                              else {
                                iVar6 = FUN_1007de60(uVar5,s_stretched_ar_crt_1009a488);
                                if (local_48 < 0x276 || iVar6 != 0) goto LAB_1004ab80;
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
              uVar8 = FUN_1007de60(uVar5,s_progressivescanlineorder_1009a4a0);
              if ((int)uVar8 == 0) {
                if (iVar6 == 0 && uVar4 != 0) {
                  local_50[0] = '\0';
                  cVar3 = FUN_10049e60(uVar8,param_3,param_4,uVar10,local_50,uVar4);
                  local_4c[6] = (uint)(local_50[0] != '\0');
                }
              }
              else {
                uVar8 = FUN_1007de60(uVar5,s_enumeraterefreshrates_1009a4c0);
                if ((int)uVar8 == 0) {
                  if (iVar6 != 0) {
                    return '\0';
                  }
                  cVar3 = '\x01';
                  if (uVar4 != 0) {
                    puVar9 = (undefined4 *)((int)local_4c + 0x22);
                    goto LAB_1004ad8c;
                  }
                }
                else {
                  uVar8 = FUN_1007de60(uVar5,s_brightness_1009a4d8);
                  if ((int)uVar8 == 0) {
                    if (iVar6 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 != 0) {
                      puVar9 = local_4c + 3;
LAB_1004ac34:
                      cVar3 = FUN_10049f78(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                    }
                  }
                  else {
                    uVar8 = FUN_1007de60(uVar5,s_color_1009a4e4);
                    if ((int)uVar8 == 0) {
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      cVar3 = '\x01';
                      if (uVar4 != 0) {
                        puVar9 = local_4c + 4;
                        goto LAB_1004ac34;
                      }
                    }
                    else {
                      uVar8 = FUN_1007de60(uVar5,s_contrast_1009a4f0);
                      if ((int)uVar8 == 0) {
                        if (iVar6 != 0) {
                          return '\0';
                        }
                        cVar3 = '\x01';
                        if (uVar4 != 0) {
                          puVar9 = local_4c + 5;
                          goto LAB_1004ac34;
                        }
                      }
                      else {
                        uVar8 = FUN_1007de60(uVar5,s_inheritcolorprofileinfullscreenm_1009a500);
                        if ((int)uVar8 == 0) {
                          if (iVar6 != 0) {
                            return '\0';
                          }
                          cVar3 = '\x01';
                          if (uVar4 != 0) {
                            puVar9 = (undefined4 *)((int)local_4c + 0x26);
                            goto LAB_1004ad8c;
                          }
                        }
                        else {
                          uVar8 = FUN_1007de60(uVar5,s_keepwindowaspectratio_1009a528);
                          if ((int)uVar8 == 0) {
                            if (iVar6 != 0) {
                              return '\0';
                            }
                            cVar3 = '\x01';
                            if (uVar4 != 0) {
                              puVar9 = (undefined4 *)((int)local_4c + 0x21);
                              goto LAB_1004ad8c;
                            }
                          }
                          else {
                            uVar8 = FUN_1007de60(uVar5,s_capturemouse_1009a540);
                            uVar5 = local_44;
                            if ((int)uVar8 == 0) {
                              if (iVar6 != 0) {
                                return '\0';
                              }
                              cVar3 = '\x01';
                              if (uVar4 != 0) {
                                puVar9 = (undefined4 *)((int)local_4c + 0x23);
                                goto LAB_1004ad8c;
                              }
                            }
                            else {
                              uVar8 = FUN_1007de60(local_44,s_centerappwindow_1009a550);
                              if ((int)uVar8 == 0) {
                                if (iVar6 != 0) {
                                  return '\0';
                                }
                                cVar3 = '\x01';
                                if (uVar4 != 0) {
                                  puVar9 = local_4c + 9;
LAB_1004ad8c:
                                  cVar3 = FUN_10049e60(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                                }
                              }
                              else {
                                if (local_48 < 0x285) {
                                  return '\0';
                                }
                                uVar8 = FUN_1007de60(uVar5,s_disablescreensaver_1009a560);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar6 == 0 && uVar4 != 0) {
                                  puVar9 = (undefined4 *)((int)local_4c + 0x25);
                                  goto LAB_1004ad8c;
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

