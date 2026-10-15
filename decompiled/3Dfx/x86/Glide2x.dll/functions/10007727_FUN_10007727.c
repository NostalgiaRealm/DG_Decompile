/*
 * FUN_10007727 at 10007727
 * undefined1 __fastcall FUN_10007727(undefined4 param_1, undefined4 * param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10007727-10007d74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 __fastcall
FUN_10007727(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint local_c;
  char local_5;
  
  local_c = 0;
  uVar7 = 1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x1c))(param_4);
    if (uVar2 <= local_c) {
      return (char)uVar7;
    }
    pbVar3 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,local_c);
    uVar2 = (**(code **)(*param_3 + 0x24))(param_4,local_c);
    iVar4 = (**(code **)(*param_3 + 0x30))(param_4,local_c);
    iVar5 = FUN_1004f6cb(pbVar3,(byte *)"outputapi");
    if (iVar5 == 0) {
      if (iVar4 == 0) {
        if (uVar2 != 1) goto LAB_10007b49;
        pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
        iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d11warp");
        if (iVar4 == 0) {
          *param_2 = 3;
        }
        else {
          iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d11_fl10_0");
          if (iVar4 == 0) {
            *param_2 = 1;
          }
          else {
            iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d11_fl10_1");
            if (iVar4 == 0) {
              *param_2 = 2;
            }
            else {
              iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d11_fl11_0");
              if (iVar4 == 0) {
                *param_2 = 4;
              }
              else {
                iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d12_fl11_0");
                if ((iVar4 == 0) && (0x263 < param_5)) {
                  *param_2 = 5;
                }
                else {
                  iVar4 = FUN_1004f6cb(pbVar3,(byte *)"d3d12_fl12_0");
                  if (iVar4 != 0) {
                    iVar4 = FUN_1004f6cb(pbVar3,(byte *)"bestavailable");
                    puVar6 = param_2;
                    if (iVar4 == 0) goto LAB_100078d3;
                    goto LAB_10007b52;
                  }
                  *param_2 = 6;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = FUN_1004f6cb(pbVar3,(byte *)"adapters");
      if (iVar5 == 0) {
        if (iVar4 == 0) {
          if (uVar2 == 1) {
            pbVar9 = &DAT_1005297c;
            pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
            iVar4 = FUN_1004f6cb(pbVar3,pbVar9);
            puVar6 = param_2 + 1;
joined_r0x10007982:
            if (iVar4 == 0) {
LAB_100078d3:
              *puVar6 = 0;
            }
            else {
              bVar1 = (**(code **)(*param_3 + 0x2c))(param_4,local_c,0,puVar6);
              uVar7 = (uint)bVar1;
            }
          }
          else {
LAB_10007b49:
            if (1 < uVar2) {
LAB_10007b52:
              uVar7 = 0;
            }
          }
        }
      }
      else {
        iVar5 = FUN_1004f6cb(pbVar3,(byte *)"fullscreenoutput");
        if (iVar5 == 0) {
          if (iVar4 == 0) {
            if (uVar2 == 1) {
              pcVar10 = "default";
              pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
              iVar4 = FUN_1004f6cb(pbVar3,(byte *)pcVar10);
              puVar6 = param_2 + 2;
              goto joined_r0x10007982;
            }
            goto LAB_10007b49;
          }
        }
        else {
          pcVar10 = "fullscreenmode";
          iVar5 = FUN_1004f6cb(pbVar3,(byte *)"fullscreenmode");
          if (iVar5 == 0) {
            if ((iVar4 == 0) && (uVar2 != 0)) {
              local_5 = '\0';
              uVar7 = FUN_1000728f(pcVar10,param_3,param_4,local_c,&local_5,uVar2);
              uVar7 = uVar7 & 0xff;
              *(bool *)(param_2 + 8) = local_5 == '\0';
            }
          }
          else {
            iVar5 = FUN_1004f6cb(pbVar3,(byte *)"scalingmode");
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                if (uVar2 != 1) goto LAB_10007b49;
                pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
                iVar4 = FUN_1004f6cb(pbVar3,(byte *)"unspecified");
                if (iVar4 == 0) {
                  param_2[7] = 0;
                }
                else {
                  iVar4 = FUN_1004f6cb(pbVar3,(byte *)"centered");
                  if (iVar4 == 0) {
                    param_2[7] = 1;
                  }
                  else {
                    iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched");
                    if (iVar4 == 0) {
                      param_2[7] = 2;
                    }
                    else {
                      iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched_ar");
                      if (iVar4 == 0) {
                        param_2[7] = 3;
                      }
                      else {
                        iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched_4_3");
                        if (iVar4 == 0) {
                          param_2[7] = 4;
                        }
                        else {
                          iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched_4_3_crt");
                          if (iVar4 == 0) {
                            param_2[7] = 5;
                          }
                          else {
                            iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched_4_3_c64");
                            if (iVar4 == 0) {
                              param_2[7] = 6;
                            }
                            else {
                              iVar4 = FUN_1004f6cb(pbVar3,(byte *)"centered_ar");
                              if (iVar4 == 0) {
                                param_2[7] = 7;
                              }
                              else {
                                iVar4 = FUN_1004f6cb(pbVar3,(byte *)"stretched_ar_crt");
                                if ((iVar4 != 0) || (param_5 < 0x276)) goto LAB_10007b52;
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
              pcVar10 = "progressivescanlineorder";
              iVar5 = FUN_1004f6cb(pbVar3,(byte *)"progressivescanlineorder");
              if (iVar5 == 0) {
                if ((iVar4 == 0) && (uVar2 != 0)) {
                  local_5 = '\0';
                  uVar7 = FUN_1000728f(pcVar10,param_3,param_4,local_c,&local_5,uVar2);
                  uVar7 = uVar7 & 0xff;
                  param_2[6] = (uint)(local_5 != '\0');
                }
              }
              else {
                pcVar10 = "enumeraterefreshrates";
                iVar5 = FUN_1004f6cb(pbVar3,(byte *)"enumeraterefreshrates");
                puVar6 = (undefined4 *)((int)param_2 + 0x22);
                if (iVar5 == 0) {
joined_r0x10007c89:
                  if (iVar4 != 0) goto LAB_10007d09;
                  uVar7 = 1;
joined_r0x10007d5f:
                  if (uVar2 != 0) {
                    uVar8 = FUN_1000728f(pcVar10,param_3,param_4,local_c,(undefined1 *)puVar6,uVar2)
                    ;
                    bVar1 = (byte)uVar8;
                    goto LAB_10007d2e;
                  }
                }
                else {
                  pcVar10 = "brightness";
                  iVar5 = FUN_1004f6cb(pbVar3,(byte *)"brightness");
                  puVar6 = param_2 + 3;
                  if (iVar5 != 0) {
                    pcVar10 = "color";
                    iVar5 = FUN_1004f6cb(pbVar3,(byte *)"color");
                    puVar6 = param_2 + 4;
                    if (iVar5 != 0) {
                      pcVar10 = "contrast";
                      iVar5 = FUN_1004f6cb(pbVar3,(byte *)"contrast");
                      puVar6 = param_2 + 5;
                      if (iVar5 != 0) {
                        pcVar10 = "inheritcolorprofileinfullscreenmode";
                        iVar5 = FUN_1004f6cb(pbVar3,(byte *)"inheritcolorprofileinfullscreenmode");
                        puVar6 = (undefined4 *)((int)param_2 + 0x26);
                        if (iVar5 == 0) goto joined_r0x10007c89;
                        pcVar10 = "keepwindowaspectratio";
                        iVar5 = FUN_1004f6cb(pbVar3,(byte *)"keepwindowaspectratio");
                        puVar6 = (undefined4 *)((int)param_2 + 0x21);
                        if (iVar5 != 0) {
                          pcVar10 = "capturemouse";
                          iVar5 = FUN_1004f6cb(pbVar3,(byte *)"capturemouse");
                          puVar6 = (undefined4 *)((int)param_2 + 0x23);
                          if (iVar5 != 0) {
                            pcVar10 = "centerappwindow";
                            iVar5 = FUN_1004f6cb(pbVar3,(byte *)"centerappwindow");
                            if (iVar5 == 0) {
                              if (iVar4 != 0) goto LAB_10007d09;
                              uVar7 = 1;
                              puVar6 = param_2 + 9;
                            }
                            else {
                              if (param_5 < 0x285) {
                                return 0;
                              }
                              pcVar10 = "disablescreensaver";
                              iVar5 = FUN_1004f6cb(pbVar3,(byte *)"disablescreensaver");
                              if (iVar5 != 0) {
                                return 0;
                              }
                              puVar6 = (undefined4 *)((int)param_2 + 0x25);
                              if (iVar4 != 0) goto LAB_100079d9;
                            }
                            goto joined_r0x10007d5f;
                          }
                        }
                        if (iVar4 == 0) {
                          uVar7 = 1;
                          goto joined_r0x10007d5f;
                        }
                        goto LAB_10007d09;
                      }
                    }
                  }
                  if (iVar4 == 0) {
                    uVar7 = 1;
                    if (uVar2 != 0) {
                      bVar1 = FUN_1000731a(pcVar10,param_3,param_4,local_c,puVar6,uVar2);
LAB_10007d2e:
                      uVar7 = (uint)bVar1;
                    }
                  }
                  else {
LAB_10007d09:
                    uVar7 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_100079d9:
    local_c = local_c + 1;
    if ((char)uVar7 == '\0') {
      return 0;
    }
  } while( true );
}

