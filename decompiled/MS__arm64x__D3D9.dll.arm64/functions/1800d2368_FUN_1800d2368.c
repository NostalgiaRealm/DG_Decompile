/*
 * FUN_1800d2368 at 1800d2368
 * undefined FUN_1800d2368(void)
 * Address ranges: 1800d2368-1800d2927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d2368(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  char local_60 [16];
  
  cVar2 = '\x01';
  uVar10 = 0;
LAB_1800d23a4:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar10) {
      return cVar2;
    }
    uVar6 = (**(code **)(*param_3 + 0x40))(param_3,param_4,uVar10);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar10);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar10);
    iVar5 = func_0x000180222cb8(uVar6,s_videocard_18023a348);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 == 1) {
        uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
        iVar4 = func_0x000180222cb8(uVar6,s_voodoo_graphics_18023a358);
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x27) = 0;
        }
        else {
          iVar4 = func_0x000180222cb8(uVar6,s_voodoo_rush_18023a378);
          if (iVar4 == 0) {
            uVar9 = 1;
          }
          else {
            iVar4 = func_0x000180222cb8(uVar6,s_voodoo_2_18023a368);
            if (iVar4 == 0) {
              uVar9 = 2;
            }
            else {
              iVar4 = func_0x000180222cb8(uVar6,s_voodoo_banshee_18023a398);
              if (iVar4 == 0) {
                uVar9 = 3;
              }
              else {
                iVar4 = func_0x000180222cb8(uVar6,s_other_greater_18023a388);
                if (iVar4 != 0) goto LAB_1800d26fc;
                uVar9 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0x27) = uVar9;
        }
        goto LAB_1800d26f0;
      }
LAB_1800d26f8:
      cVar2 = '\x01';
      if (1 < uVar3) goto LAB_1800d26fc;
    }
    else {
      iVar5 = func_0x000180222cb8(uVar6,s_onboardram_18023a3a8);
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          return '\0';
        }
        cVar2 = '\x01';
        if (uVar3 != 0) {
          if ((uVar3 != 1) ||
             (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0,param_2 + 0x2b),
             cVar1 == '\0')) {
            cVar2 = '\0';
          }
          *(int *)(param_2 + 0x2b) = *(int *)(param_2 + 0x2b) << 0x14;
        }
      }
      else {
        iVar5 = func_0x000180222cb8(uVar6,s_memorysizeoftmu_18023a3b8);
        if (iVar5 == 0) {
          if (iVar4 != 0) {
            return '\0';
          }
          cVar2 = '\x01';
          if (uVar3 != 0) {
            if ((uVar3 != 1) ||
               (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0,param_2 + 0x2f),
               cVar1 == '\0')) {
              cVar2 = '\0';
            }
            *(int *)(param_2 + 0x2f) = *(int *)(param_2 + 0x2f) << 10;
          }
        }
        else {
          iVar5 = func_0x000180222cb8(uVar6,s_numberoftmus_18023a3c8);
          if (iVar5 == 0) {
            if (iVar4 != 0) {
              return '\0';
            }
            cVar2 = '\x01';
            if ((uVar3 != 0) &&
               ((uVar3 != 1 ||
                (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0,param_2 + 0x33),
                cVar1 == '\0')))) goto LAB_1800d26fc;
          }
          else {
            uVar9 = 0x200;
            if (param_5 < 0x263) {
              uVar7 = func_0x000180222cb8(uVar6,s_forcebilinearfilter_18023a3d8);
              if ((int)uVar7 == 0) {
                if (iVar4 != 0) goto LAB_1800d26fc;
                cVar2 = '\x01';
                if (uVar3 != 0) {
                  local_60[0] = '\0';
                  cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar10,local_60,uVar3);
                  if (local_60[0] == '\0') {
                    uVar9 = 0;
                  }
                  *(undefined4 *)(param_2 + 0x4b) = uVar9;
                }
                goto LAB_1800d28f4;
              }
            }
            else {
              iVar5 = func_0x000180222cb8(uVar6,s_tmufiltering_18023a3f0);
              if (iVar5 == 0) {
                if (iVar4 != 0) {
                  return '\0';
                }
                cVar2 = '\x01';
                if (uVar3 != 1) goto LAB_1800d26f8;
                uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                iVar4 = func_0x000180222cb8(uVar6,s_appdriven_18023a0d0);
                if (iVar4 == 0) {
                  *(undefined4 *)(param_2 + 0x4b) = 0;
                }
                else {
                  iVar4 = func_0x000180222cb8(uVar6,s_pointsampled_18023a410);
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x4b) = 0x100;
                  }
                  else {
                    iVar4 = func_0x000180222cb8(uVar6,s_bilinear_18023a400);
                    if (iVar4 != 0) goto LAB_1800d28f4;
                    *(undefined4 *)(param_2 + 0x4b) = 0x200;
                  }
                }
LAB_1800d26f0:
                cVar2 = '\x01';
                uVar10 = uVar10 + 1;
                goto LAB_1800d23a4;
              }
            }
            uVar7 = func_0x000180222cb8(uVar6,s_disablemipmapping_18023a420);
            if ((int)uVar7 == 0) {
              if (iVar4 != 0) goto LAB_1800d26fc;
              cVar2 = '\x01';
              if (uVar3 != 0) {
                lVar8 = param_2 + 0x4f;
                goto LAB_1800d28dc;
              }
            }
            else {
              uVar7 = func_0x000180222cb8(uVar6,s_resolution_18023a438);
              if ((int)uVar7 == 0) {
                cVar2 = FUN_1800d19e8(uVar7,param_3,param_4,uVar10,param_2 + 0x37,param_2 + 0x3b,
                                      param_2 + 0x43,param_2 + 0x47,uVar3);
              }
              else {
                uVar7 = func_0x000180222cb8(uVar6,s_antialiasing_18023a448);
                if ((int)uVar7 == 0) {
                  if (uVar3 != 0) {
                    cVar2 = FUN_1800d1bf8(uVar7,param_3,param_4,uVar10,param_2 + 0x3f,uVar3);
                  }
                }
                else {
                  uVar7 = func_0x000180222cb8(uVar6,s_enableglidegammaramp_18023a458);
                  if ((int)uVar7 == 0) {
                    if (iVar4 != 0) goto LAB_1800d26fc;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      lVar8 = param_2 + 0x50;
                      goto LAB_1800d28dc;
                    }
                  }
                  else {
                    uVar7 = func_0x000180222cb8(uVar6,s_forceverticalsync_18023a470);
                    if ((int)uVar7 == 0) {
                      if (iVar4 != 0) goto LAB_1800d26fc;
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        lVar8 = param_2 + 0x52;
                        goto LAB_1800d28dc;
                      }
                    }
                    else {
                      uVar7 = func_0x000180222cb8(uVar6,s_forceemulatingtruepciaccess_18023a488);
                      if ((int)uVar7 == 0) {
                        if (iVar4 != 0) goto LAB_1800d26fc;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          lVar8 = param_2 + 0x53;
                          goto LAB_1800d28dc;
                        }
                      }
                      else {
                        uVar7 = func_0x000180222cb8(uVar6,s_16bitdepthbuffer_18023a4a8);
                        if ((int)uVar7 == 0) {
                          if (iVar4 != 0) goto LAB_1800d26fc;
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            lVar8 = param_2 + 0x54;
                            goto LAB_1800d28dc;
                          }
                        }
                        else {
                          uVar7 = func_0x000180222cb8(uVar6,s_3dfxwatermark_18023a4c0);
                          if ((int)uVar7 == 0) {
                            if (iVar4 != 0) goto LAB_1800d26fc;
                            cVar2 = '\x01';
                            if (uVar3 != 0) {
                              lVar8 = param_2 + 0x55;
                              goto LAB_1800d28dc;
                            }
                          }
                          else {
                            uVar7 = func_0x000180222cb8(uVar6,s_3dfxsplashscreen_18023a4d0);
                            if ((int)uVar7 == 0) {
                              if (iVar4 != 0) goto LAB_1800d26fc;
                              cVar2 = '\x01';
                              if (uVar3 != 0) {
                                lVar8 = param_2 + 0x56;
                                goto LAB_1800d28dc;
                              }
                            }
                            else {
                              uVar7 = func_0x000180222cb8(uVar6,s_pointcastpalette_18023a4e8);
                              if ((int)uVar7 == 0) {
                                if (iVar4 == 0) {
                                  cVar2 = '\x01';
                                  if (uVar3 != 0) {
                                    lVar8 = param_2 + 0x51;
LAB_1800d28dc:
                                    cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar10,lVar8,uVar3);
                                  }
                                }
                                else {
LAB_1800d26fc:
                                  cVar2 = '\0';
                                }
                              }
                              else {
                                uVar7 = func_0x000180222cb8(uVar6,s_enableinactiveappstate_18023a500
                                                           );
                                if ((int)uVar7 != 0) {
                                  return '\0';
                                }
                                if (iVar4 != 0) goto LAB_1800d26fc;
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  lVar8 = param_2 + 0x57;
                                  goto LAB_1800d28dc;
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
LAB_1800d28f4:
    uVar10 = uVar10 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

