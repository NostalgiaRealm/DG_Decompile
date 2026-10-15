/*
 * FUN_1000d448 at 1000d448
 * undefined FUN_1000d448(void)
 * Address ranges: 1000d448-1000da5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000d448(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar10;
  int *piVar11;
  char local_50 [4];
  undefined4 local_4c;
  code *local_48;
  uint local_44;
  
  cVar2 = '\x01';
  local_48 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar10 = 0;
  local_4c = param_4;
  local_44 = param_5;
LAB_1000d488:
  do {
    pcVar1 = local_48;
    (*local_48)();
    uVar7 = local_4c;
    uVar3 = (*extraout_w11)(param_3,local_4c);
    if (uVar3 <= uVar10) {
      return cVar2;
    }
    (*pcVar1)();
    uVar4 = (*extraout_w11_00)(param_3,uVar7,uVar10);
    (*pcVar1)();
    uVar3 = (*extraout_w11_01)(param_3,uVar7,uVar10);
    (*pcVar1)();
    iVar5 = (*extraout_w11_02)(param_3,uVar7,uVar10);
    iVar6 = FUN_1007a140(uVar4,s_videocard_10095d70);
    if (iVar6 == 0) {
      if (iVar5 != 0) {
        return '\0';
      }
      if (uVar3 == 1) {
        (*local_48)();
        uVar7 = (*extraout_w11_03)(param_3,uVar7,uVar10,0);
        iVar5 = FUN_1007a140(uVar7,s_voodoo_graphics_10095d80);
        if (iVar5 == 0) {
          puVar9 = (undefined4 *)(param_2 + 0x27);
LAB_1000d7e0:
          *puVar9 = 0;
        }
        else {
          iVar5 = FUN_1007a140(uVar7,s_voodoo_rush_10095d90);
          if (iVar5 == 0) {
            puVar9 = (undefined4 *)(param_2 + 0x27);
            uVar7 = 1;
          }
          else {
            iVar5 = FUN_1007a140(uVar7,0x10095da0);
            if (iVar5 == 0) {
              puVar9 = (undefined4 *)(param_2 + 0x27);
              uVar7 = 2;
            }
            else {
              iVar5 = FUN_1007a140(uVar7,s_voodoo_banshee_10095db0);
              if (iVar5 == 0) {
                puVar9 = (undefined4 *)(param_2 + 0x27);
                uVar7 = 3;
              }
              else {
                iVar5 = FUN_1007a140(uVar7,s_other_greater_10095dc0);
                if (iVar5 != 0) goto LAB_1000d830;
                puVar9 = (undefined4 *)(param_2 + 0x27);
                uVar7 = 4;
              }
            }
          }
LAB_1000d820:
          *puVar9 = uVar7;
        }
        cVar2 = '\x01';
        uVar10 = uVar10 + 1;
        goto LAB_1000d488;
      }
LAB_1000d82c:
      cVar2 = '\x01';
      if (1 < uVar3) {
LAB_1000d830:
        cVar2 = '\0';
      }
    }
    else {
      uVar8 = FUN_1007a140(uVar4,s_onboardram_10095dd0);
      if ((int)uVar8 == 0) {
        if (iVar5 != 0) {
          return '\0';
        }
        cVar2 = '\x01';
        if (uVar3 != 0) {
          piVar11 = (int *)(param_2 + 0x2b);
          cVar2 = FUN_1000c5e8(uVar8,param_3,uVar7,uVar10,piVar11,uVar3);
          iVar5 = *piVar11 << 0x14;
LAB_1000d684:
          *piVar11 = iVar5;
        }
      }
      else {
        uVar8 = FUN_1007a140(uVar4,s_memorysizeoftmu_10095de0);
        if ((int)uVar8 == 0) {
          if (iVar5 != 0) {
            return '\0';
          }
          cVar2 = '\x01';
          if (uVar3 != 0) {
            piVar11 = (int *)(param_2 + 0x2f);
            cVar2 = FUN_1000c5e8(uVar8,param_3,uVar7,uVar10,piVar11,uVar3);
            iVar5 = *piVar11 << 10;
            goto LAB_1000d684;
          }
        }
        else {
          uVar8 = FUN_1007a140(uVar4,s_numberoftmus_10095df0);
          if ((int)uVar8 == 0) {
            if (iVar5 != 0) {
              return '\0';
            }
            cVar2 = '\x01';
            if (uVar3 != 0) {
              cVar2 = FUN_1000c5e8(uVar8,param_3,uVar7,uVar10,param_2 + 0x33,uVar3);
            }
          }
          else {
            if (local_44 < 0x263) {
              uVar8 = FUN_1007a140(uVar4,s_forcebilinearfilter_10095e00);
              if ((int)uVar8 == 0) {
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar2 = '\x01';
                if (uVar3 != 0) {
                  local_50[0] = '\0';
                  cVar2 = FUN_1000c4d0(uVar8,param_3,uVar7,uVar10,local_50,uVar3);
                  uVar7 = 0x200;
                  if (local_50[0] == '\0') {
                    uVar7 = 0;
                  }
                  *(undefined4 *)(param_2 + 0x4b) = uVar7;
                }
                goto LAB_1000da2c;
              }
            }
            else {
              iVar6 = FUN_1007a140(uVar4,s_tmufiltering_10095e18);
              if (iVar6 == 0) {
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar2 = '\x01';
                if (uVar3 != 1) goto LAB_1000d82c;
                (*local_48)();
                uVar7 = (*extraout_w11_04)(param_3,uVar7,uVar10,0);
                iVar5 = FUN_1007a140(uVar7,s_appdriven_10095af8);
                if (iVar5 == 0) {
                  puVar9 = (undefined4 *)(param_2 + 0x4b);
                  goto LAB_1000d7e0;
                }
                iVar5 = FUN_1007a140(uVar7,s_pointsampled_10095e28);
                if (iVar5 == 0) {
                  uVar7 = 0x100;
                }
                else {
                  iVar5 = FUN_1007a140(uVar7,s_bilinear_10095e38);
                  if (iVar5 != 0) goto LAB_1000da2c;
                  uVar7 = 0x200;
                }
                puVar9 = (undefined4 *)(param_2 + 0x4b);
                goto LAB_1000d820;
              }
            }
            uVar8 = FUN_1007a140(uVar4,s_disablemipmapping_10095e48);
            if ((int)uVar8 == 0) {
              if (iVar5 != 0) {
                return '\0';
              }
              cVar2 = '\x01';
              if (uVar3 != 0) {
                iVar5 = param_2 + 0x4f;
                goto LAB_1000da14;
              }
            }
            else {
              uVar8 = FUN_1007a140(uVar4,s_resolution_10095e60);
              if ((int)uVar8 == 0) {
                cVar2 = FUN_1000c708(uVar8,param_3,local_4c,uVar10,param_2 + 0x37,param_2 + 0x3b,
                                     param_2 + 0x43,param_2 + 0x47,uVar3);
              }
              else {
                uVar8 = FUN_1007a140(uVar4,s_antialiasing_10095e70);
                if ((int)uVar8 == 0) {
                  if (uVar3 != 0) {
                    cVar2 = FUN_1000cb88(uVar8,param_3,local_4c,uVar10,param_2 + 0x3f,uVar3);
                  }
                }
                else {
                  uVar8 = FUN_1007a140(uVar4,s_enableglidegammaramp_10095e80);
                  if ((int)uVar8 == 0) {
                    if (iVar5 != 0) {
                      return '\0';
                    }
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      iVar5 = param_2 + 0x50;
                      goto LAB_1000da14;
                    }
                  }
                  else {
                    uVar8 = FUN_1007a140(uVar4,s_forceverticalsync_10095e98);
                    if ((int)uVar8 == 0) {
                      if (iVar5 != 0) {
                        return '\0';
                      }
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        iVar5 = param_2 + 0x52;
                        goto LAB_1000da14;
                      }
                    }
                    else {
                      uVar8 = FUN_1007a140(uVar4,s_forceemulatingtruepciaccess_10095eb0);
                      if ((int)uVar8 == 0) {
                        if (iVar5 != 0) {
                          return '\0';
                        }
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          iVar5 = param_2 + 0x53;
                          goto LAB_1000da14;
                        }
                      }
                      else {
                        uVar8 = FUN_1007a140(uVar4,s_16bitdepthbuffer_10095ed0);
                        if ((int)uVar8 == 0) {
                          if (iVar5 != 0) {
                            return '\0';
                          }
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            iVar5 = param_2 + 0x54;
                            goto LAB_1000da14;
                          }
                        }
                        else {
                          uVar8 = FUN_1007a140(uVar4,s_3dfxwatermark_10095ee8);
                          if ((int)uVar8 == 0) {
                            if (iVar5 != 0) {
                              return '\0';
                            }
                            cVar2 = '\x01';
                            if (uVar3 != 0) {
                              iVar5 = param_2 + 0x55;
                              goto LAB_1000da14;
                            }
                          }
                          else {
                            uVar8 = FUN_1007a140(uVar4,s_3dfxsplashscreen_10095ef8);
                            if ((int)uVar8 == 0) {
                              if (iVar5 != 0) {
                                return '\0';
                              }
                              cVar2 = '\x01';
                              if (uVar3 != 0) {
                                iVar5 = param_2 + 0x56;
                                goto LAB_1000da14;
                              }
                            }
                            else {
                              uVar8 = FUN_1007a140(uVar4,s_pointcastpalette_10095f10);
                              if ((int)uVar8 == 0) {
                                if (iVar5 != 0) {
                                  return '\0';
                                }
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  iVar5 = param_2 + 0x51;
LAB_1000da14:
                                  cVar2 = FUN_1000c4d0(uVar8,param_3,local_4c,uVar10,iVar5,uVar3);
                                }
                              }
                              else {
                                uVar8 = FUN_1007a140(uVar4,s_enableinactiveappstate_10095f28);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar5 != 0) {
                                  return '\0';
                                }
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  iVar5 = param_2 + 0x57;
                                  goto LAB_1000da14;
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
LAB_1000da2c:
    uVar10 = uVar10 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

