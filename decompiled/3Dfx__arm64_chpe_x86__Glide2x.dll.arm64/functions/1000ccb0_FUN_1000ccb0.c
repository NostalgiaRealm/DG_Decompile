/*
 * FUN_1000ccb0 at 1000ccb0
 * undefined FUN_1000ccb0(void)
 * Address ranges: 1000ccb0-1000d443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000ccb0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
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
    iVar7 = FUN_1007a140(uVar5,s_outputapi_10095b20);
    if (iVar7 == 0) {
      if (iVar6 == 0) {
        if (uVar4 != 1) goto LAB_1000d1ec;
        (*pcVar2)();
        uVar5 = (*extraout_w11_03)(param_3,param_4,uVar10,0);
        iVar6 = FUN_1007a140(uVar5,&DAT_10095b30);
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else {
          iVar6 = FUN_1007a140(uVar5,0x10095b40);
          if (iVar6 == 0) {
            uVar5 = 1;
          }
          else {
            iVar6 = FUN_1007a140(uVar5,0x10095b50);
            if (iVar6 == 0) {
              uVar5 = 2;
            }
            else {
              iVar6 = FUN_1007a140(uVar5,0x10095b60);
              if (iVar6 == 0) {
                uVar5 = 4;
              }
              else {
                iVar6 = FUN_1007a140(uVar5,0x10095b70);
                if (local_48 < 0x264 || iVar6 != 0) {
                  iVar6 = FUN_1007a140(uVar5,0x10095b80);
                  if (iVar6 != 0) {
                    iVar6 = FUN_1007a140(uVar5,s_bestavailable_10095b90);
                    puVar9 = local_4c;
                    if (iVar6 == 0) goto LAB_1000ced4;
                    goto LAB_1000d1f0;
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
      iVar7 = FUN_1007a140(uVar5,s_adapters_10095ba0);
      if (iVar7 == 0) {
        if (iVar6 == 0) {
          if (uVar4 == 1) {
            puVar9 = local_4c + 1;
            (*pcVar2)();
            uVar5 = (*extraout_w11_04)(param_3,param_4,uVar10,0);
            pcVar1 = (char *)0x10095bac;
LAB_1000cf3c:
            iVar6 = FUN_1007a140(uVar5,pcVar1);
            if (iVar6 == 0) {
              *puVar9 = 0;
            }
            else {
              (*pcVar2)();
              cVar3 = (*extraout_w11_05)(param_3,param_4,uVar10,0,puVar9);
            }
          }
          else {
LAB_1000d1ec:
            if (1 < uVar4) {
LAB_1000d1f0:
              cVar3 = '\0';
            }
          }
        }
      }
      else {
        iVar7 = FUN_1007a140(uVar5,s_fullscreenoutput_10095bb0);
        if (iVar7 == 0) {
          if (iVar6 == 0) {
            if (uVar4 == 1) {
              puVar9 = local_4c + 2;
              (*pcVar2)();
              uVar5 = (*extraout_w11_06)(param_3,param_4,uVar10,0);
              pcVar1 = s_default_10095bc8;
              goto LAB_1000cf3c;
            }
            goto LAB_1000d1ec;
          }
        }
        else {
          uVar8 = FUN_1007a140(uVar5,s_fullscreenmode_10095bd0);
          uVar5 = local_44;
          if ((int)uVar8 == 0) {
            if (iVar6 == 0 && uVar4 != 0) {
              local_50[0] = '\0';
              cVar3 = FUN_1000c4d0(uVar8,param_3,param_4,uVar10,local_50,uVar4);
              *(bool *)(local_4c + 8) = local_50[0] == '\0';
            }
          }
          else {
            iVar7 = FUN_1007a140(local_44,s_scalingmode_10095be0);
            if (iVar7 == 0) {
              if (iVar6 == 0) {
                if (uVar4 != 1) goto LAB_1000d1ec;
                (*pcVar2)();
                uVar5 = (*extraout_w11_07)(param_3,param_4,uVar10,0);
                iVar6 = FUN_1007a140(uVar5,s_unspecified_10095bf0);
                if (iVar6 == 0) {
                  puVar9 = local_4c + 7;
LAB_1000ced4:
                  *puVar9 = 0;
                }
                else {
                  iVar6 = FUN_1007a140(uVar5,s_centered_10095c00);
                  if (iVar6 == 0) {
                    puVar9 = local_4c + 7;
                    uVar5 = 1;
                  }
                  else {
                    iVar6 = FUN_1007a140(uVar5,s_stretched_10095c10);
                    if (iVar6 == 0) {
                      puVar9 = local_4c + 7;
                      uVar5 = 2;
                    }
                    else {
                      iVar6 = FUN_1007a140(uVar5,s_stretched_ar_10095c20);
                      if (iVar6 == 0) {
                        puVar9 = local_4c + 7;
                        uVar5 = 3;
                      }
                      else {
                        iVar6 = FUN_1007a140(uVar5,s_stretched_4_3_10095c30);
                        if (iVar6 == 0) {
                          puVar9 = local_4c + 7;
                          uVar5 = 4;
                        }
                        else {
                          iVar6 = FUN_1007a140(uVar5,s_stretched_4_3_crt_10095c40);
                          if (iVar6 == 0) {
                            puVar9 = local_4c + 7;
                            uVar5 = 5;
                          }
                          else {
                            iVar6 = FUN_1007a140(uVar5,s_stretched_4_3_c64_10095c58);
                            if (iVar6 == 0) {
                              puVar9 = local_4c + 7;
                              uVar5 = 6;
                            }
                            else {
                              iVar6 = FUN_1007a140(uVar5,s_centered_ar_10095c70);
                              if (iVar6 == 0) {
                                puVar9 = local_4c + 7;
                                uVar5 = 7;
                              }
                              else {
                                iVar6 = FUN_1007a140(uVar5,s_stretched_ar_crt_10095c80);
                                if (local_48 < 0x276 || iVar6 != 0) goto LAB_1000d1f0;
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
              uVar8 = FUN_1007a140(uVar5,s_progressivescanlineorder_10095c98);
              if ((int)uVar8 == 0) {
                if (iVar6 == 0 && uVar4 != 0) {
                  local_50[0] = '\0';
                  cVar3 = FUN_1000c4d0(uVar8,param_3,param_4,uVar10,local_50,uVar4);
                  local_4c[6] = (uint)(local_50[0] != '\0');
                }
              }
              else {
                uVar8 = FUN_1007a140(uVar5,s_enumeraterefreshrates_10095cb8);
                if ((int)uVar8 == 0) {
                  if (iVar6 != 0) {
                    return '\0';
                  }
                  cVar3 = '\x01';
                  if (uVar4 != 0) {
                    puVar9 = (undefined4 *)((int)local_4c + 0x22);
                    goto LAB_1000d3fc;
                  }
                }
                else {
                  uVar8 = FUN_1007a140(uVar5,s_brightness_10095cd0);
                  if ((int)uVar8 == 0) {
                    if (iVar6 != 0) {
                      return '\0';
                    }
                    cVar3 = '\x01';
                    if (uVar4 != 0) {
                      puVar9 = local_4c + 3;
LAB_1000d2a4:
                      cVar3 = FUN_1000c5e8(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                    }
                  }
                  else {
                    uVar8 = FUN_1007a140(uVar5,s_color_10095cdc);
                    if ((int)uVar8 == 0) {
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      cVar3 = '\x01';
                      if (uVar4 != 0) {
                        puVar9 = local_4c + 4;
                        goto LAB_1000d2a4;
                      }
                    }
                    else {
                      uVar8 = FUN_1007a140(uVar5,s_contrast_10095ce8);
                      if ((int)uVar8 == 0) {
                        if (iVar6 != 0) {
                          return '\0';
                        }
                        cVar3 = '\x01';
                        if (uVar4 != 0) {
                          puVar9 = local_4c + 5;
                          goto LAB_1000d2a4;
                        }
                      }
                      else {
                        uVar8 = FUN_1007a140(uVar5,s_inheritcolorprofileinfullscreenm_10095cf8);
                        if ((int)uVar8 == 0) {
                          if (iVar6 != 0) {
                            return '\0';
                          }
                          cVar3 = '\x01';
                          if (uVar4 != 0) {
                            puVar9 = (undefined4 *)((int)local_4c + 0x26);
                            goto LAB_1000d3fc;
                          }
                        }
                        else {
                          uVar8 = FUN_1007a140(uVar5,s_keepwindowaspectratio_10095d20);
                          if ((int)uVar8 == 0) {
                            if (iVar6 != 0) {
                              return '\0';
                            }
                            cVar3 = '\x01';
                            if (uVar4 != 0) {
                              puVar9 = (undefined4 *)((int)local_4c + 0x21);
                              goto LAB_1000d3fc;
                            }
                          }
                          else {
                            uVar8 = FUN_1007a140(uVar5,s_capturemouse_10095d38);
                            uVar5 = local_44;
                            if ((int)uVar8 == 0) {
                              if (iVar6 != 0) {
                                return '\0';
                              }
                              cVar3 = '\x01';
                              if (uVar4 != 0) {
                                puVar9 = (undefined4 *)((int)local_4c + 0x23);
                                goto LAB_1000d3fc;
                              }
                            }
                            else {
                              uVar8 = FUN_1007a140(local_44,s_centerappwindow_10095d48);
                              if ((int)uVar8 == 0) {
                                if (iVar6 != 0) {
                                  return '\0';
                                }
                                cVar3 = '\x01';
                                if (uVar4 != 0) {
                                  puVar9 = local_4c + 9;
LAB_1000d3fc:
                                  cVar3 = FUN_1000c4d0(uVar8,param_3,param_4,uVar10,puVar9,uVar4);
                                }
                              }
                              else {
                                if (local_48 < 0x285) {
                                  return '\0';
                                }
                                uVar8 = FUN_1007a140(uVar5,s_disablescreensaver_10095d58);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar6 == 0 && uVar4 != 0) {
                                  puVar9 = (undefined4 *)((int)local_4c + 0x25);
                                  goto LAB_1000d3fc;
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

