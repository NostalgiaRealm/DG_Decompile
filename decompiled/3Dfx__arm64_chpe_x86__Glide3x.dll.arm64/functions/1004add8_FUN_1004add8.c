/*
 * FUN_1004add8 at 1004add8
 * undefined FUN_1004add8(void)
 * Address ranges: 1004add8-1004b3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004add8(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
LAB_1004ae18:
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
    iVar6 = FUN_1007de60(uVar4,s_videocard_1009a578);
    if (iVar6 == 0) {
      if (iVar5 != 0) {
        return '\0';
      }
      if (uVar3 == 1) {
        (*local_48)();
        uVar7 = (*extraout_w11_03)(param_3,uVar7,uVar10,0);
        iVar5 = FUN_1007de60(uVar7,s_voodoo_graphics_1009a588);
        if (iVar5 == 0) {
          puVar9 = (undefined4 *)(param_2 + 0x27);
LAB_1004b170:
          *puVar9 = 0;
        }
        else {
          iVar5 = FUN_1007de60(uVar7,s_voodoo_rush_1009a598);
          if (iVar5 == 0) {
            puVar9 = (undefined4 *)(param_2 + 0x27);
            uVar7 = 1;
          }
          else {
            iVar5 = FUN_1007de60(uVar7,0x1009a5a8);
            if (iVar5 == 0) {
              puVar9 = (undefined4 *)(param_2 + 0x27);
              uVar7 = 2;
            }
            else {
              iVar5 = FUN_1007de60(uVar7,s_voodoo_banshee_1009a5b8);
              if (iVar5 == 0) {
                puVar9 = (undefined4 *)(param_2 + 0x27);
                uVar7 = 3;
              }
              else {
                iVar5 = FUN_1007de60(uVar7,s_other_greater_1009a5c8);
                if (iVar5 != 0) goto LAB_1004b1c0;
                puVar9 = (undefined4 *)(param_2 + 0x27);
                uVar7 = 4;
              }
            }
          }
LAB_1004b1b0:
          *puVar9 = uVar7;
        }
        cVar2 = '\x01';
        uVar10 = uVar10 + 1;
        goto LAB_1004ae18;
      }
LAB_1004b1bc:
      cVar2 = '\x01';
      if (1 < uVar3) {
LAB_1004b1c0:
        cVar2 = '\0';
      }
    }
    else {
      uVar8 = FUN_1007de60(uVar4,s_onboardram_1009a5d8);
      if ((int)uVar8 == 0) {
        if (iVar5 != 0) {
          return '\0';
        }
        cVar2 = '\x01';
        if (uVar3 != 0) {
          piVar11 = (int *)(param_2 + 0x2b);
          cVar2 = FUN_10049f78(uVar8,param_3,uVar7,uVar10,piVar11,uVar3);
          iVar5 = *piVar11 << 0x14;
LAB_1004b014:
          *piVar11 = iVar5;
        }
      }
      else {
        uVar8 = FUN_1007de60(uVar4,s_memorysizeoftmu_1009a5e8);
        if ((int)uVar8 == 0) {
          if (iVar5 != 0) {
            return '\0';
          }
          cVar2 = '\x01';
          if (uVar3 != 0) {
            piVar11 = (int *)(param_2 + 0x2f);
            cVar2 = FUN_10049f78(uVar8,param_3,uVar7,uVar10,piVar11,uVar3);
            iVar5 = *piVar11 << 10;
            goto LAB_1004b014;
          }
        }
        else {
          uVar8 = FUN_1007de60(uVar4,s_numberoftmus_1009a5f8);
          if ((int)uVar8 == 0) {
            if (iVar5 != 0) {
              return '\0';
            }
            cVar2 = '\x01';
            if (uVar3 != 0) {
              cVar2 = FUN_10049f78(uVar8,param_3,uVar7,uVar10,param_2 + 0x33,uVar3);
            }
          }
          else {
            if (local_44 < 0x263) {
              uVar8 = FUN_1007de60(uVar4,s_forcebilinearfilter_1009a608);
              if ((int)uVar8 == 0) {
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar2 = '\x01';
                if (uVar3 != 0) {
                  local_50[0] = '\0';
                  cVar2 = FUN_10049e60(uVar8,param_3,uVar7,uVar10,local_50,uVar3);
                  uVar7 = 0x200;
                  if (local_50[0] == '\0') {
                    uVar7 = 0;
                  }
                  *(undefined4 *)(param_2 + 0x4b) = uVar7;
                }
                goto LAB_1004b3bc;
              }
            }
            else {
              iVar6 = FUN_1007de60(uVar4,s_tmufiltering_1009a620);
              if (iVar6 == 0) {
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar2 = '\x01';
                if (uVar3 != 1) goto LAB_1004b1bc;
                (*local_48)();
                uVar7 = (*extraout_w11_04)(param_3,uVar7,uVar10,0);
                iVar5 = FUN_1007de60(uVar7,s_appdriven_1009a300);
                if (iVar5 == 0) {
                  puVar9 = (undefined4 *)(param_2 + 0x4b);
                  goto LAB_1004b170;
                }
                iVar5 = FUN_1007de60(uVar7,s_pointsampled_1009a630);
                if (iVar5 == 0) {
                  uVar7 = 0x100;
                }
                else {
                  iVar5 = FUN_1007de60(uVar7,s_bilinear_1009a640);
                  if (iVar5 != 0) goto LAB_1004b3bc;
                  uVar7 = 0x200;
                }
                puVar9 = (undefined4 *)(param_2 + 0x4b);
                goto LAB_1004b1b0;
              }
            }
            uVar8 = FUN_1007de60(uVar4,s_disablemipmapping_1009a650);
            if ((int)uVar8 == 0) {
              if (iVar5 != 0) {
                return '\0';
              }
              cVar2 = '\x01';
              if (uVar3 != 0) {
                iVar5 = param_2 + 0x4f;
                goto LAB_1004b3a4;
              }
            }
            else {
              uVar8 = FUN_1007de60(uVar4,s_resolution_1009a668);
              if ((int)uVar8 == 0) {
                cVar2 = FUN_1004a098(uVar8,param_3,local_4c,uVar10,param_2 + 0x37,param_2 + 0x3b,
                                     param_2 + 0x43,param_2 + 0x47,uVar3);
              }
              else {
                uVar8 = FUN_1007de60(uVar4,s_antialiasing_1009a678);
                if ((int)uVar8 == 0) {
                  if (uVar3 != 0) {
                    cVar2 = FUN_1004a518(uVar8,param_3,local_4c,uVar10,param_2 + 0x3f,uVar3);
                  }
                }
                else {
                  uVar8 = FUN_1007de60(uVar4,s_enableglidegammaramp_1009a688);
                  if ((int)uVar8 == 0) {
                    if (iVar5 != 0) {
                      return '\0';
                    }
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      iVar5 = param_2 + 0x50;
                      goto LAB_1004b3a4;
                    }
                  }
                  else {
                    uVar8 = FUN_1007de60(uVar4,s_forceverticalsync_1009a6a0);
                    if ((int)uVar8 == 0) {
                      if (iVar5 != 0) {
                        return '\0';
                      }
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        iVar5 = param_2 + 0x52;
                        goto LAB_1004b3a4;
                      }
                    }
                    else {
                      uVar8 = FUN_1007de60(uVar4,s_forceemulatingtruepciaccess_1009a6b8);
                      if ((int)uVar8 == 0) {
                        if (iVar5 != 0) {
                          return '\0';
                        }
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          iVar5 = param_2 + 0x53;
                          goto LAB_1004b3a4;
                        }
                      }
                      else {
                        uVar8 = FUN_1007de60(uVar4,s_16bitdepthbuffer_1009a6d8);
                        if ((int)uVar8 == 0) {
                          if (iVar5 != 0) {
                            return '\0';
                          }
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            iVar5 = param_2 + 0x54;
                            goto LAB_1004b3a4;
                          }
                        }
                        else {
                          uVar8 = FUN_1007de60(uVar4,s_3dfxwatermark_1009a6f0);
                          if ((int)uVar8 == 0) {
                            if (iVar5 != 0) {
                              return '\0';
                            }
                            cVar2 = '\x01';
                            if (uVar3 != 0) {
                              iVar5 = param_2 + 0x55;
                              goto LAB_1004b3a4;
                            }
                          }
                          else {
                            uVar8 = FUN_1007de60(uVar4,s_3dfxsplashscreen_1009a700);
                            if ((int)uVar8 == 0) {
                              if (iVar5 != 0) {
                                return '\0';
                              }
                              cVar2 = '\x01';
                              if (uVar3 != 0) {
                                iVar5 = param_2 + 0x56;
                                goto LAB_1004b3a4;
                              }
                            }
                            else {
                              uVar8 = FUN_1007de60(uVar4,s_pointcastpalette_1009a718);
                              if ((int)uVar8 == 0) {
                                if (iVar5 != 0) {
                                  return '\0';
                                }
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  iVar5 = param_2 + 0x51;
LAB_1004b3a4:
                                  cVar2 = FUN_10049e60(uVar8,param_3,local_4c,uVar10,iVar5,uVar3);
                                }
                              }
                              else {
                                uVar8 = FUN_1007de60(uVar4,s_enableinactiveappstate_1009a730);
                                if ((int)uVar8 != 0) {
                                  return '\0';
                                }
                                if (iVar5 != 0) {
                                  return '\0';
                                }
                                cVar2 = '\x01';
                                if (uVar3 != 0) {
                                  iVar5 = param_2 + 0x57;
                                  goto LAB_1004b3a4;
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
LAB_1004b3bc:
    uVar10 = uVar10 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

