/*
 * FUN_1800cabf4 at 1800cabf4
 * undefined1 __fastcall FUN_1800cabf4(ulonglong param_1, undefined4 * param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1800cabf4-1800cb268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800cabf4(ulonglong param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4,
             uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong local_res8 [4];
  
  uVar6 = 1;
  uVar10 = 0;
  local_res8[0] = param_1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar2 <= uVar10) {
      return (char)uVar6;
    }
    pbVar5 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar10);
    uVar2 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar10);
    iVar3 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar10);
    iVar4 = FUN_1800fc514(pbVar5,(byte *)"outputapi");
    if (iVar4 == 0) {
      if (iVar3 == 0) {
        if (uVar2 == 1) {
          pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
          iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d11warp");
          if (iVar3 == 0) {
            *param_2 = 3;
          }
          else {
            iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d11_fl10_0");
            if (iVar3 == 0) {
              *param_2 = 1;
            }
            else {
              iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d11_fl10_1");
              if (iVar3 == 0) {
                *param_2 = 2;
              }
              else {
                iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d11_fl11_0");
                if (iVar3 == 0) {
                  *param_2 = 4;
                }
                else {
                  iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d12_fl11_0");
                  if ((iVar3 == 0) && (0x263 < param_5)) {
                    *param_2 = 5;
                  }
                  else {
                    iVar3 = FUN_1800fc514(pbVar5,(byte *)"d3d12_fl12_0");
                    if (iVar3 == 0) {
                      *param_2 = 6;
                    }
                    else {
                      iVar3 = FUN_1800fc514(pbVar5,(byte *)"bestavailable");
                      if (iVar3 != 0) {
                        return 0;
                      }
                      *param_2 = 0;
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_1800cb01e:
          if (1 < uVar2) goto LAB_1800cb024;
        }
      }
    }
    else {
      iVar4 = FUN_1800fc514(pbVar5,(byte *)"adapters");
      if (iVar4 == 0) {
        if (iVar3 == 0) {
          if (uVar2 != 1) goto LAB_1800cb01e;
          pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
          iVar3 = FUN_1800fc514(pbVar5,&DAT_1801050c4);
          if (iVar3 == 0) {
            param_2[1] = 0;
          }
          else {
            puVar7 = param_2 + 1;
LAB_1800caddb:
            bVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar10,0,puVar7);
LAB_1800cb245:
            uVar6 = (ulonglong)bVar1;
          }
        }
      }
      else {
        iVar4 = FUN_1800fc514(pbVar5,(byte *)"fullscreenoutput");
        if (iVar4 == 0) {
          if (iVar3 == 0) {
            if (uVar2 != 1) goto LAB_1800cb01e;
            pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
            iVar3 = FUN_1800fc514(pbVar5,(byte *)"default");
            if (iVar3 != 0) {
              puVar7 = param_2 + 2;
              goto LAB_1800caddb;
            }
            param_2[2] = 0;
          }
        }
        else {
          pbVar9 = pbVar5;
          iVar4 = FUN_1800fc514(pbVar5,(byte *)"fullscreenmode");
          if (iVar4 == 0) {
            if ((iVar3 == 0) && (uVar2 != 0)) {
              local_res8[0] = local_res8[0] & 0xffffffffffffff00;
              uVar6 = FUN_1800ca5b8(pbVar9,param_3,param_4,uVar10,(undefined1 *)local_res8,uVar2);
              uVar6 = uVar6 & 0xff;
              *(bool *)(param_2 + 8) = (char)local_res8[0] == '\0';
            }
          }
          else {
            iVar4 = FUN_1800fc514(pbVar5,(byte *)"scalingmode");
            if (iVar4 == 0) {
              if (iVar3 == 0) {
                if (uVar2 != 1) goto LAB_1800cb01e;
                pbVar5 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar10,0);
                iVar3 = FUN_1800fc514(pbVar5,(byte *)"unspecified");
                if (iVar3 == 0) {
                  param_2[7] = 0;
                }
                else {
                  iVar3 = FUN_1800fc514(pbVar5,(byte *)"centered");
                  if (iVar3 == 0) {
                    param_2[7] = 1;
                  }
                  else {
                    iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched");
                    if (iVar3 == 0) {
                      param_2[7] = 2;
                    }
                    else {
                      iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched_ar");
                      if (iVar3 == 0) {
                        param_2[7] = 3;
                      }
                      else {
                        iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched_4_3");
                        if (iVar3 == 0) {
                          param_2[7] = 4;
                        }
                        else {
                          iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched_4_3_crt");
                          if (iVar3 == 0) {
                            param_2[7] = 5;
                          }
                          else {
                            iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched_4_3_c64");
                            if (iVar3 == 0) {
                              param_2[7] = 6;
                            }
                            else {
                              iVar3 = FUN_1800fc514(pbVar5,(byte *)"centered_ar");
                              if (iVar3 == 0) {
                                param_2[7] = 7;
                              }
                              else {
                                iVar3 = FUN_1800fc514(pbVar5,(byte *)"stretched_ar_crt");
                                if (iVar3 != 0) {
                                  return 0;
                                }
                                if (param_5 < 0x276) {
                                  return 0;
                                }
                                param_2[7] = 8;
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
            else {
              pbVar9 = pbVar5;
              iVar4 = FUN_1800fc514(pbVar5,(byte *)"progressivescanlineorder");
              if (iVar4 == 0) {
                if ((iVar3 == 0) && (uVar2 != 0)) {
                  local_res8[0] = local_res8[0] & 0xffffffffffffff00;
                  uVar6 = FUN_1800ca5b8(pbVar9,param_3,param_4,uVar10,(undefined1 *)local_res8,uVar2
                                       );
                  uVar6 = uVar6 & 0xff;
                  param_2[6] = (uint)((char)local_res8[0] != '\0');
                }
              }
              else {
                pbVar9 = pbVar5;
                iVar4 = FUN_1800fc514(pbVar5,(byte *)"enumeraterefreshrates");
                if (iVar4 == 0) {
                  if (iVar3 == 0) {
                    uVar6 = 1;
                    if (uVar2 != 0) {
                      puVar7 = (undefined4 *)((longlong)param_2 + 0x22);
                      pbVar5 = pbVar9;
                      goto LAB_1800cb22e;
                    }
                  }
                  else {
LAB_1800cb024:
                    uVar6 = 0;
                  }
                }
                else {
                  pbVar9 = pbVar5;
                  iVar4 = FUN_1800fc514(pbVar5,(byte *)"brightness");
                  if (iVar4 == 0) {
                    if (iVar3 != 0) goto LAB_1800cb024;
                    uVar6 = 1;
                    if (uVar2 != 0) {
                      puVar7 = param_2 + 3;
LAB_1800cb13a:
                      bVar1 = FUN_1800ca684(pbVar9,param_3,param_4,uVar10,puVar7,uVar2);
                      goto LAB_1800cb245;
                    }
                  }
                  else {
                    pbVar9 = pbVar5;
                    iVar4 = FUN_1800fc514(pbVar5,(byte *)"color");
                    if (iVar4 == 0) {
                      if (iVar3 != 0) goto LAB_1800cb024;
                      uVar6 = 1;
                      if (uVar2 != 0) {
                        puVar7 = param_2 + 4;
                        goto LAB_1800cb13a;
                      }
                    }
                    else {
                      pbVar9 = pbVar5;
                      iVar4 = FUN_1800fc514(pbVar5,(byte *)"contrast");
                      if (iVar4 == 0) {
                        if (iVar3 != 0) goto LAB_1800cb024;
                        uVar6 = 1;
                        if (uVar2 != 0) {
                          puVar7 = param_2 + 5;
                          goto LAB_1800cb13a;
                        }
                      }
                      else {
                        pbVar9 = pbVar5;
                        iVar4 = FUN_1800fc514(pbVar5,(byte *)"inheritcolorprofileinfullscreenmode");
                        if (iVar4 == 0) {
                          if (iVar3 != 0) goto LAB_1800cb024;
                          uVar6 = 1;
                          if (uVar2 != 0) {
                            puVar7 = (undefined4 *)((longlong)param_2 + 0x26);
                            pbVar5 = pbVar9;
                            goto LAB_1800cb22e;
                          }
                        }
                        else {
                          pbVar9 = pbVar5;
                          iVar4 = FUN_1800fc514(pbVar5,(byte *)"keepwindowaspectratio");
                          if (iVar4 == 0) {
                            if (iVar3 != 0) goto LAB_1800cb024;
                            uVar6 = 1;
                            if (uVar2 != 0) {
                              puVar7 = (undefined4 *)((longlong)param_2 + 0x21);
                              pbVar5 = pbVar9;
                              goto LAB_1800cb22e;
                            }
                          }
                          else {
                            pbVar9 = pbVar5;
                            iVar4 = FUN_1800fc514(pbVar5,(byte *)"capturemouse");
                            if (iVar4 == 0) {
                              if (iVar3 != 0) goto LAB_1800cb024;
                              uVar6 = 1;
                              if (uVar2 != 0) {
                                puVar7 = (undefined4 *)((longlong)param_2 + 0x23);
                                pbVar5 = pbVar9;
                                goto LAB_1800cb22e;
                              }
                            }
                            else {
                              pbVar9 = pbVar5;
                              iVar4 = FUN_1800fc514(pbVar5,(byte *)"centerappwindow");
                              if (iVar4 == 0) {
                                if (iVar3 != 0) goto LAB_1800cb024;
                                uVar6 = 1;
                                if (uVar2 != 0) {
                                  puVar7 = param_2 + 9;
                                  pbVar5 = pbVar9;
                                  goto LAB_1800cb22e;
                                }
                              }
                              else {
                                if ((param_5 < 0x285) ||
                                   (iVar4 = FUN_1800fc514(pbVar5,(byte *)"disablescreensaver"),
                                   iVar4 != 0)) {
                                  return 0;
                                }
                                if ((iVar3 == 0) && (uVar2 != 0)) {
                                  puVar7 = (undefined4 *)((longlong)param_2 + 0x25);
LAB_1800cb22e:
                                  uVar8 = FUN_1800ca5b8(pbVar5,param_3,param_4,uVar10,
                                                        (undefined1 *)puVar7,uVar2);
                                  bVar1 = (byte)uVar8;
                                  goto LAB_1800cb245;
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
    if ((char)uVar6 == '\0') {
      return 0;
    }
  } while( true );
}

