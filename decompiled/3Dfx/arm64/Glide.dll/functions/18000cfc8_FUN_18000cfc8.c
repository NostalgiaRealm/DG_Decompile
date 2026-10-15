/*
 * FUN_18000cfc8 at 18000cfc8
 * uint __cdecl FUN_18000cfc8(undefined8 param_1, undefined4 * param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 18000cfc8-18000d62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000cfc8(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  char local_60 [4];
  undefined4 local_5c;
  longlong *local_58;
  
  uVar6 = 1;
  uVar11 = 0;
  local_5c = param_4;
  local_58 = param_3;
  do {
    plVar1 = local_58;
    uVar10 = local_5c;
    uVar3 = (**(code **)(*local_58 + 0x38))(local_58,local_5c);
    if (uVar3 <= uVar11) {
      return uVar6;
    }
    pbVar7 = (byte *)(**(code **)(*plVar1 + 0x40))(plVar1,uVar10,uVar11);
    uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,uVar10,uVar11);
    iVar4 = (**(code **)(*plVar1 + 0x60))(plVar1,uVar10,uVar11);
    uVar5 = FUN_180060ae0(pbVar7,(byte *)"outputapi");
    if (uVar5 == 0) {
      if (iVar4 == 0) {
        if (uVar3 == 1) {
          pbVar7 = (byte *)(**(code **)(*plVar1 + 0x50))(plVar1,uVar10,uVar11,0);
          uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d11warp");
          if (uVar3 == 0) {
            *param_2 = 3;
          }
          else {
            uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d11_fl10_0");
            if (uVar3 == 0) {
              uVar10 = 1;
            }
            else {
              uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d11_fl10_1");
              if (uVar3 == 0) {
                uVar10 = 2;
              }
              else {
                uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d11_fl11_0");
                if (uVar3 == 0) {
                  uVar10 = 4;
                }
                else {
                  uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d12_fl11_0");
                  if (param_5 < 0x264 || uVar3 != 0) {
                    uVar3 = FUN_180060ae0(pbVar7,(byte *)"d3d12_fl12_0");
                    if (uVar3 != 0) {
                      uVar3 = FUN_180060ae0(pbVar7,(byte *)"bestavailable");
                      if (uVar3 != 0) goto LAB_18000d3ec;
                      *param_2 = 0;
                      goto LAB_18000d600;
                    }
                    uVar10 = 6;
                  }
                  else {
                    uVar10 = 5;
                  }
                }
              }
            }
            *param_2 = uVar10;
          }
        }
        else {
LAB_18000d3e8:
          if (1 < uVar3) goto LAB_18000d3ec;
        }
      }
    }
    else {
      uVar5 = FUN_180060ae0(pbVar7,(byte *)"adapters");
      if (uVar5 == 0) {
        if (iVar4 == 0) {
          if (uVar3 != 1) goto LAB_18000d3e8;
          pbVar7 = (byte *)(**(code **)(*plVar1 + 0x50))(plVar1,uVar10,uVar11,0);
          uVar3 = FUN_180060ae0(pbVar7,&DAT_180063e04);
          if (uVar3 != 0) {
            puVar9 = param_2 + 1;
LAB_18000d1dc:
            uVar6 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar10,uVar11,0,puVar9);
            goto LAB_18000d5fc;
          }
          param_2[1] = 0;
        }
      }
      else {
        uVar5 = FUN_180060ae0(pbVar7,(byte *)"fullscreenoutput");
        if (uVar5 == 0) {
          if (iVar4 == 0) {
            if (uVar3 != 1) goto LAB_18000d3e8;
            pbVar7 = (byte *)(**(code **)(*plVar1 + 0x50))(plVar1,uVar10,uVar11,0);
            uVar3 = FUN_180060ae0(pbVar7,(byte *)"default");
            if (uVar3 != 0) {
              puVar9 = param_2 + 2;
              goto LAB_18000d1dc;
            }
            param_2[2] = 0;
          }
        }
        else {
          uVar5 = FUN_180060ae0(pbVar7,(byte *)"fullscreenmode");
          if (uVar5 == 0) {
            if ((iVar4 == 0) && (uVar3 != 0)) {
              local_60[0] = '\0';
              uVar8 = FUN_18000cb30(0,plVar1,uVar10,uVar11,local_60,uVar3);
              uVar6 = (uint)uVar8;
              *(bool *)(param_2 + 8) = local_60[0] == '\0';
LAB_18000d5fc:
              uVar6 = uVar6 & 0xff;
            }
          }
          else {
            uVar5 = FUN_180060ae0(pbVar7,(byte *)"scalingmode");
            if (uVar5 == 0) {
              if (iVar4 == 0) {
                if (uVar3 != 1) goto LAB_18000d3e8;
                pbVar7 = (byte *)(**(code **)(*plVar1 + 0x50))(plVar1,uVar10,uVar11,0);
                uVar3 = FUN_180060ae0(pbVar7,(byte *)"unspecified");
                if (uVar3 == 0) {
                  param_2[7] = 0;
                }
                else {
                  uVar3 = FUN_180060ae0(pbVar7,(byte *)"centered");
                  if (uVar3 == 0) {
                    uVar10 = 1;
                  }
                  else {
                    uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched");
                    if (uVar3 == 0) {
                      uVar10 = 2;
                    }
                    else {
                      uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched_ar");
                      if (uVar3 == 0) {
                        param_2[7] = 3;
                        goto LAB_18000d600;
                      }
                      uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched_4_3");
                      if (uVar3 == 0) {
                        uVar10 = 4;
                      }
                      else {
                        uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched_4_3_crt");
                        if (uVar3 == 0) {
                          uVar10 = 5;
                        }
                        else {
                          uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched_4_3_c64");
                          if (uVar3 == 0) {
                            uVar10 = 6;
                          }
                          else {
                            uVar3 = FUN_180060ae0(pbVar7,(byte *)"centered_ar");
                            if (uVar3 == 0) {
                              uVar10 = 7;
                            }
                            else {
                              uVar3 = FUN_180060ae0(pbVar7,(byte *)"stretched_ar_crt");
                              if (param_5 < 0x276 || uVar3 != 0) goto LAB_18000d3ec;
                              uVar10 = 8;
                            }
                          }
                        }
                      }
                    }
                  }
                  param_2[7] = uVar10;
                }
              }
            }
            else {
              uVar5 = FUN_180060ae0(pbVar7,(byte *)"progressivescanlineorder");
              if (uVar5 == 0) {
                if ((iVar4 == 0) && (uVar3 != 0)) {
                  local_60[0] = '\0';
                  uVar8 = FUN_18000cb30(0,plVar1,uVar10,uVar11,local_60,uVar3);
                  uVar6 = (uint)uVar8;
                  param_2[6] = (uint)(local_60[0] != '\0');
                  goto LAB_18000d5fc;
                }
              }
              else {
                uVar5 = FUN_180060ae0(pbVar7,(byte *)"enumeraterefreshrates");
                if (uVar5 == 0) {
                  if (iVar4 != 0) goto LAB_18000d3ec;
                  uVar6 = 1;
                  if (uVar3 != 0) {
                    puVar9 = (undefined4 *)((longlong)param_2 + 0x22);
                    goto LAB_18000d5e8;
                  }
                }
                else {
                  uVar5 = FUN_180060ae0(pbVar7,(byte *)"brightness");
                  if (uVar5 == 0) {
                    if (iVar4 != 0) {
                      return 0;
                    }
                    uVar6 = 1;
                    if (uVar3 != 0) {
                      if (uVar3 == 1) {
                        puVar9 = param_2 + 3;
LAB_18000d494:
                        cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar10,uVar11,0,puVar9);
                        if (cVar2 != '\0') {
                          uVar6 = 1;
                          goto LAB_18000d600;
                        }
                      }
LAB_18000d3ec:
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar5 = FUN_180060ae0(pbVar7,(byte *)"color");
                    if (uVar5 == 0) {
                      if (iVar4 != 0) {
                        return 0;
                      }
                      uVar6 = 1;
                      if (uVar3 != 0) {
                        if (uVar3 == 1) {
                          puVar9 = param_2 + 4;
                          goto LAB_18000d494;
                        }
                        goto LAB_18000d3ec;
                      }
                    }
                    else {
                      uVar5 = FUN_180060ae0(pbVar7,(byte *)"contrast");
                      if (uVar5 == 0) {
                        if (iVar4 != 0) {
                          return 0;
                        }
                        uVar6 = 1;
                        if (uVar3 != 0) {
                          if (uVar3 == 1) {
                            puVar9 = param_2 + 5;
                            goto LAB_18000d494;
                          }
                          goto LAB_18000d3ec;
                        }
                      }
                      else {
                        uVar5 = FUN_180060ae0(pbVar7,(byte *)"inheritcolorprofileinfullscreenmode");
                        if (uVar5 == 0) {
                          if (iVar4 != 0) goto LAB_18000d3ec;
                          uVar6 = 1;
                          if (uVar3 != 0) {
                            puVar9 = (undefined4 *)((longlong)param_2 + 0x26);
                            goto LAB_18000d5e8;
                          }
                        }
                        else {
                          uVar5 = FUN_180060ae0(pbVar7,(byte *)"keepwindowaspectratio");
                          if (uVar5 == 0) {
                            if (iVar4 != 0) goto LAB_18000d3ec;
                            uVar6 = 1;
                            if (uVar3 != 0) {
                              puVar9 = (undefined4 *)((longlong)param_2 + 0x21);
                              goto LAB_18000d5e8;
                            }
                          }
                          else {
                            uVar5 = FUN_180060ae0(pbVar7,(byte *)"capturemouse");
                            if (uVar5 == 0) {
                              if (iVar4 != 0) goto LAB_18000d3ec;
                              uVar6 = 1;
                              if (uVar3 != 0) {
                                puVar9 = (undefined4 *)((longlong)param_2 + 0x23);
                                goto LAB_18000d5e8;
                              }
                            }
                            else {
                              uVar5 = FUN_180060ae0(pbVar7,(byte *)"centerappwindow");
                              if (uVar5 == 0) {
                                if (iVar4 != 0) goto LAB_18000d3ec;
                                uVar6 = 1;
                                if (uVar3 != 0) {
                                  puVar9 = param_2 + 9;
                                  goto LAB_18000d5e8;
                                }
                              }
                              else {
                                if (param_5 < 0x285) {
                                  return 0;
                                }
                                uVar5 = FUN_180060ae0(pbVar7,(byte *)"disablescreensaver");
                                if (uVar5 != 0) {
                                  return 0;
                                }
                                if ((iVar4 == 0) && (uVar3 != 0)) {
                                  puVar9 = (undefined4 *)((longlong)param_2 + 0x25);
LAB_18000d5e8:
                                  uVar8 = FUN_18000cb30(0,plVar1,uVar10,uVar11,(undefined1 *)puVar9,
                                                        uVar3);
                                  uVar6 = (uint)uVar8;
                                  goto LAB_18000d5fc;
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
LAB_18000d600:
    uVar11 = uVar11 + 1;
    if (uVar6 == 0) {
      return 0;
    }
  } while( true );
}

