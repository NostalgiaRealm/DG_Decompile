/*
 * FUN_100f4f00 at 100f4f00
 * undefined FUN_100f4f00(void)
 * Address ranges: 100f4f00-100f5693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100f4f00(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
    iVar7 = FUN_10132680(uVar5,s_outputapi_101641f0);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        if (uVar4 != 1) goto LAB_100f543c;
        (*pcVar2)();
        uVar5 = (*extraout_w11_03)(param_3,param_4,uVar10,0);
        iVar6 = FUN_10132680(uVar5,&DAT_10164200);
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else {
          iVar6 = FUN_10132680(uVar5,0x10164210);
          if (iVar6 == 0) {
            uVar5 = 1;
          }
          else {
            iVar6 = FUN_10132680(uVar5,0x10164220);
            if (iVar6 == 0) {
              uVar5 = 2;
            }
            else {
              iVar6 = FUN_10132680(uVar5,0x10164230);
              if (iVar6 == 0) {
                uVar5 = 4;
              }
              else {
                iVar6 = FUN_10132680(uVar5,0x10164240);
                if (local_48 < 0x264 || iVar6 != 0) {
                  iVar6 = FUN_10132680(uVar5,0x10164250);
                  if (iVar6 != 0) {
                    iVar6 = FUN_10132680(uVar5,s_bestavailable_10164260);
                    puVar9 = local_4c;
                    if (iVar6 == 0) goto LAB_100f5124;
                    goto LAB_100f5440;
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
      iVar7 = FUN_10132680(uVar5,s_adapters_10164270);
      if (iVar7 == 0) {
        if (iVar6 == 0) {
          if (uVar4 == 1) {
            puVar9 = local_4c + 1;
            (*pcVar2)();
            uVar5 = (*extraout_w11_04)(param_3,param_4,uVar10,0);
            pcVar1 = (char *)0x1016427c;
LAB_100f518c:
            iVar6 = FUN_10132680(uVar5,pcVar1);
            if (iVar6 == 0) {
              *puVar9 = 0;
            }
            else {
              (*pcVar2)();
              cVar3 = (*extraout_w11_05)(param_3,param_4,uVar10,0,puVar9);
            }
          }
          else {
LAB_100f543c:
            if (1 < uVar4) {
LAB_100f5440:
              cVar3 = '\0';
            }
          }
        }
      }
      else {
        iVar7 = FUN_10132680(uVar5,s_fullscreenoutput_10164280);
        if (iVar7 == 0) {
          if (iVar6 == 0) {
            if (uVar4 == 1) {
              puVar9 = local_4c + 2;
              (*pcVar2)();
              uVar5 = (*extraout_w11_06)(param_3,param_4,uVar10,0);
              pcVar1 = s_default_10164298;
              goto LAB_100f518c;
            }
            goto LAB_100f543c;
          }
        }
        else {
          uVar8 = FUN_10132680(uVar5,s_fullscreenmode_101642a0);
          uVar5 = local_44;
          if ((int)uVar8 == 0) {
            if (iVar6 == 0 && uVar4 != 0) {
              local_50[0] = '\0';
              cVar3 = FUN_100f4720(uVar8,param_3,param_4,uVar10,local_50,uVar4);
              *(bool *)(local_4c + 8) = local_50[0] == '\0';
            }
          }
          else {
            iVar7 = FUN_10132680(local_44,s_scalingmode_101642b0);
            if (iVar7 == 0) {
              if (iVar6 == 0) {
                if (uVar4 != 1) goto LAB_100f543c;
                (*pcVar2)();
                uVar5 = (*extraout_w11_07)(param_3,param_4,uVar10,0);
                iVar6 = FUN_10132680(uVar5,s_unspecified_101642c0);
                if (iVar6 == 0) {
                  puVar9 = local_4c + 7;
LAB_100f5124:
                  *puVar9 = 0;
                }
                else {
                  iVar6 = FUN_10132680(uVar5,s_centered_101642d0);
                  if (iVar6 == 0) {
                    puVar9 = local_4c + 7;
                    uVar5 = 1;
                  }
                  else {
                    iVar6 = FUN_10132680(uVar5,s_stretched_101642e0);
                    if (iVar6 == 0) {
                      puVar9 = local_4c + 7;
                      uVar5 = 2;
                    }
                    else {
                      iVar6 = FUN_10132680(uVar5,s_stretched_ar_101642f0);
                      if (iVar6 == 0) {
                        puVar9 = local_4c + 7;
                        uVar5 = 3;
                      }
                      else {
                        iVar6 = FUN_10132680(uVar5,s_stretched_4_3_10164300);
                        if (iVar6 == 0) {
                          puVar9 = local_4c + 7;
                          uVar5 = 4;
                        }
                        else {
                          iVar6 = FUN_10132680(uVar5,s_stretched_4_3_crt_10164310);
                          if (iVar6 == 0) {
                            puVar9 = local_4c + 7;
                            uVar5 = 5;
                          }
                          else {
                            iVar6 = FUN_10132680(uVar5,s_stretched_4_3_c64_10164328);
                            if (iVar6 == 0) {
                              puVar9 = local_4c + 7;
                              uVar5 = 6;
                            }
                            else {
                              iVar6 = FUN_10132680(uVar5,s_centered_ar_10164340);
                              if (iVar6 == 0) {
                                puVar9 = local_4c + 7;
                                uVar5 = 7;
                              }
                              else {
                                iVar6 = FUN_10132680(uVar5,s_stretched_ar_crt_10164350);
                                if (local_48 < 0x276 || iVar6 != 0) goto LAB_100f5440;
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
              uVar8 = FUN_10132680(uVar5,s_progressivescanlineorder_10164368);
              if ((int)uVar8 == 0) {
                if (iVar6 == 0 && uVar4 != 0) {
                  local_50[0] = '\0';
                  cVar3 = FUN_100f4720(uVar8,param_3,param_4,uVar10,local_50,uVar4);
                  local_4c[6] = (uint)(local_50[0] != '\0');
                }
              }
              else {
                uVar8 = FUN_10132680(uVar5,s_enumeraterefreshrates_10164388);
                if ((int)uVar8 == 0) {
                  if (iVar6 != 0) {
                    return '\0';
                  }
                  cVar3 = '\x01';
                  if (uVar4 != 0) {
                    puVar9 = (undefined4 *)((int)local_4c + 0x22);
                    goto LAB_100f564c;
                  }
                }
                else {
                  uVar8 = FUN_10132680(uVar5,s_brightness_101643a0);
                  if ((int)uVar8 == 0) {
                    if (iVar6 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 != 0) {
                      puVar9 = local_4c + 3;
LAB_100f54f4:
                      cVar3 = FUN_100f4838(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                    }
                  }
                  else {
                    uVar8 = FUN_10132680(uVar5,s_color_10160f4c);
                    if ((int)uVar8 == 0) {
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      cVar3 = '\x01';
                      if (uVar4 != 0) {
                        puVar9 = local_4c + 4;
                        goto LAB_100f54f4;
                      }
                    }
                    else {
                      uVar8 = FUN_10132680(uVar5,s_contrast_101643b0);
                      if ((int)uVar8 == 0) {
                        if (iVar6 != 0) {
                          return '\0';
                        }
                        cVar3 = '\x01';
                        if (uVar4 != 0) {
                          puVar9 = local_4c + 5;
                          goto LAB_100f54f4;
                        }
                      }
                      else {
                        uVar8 = FUN_10132680(uVar5,s_inheritcolorprofileinfullscreenm_101643c0);
                        if ((int)uVar8 == 0) {
                          if (iVar6 != 0) {
                            return '\0';
                          }
                          cVar3 = '\x01';
                          if (uVar4 != 0) {
                            puVar9 = (undefined4 *)((int)local_4c + 0x26);
                            goto LAB_100f564c;
                          }
                        }
                        else {
                          uVar8 = FUN_10132680(uVar5,s_keepwindowaspectratio_101643e8);
                          if ((int)uVar8 == 0) {
                            if (iVar6 != 0) {
                              return '\0';
                            }
                            cVar3 = '\x01';
                            if (uVar4 != 0) {
                              puVar9 = (undefined4 *)((int)local_4c + 0x21);
                              goto LAB_100f564c;
                            }
                          }
                          else {
                            uVar8 = FUN_10132680(uVar5,s_capturemouse_10164400);
                            uVar5 = local_44;
                            if ((int)uVar8 == 0) {
                              if (iVar6 != 0) {
                                return '\0';
                              }
                              cVar3 = '\x01';
                              if (uVar4 != 0) {
                                puVar9 = (undefined4 *)((int)local_4c + 0x23);
                                goto LAB_100f564c;
                              }
                            }
                            else {
                              uVar8 = FUN_10132680(local_44,s_centerappwindow_10164410);
                              if ((int)uVar8 == 0) {
                                if (iVar6 != 0) {
                                  return '\0';
                                }
                                cVar3 = '\x01';
                                if (uVar4 != 0) {
                                  puVar9 = local_4c + 9;
LAB_100f564c:
                                  cVar3 = FUN_100f4720(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                                }
                              }
                              else {
                                if (local_48 < 0x285) {
                                  return '\0';
                                }
                                uVar8 = FUN_10132680(uVar5,s_disablescreensaver_10164420);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar6 == 0 && uVar4 != 0) {
                                  puVar9 = (undefined4 *)((int)local_4c + 0x25);
                                  goto LAB_100f564c;
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

