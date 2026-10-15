/*
 * FUN_1801f04f8 at 1801f04f8
 * undefined FUN_1801f04f8(void)
 * Address ranges: 1801f04f8-1801f0b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801f04f8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  uint uVar8;
  char local_70 [4];
  int local_6c;
  uint local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  
  local_50 = (code *)__hybrid_os_arm64x_dispatch_icall;
  cVar1 = '\x01';
  uVar8 = 0;
  local_68 = param_5;
LAB_1801f0538:
  do {
    local_60 = local_50;
    (*local_50)();
    uVar2 = (*extraout_x11)(param_3,param_4);
    if (uVar2 <= uVar8) {
      return cVar1;
    }
    (*local_60)();
    uVar4 = (*extraout_x11_00)(param_3,param_4,uVar8);
    local_58 = uVar4;
    (*local_60)();
    uVar2 = (*extraout_x11_01)(param_3,param_4,uVar8);
    (*local_60)();
    local_6c = (*extraout_x11_02)(param_3,param_4,uVar8);
    iVar3 = FUN_180222cb8(uVar4,s_videocard_180237138);
    if (iVar3 == 0) {
      if (local_6c != 0) {
        return '\0';
      }
      if (uVar2 == 1) {
        (*local_60)();
        uVar4 = (*extraout_x11_03)(param_3,param_4,uVar8,0);
        iVar3 = FUN_180222cb8(uVar4,s_voodoo_graphics_180237148);
        if (iVar3 == 0) {
          *(undefined4 *)(param_2 + 0x27) = 0;
        }
        else {
          iVar3 = FUN_180222cb8(uVar4,s_voodoo_rush_180237168);
          if (iVar3 == 0) {
            uVar7 = 1;
          }
          else {
            iVar3 = FUN_180222cb8(uVar4,s_voodoo_2_180237158);
            if (iVar3 == 0) {
              uVar7 = 2;
            }
            else {
              iVar3 = FUN_180222cb8(uVar4,s_voodoo_banshee_180237188);
              if (iVar3 == 0) {
                uVar7 = 3;
              }
              else {
                iVar3 = FUN_180222cb8(uVar4,s_other_greater_180237178);
                if (iVar3 != 0) goto LAB_1801f08c0;
                uVar7 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0x27) = uVar7;
        }
LAB_1801f08b4:
        cVar1 = '\x01';
        uVar8 = uVar8 + 1;
        goto LAB_1801f0538;
      }
LAB_1801f08bc:
      cVar1 = '\x01';
      if (1 < uVar2) goto LAB_1801f08c0;
    }
    else {
      iVar3 = FUN_180222cb8(uVar4,s_onboardram_180237198);
      if (iVar3 == 0) {
        if (local_6c != 0) goto LAB_1801f08c0;
        cVar1 = '\x01';
        if (uVar2 != 0) {
          cVar1 = FUN_1801ef980(0,param_3,param_4,uVar8,param_2 + 0x2b,uVar2);
          *(int *)(param_2 + 0x2b) = *(int *)(param_2 + 0x2b) << 0x14;
        }
      }
      else {
        iVar3 = FUN_180222cb8(uVar4,s_memorysizeoftmu_1802371a8);
        if (iVar3 == 0) {
          if (local_6c != 0) goto LAB_1801f08c0;
          cVar1 = '\x01';
          if (uVar2 != 0) {
            cVar1 = FUN_1801ef980(0,param_3,param_4,uVar8,param_2 + 0x2f,uVar2);
            *(int *)(param_2 + 0x2f) = *(int *)(param_2 + 0x2f) << 10;
          }
        }
        else {
          iVar3 = FUN_180222cb8(uVar4,s_numberoftmus_1802371b8);
          if (iVar3 == 0) {
            if (local_6c != 0) goto LAB_1801f08c0;
            cVar1 = '\x01';
            if (uVar2 != 0) {
              cVar1 = FUN_1801ef980(0,param_3,param_4,uVar8,param_2 + 0x33,uVar2);
            }
          }
          else {
            if (local_68 < 0x263) {
              iVar3 = FUN_180222cb8(local_58,s_forcebilinearfilter_1802371c8);
              if (iVar3 == 0) {
                if (local_6c != 0) goto LAB_1801f08c0;
                cVar1 = '\x01';
                if (uVar2 != 0) {
                  local_70[0] = '\0';
                  cVar1 = FUN_1801ef878(0,param_3,param_4,uVar8,local_70,uVar2);
                  uVar7 = 0x200;
                  if (local_70[0] == '\0') {
                    uVar7 = 0;
                  }
                  *(undefined4 *)(param_2 + 0x4b) = uVar7;
                }
                goto LAB_1801f0ae8;
              }
            }
            else {
              iVar3 = FUN_180222cb8(local_58,s_tmufiltering_1802371e0);
              if (iVar3 == 0) {
                if (local_6c != 0) {
                  return '\0';
                }
                cVar1 = '\x01';
                if (uVar2 == 1) {
                  (*local_60)();
                  uVar4 = (*extraout_x11_04)(param_3,param_4,uVar8,0);
                  iVar3 = FUN_180222cb8(uVar4,s_appdriven_180236ec0);
                  if (iVar3 == 0) {
                    *(undefined4 *)(param_2 + 0x4b) = 0;
                    goto LAB_1801f08b4;
                  }
                  iVar3 = FUN_180222cb8(uVar4,s_pointsampled_180237200);
                  if (iVar3 == 0) {
                    uVar7 = 0x100;
                  }
                  else {
                    iVar3 = FUN_180222cb8(uVar4,s_bilinear_1802371f0);
                    if (iVar3 != 0) goto LAB_1801f0ae8;
                    uVar7 = 0x200;
                  }
                  *(undefined4 *)(param_2 + 0x4b) = uVar7;
                  goto LAB_1801f08b4;
                }
                goto LAB_1801f08bc;
              }
            }
            uVar4 = local_58;
            iVar3 = FUN_180222cb8(local_58,s_disablemipmapping_180237210);
            if (iVar3 == 0) {
              if (local_6c != 0) goto LAB_1801f08c0;
              cVar1 = '\x01';
              if (uVar2 != 0) {
                lVar6 = param_2 + 0x4f;
                goto LAB_1801f0ad0;
              }
            }
            else {
              uVar5 = FUN_180222cb8(uVar4,s_resolution_180237228);
              if ((int)uVar5 == 0) {
                cVar1 = FUN_1801efa90(uVar5,param_3,param_4,uVar8,param_2 + 0x37,param_2 + 0x3b,
                                      param_2 + 0x43,param_2 + 0x47,uVar2);
              }
              else {
                uVar5 = FUN_180222cb8(uVar4,s_antialiasing_180237238);
                if ((int)uVar5 == 0) {
                  if (uVar2 != 0) {
                    cVar1 = FUN_1801efd00(uVar5,param_3,param_4,uVar8,param_2 + 0x3f,uVar2);
                  }
                }
                else {
                  iVar3 = FUN_180222cb8(uVar4,s_enableglidegammaramp_180237248);
                  if (iVar3 == 0) {
                    if (local_6c != 0) goto LAB_1801f08c0;
                    cVar1 = '\x01';
                    if (uVar2 != 0) {
                      lVar6 = param_2 + 0x50;
                      goto LAB_1801f0ad0;
                    }
                  }
                  else {
                    iVar3 = FUN_180222cb8(uVar4,s_forceverticalsync_180237260);
                    if (iVar3 == 0) {
                      if (local_6c != 0) goto LAB_1801f08c0;
                      cVar1 = '\x01';
                      if (uVar2 != 0) {
                        lVar6 = param_2 + 0x52;
                        goto LAB_1801f0ad0;
                      }
                    }
                    else {
                      iVar3 = FUN_180222cb8(uVar4,s_forceemulatingtruepciaccess_180237278);
                      if (iVar3 == 0) {
                        if (local_6c != 0) goto LAB_1801f08c0;
                        cVar1 = '\x01';
                        if (uVar2 != 0) {
                          lVar6 = param_2 + 0x53;
                          goto LAB_1801f0ad0;
                        }
                      }
                      else {
                        iVar3 = FUN_180222cb8(uVar4,s_16bitdepthbuffer_180237298);
                        if (iVar3 == 0) {
                          if (local_6c != 0) goto LAB_1801f08c0;
                          cVar1 = '\x01';
                          if (uVar2 != 0) {
                            lVar6 = param_2 + 0x54;
                            goto LAB_1801f0ad0;
                          }
                        }
                        else {
                          iVar3 = FUN_180222cb8(uVar4,s_3dfxwatermark_1802372b0);
                          uVar4 = local_58;
                          if (iVar3 == 0) {
                            if (local_6c != 0) goto LAB_1801f08c0;
                            cVar1 = '\x01';
                            if (uVar2 != 0) {
                              lVar6 = param_2 + 0x55;
                              goto LAB_1801f0ad0;
                            }
                          }
                          else {
                            iVar3 = FUN_180222cb8(local_58,s_3dfxsplashscreen_1802372c0);
                            if (iVar3 == 0) {
                              if (local_6c != 0) goto LAB_1801f08c0;
                              cVar1 = '\x01';
                              if (uVar2 != 0) {
                                lVar6 = param_2 + 0x56;
                                goto LAB_1801f0ad0;
                              }
                            }
                            else {
                              iVar3 = FUN_180222cb8(uVar4,s_pointcastpalette_1802372d8);
                              if (iVar3 == 0) {
                                if (local_6c == 0) {
                                  cVar1 = '\x01';
                                  if (uVar2 != 0) {
                                    lVar6 = param_2 + 0x51;
LAB_1801f0ad0:
                                    cVar1 = FUN_1801ef878(local_6c,param_3,param_4,uVar8,lVar6,uVar2
                                                         );
                                  }
                                }
                                else {
LAB_1801f08c0:
                                  cVar1 = '\0';
                                }
                              }
                              else {
                                iVar3 = FUN_180222cb8(uVar4,s_enableinactiveappstate_1802372f0);
                                if (iVar3 != 0) {
                                  return '\0';
                                }
                                if (local_6c != 0) goto LAB_1801f08c0;
                                cVar1 = '\x01';
                                if (uVar2 != 0) {
                                  lVar6 = param_2 + 0x57;
                                  goto LAB_1801f0ad0;
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
LAB_1801f0ae8:
    uVar8 = uVar8 + 1;
    if (cVar1 == '\0') {
      return '\0';
    }
  } while( true );
}

