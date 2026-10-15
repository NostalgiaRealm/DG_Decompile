/*
 * FUN_18000a070 at 18000a070
 * undefined1 __fastcall FUN_18000a070(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 18000a070-18000a61d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_18000a070(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong local_res8 [4];
  undefined8 in_stack_ffffffffffffffa0;
  
  uVar7 = 1;
  uVar11 = 0;
  local_res8[0] = param_1;
LAB_18000a092:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar11) {
      return (char)uVar7;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
    iVar5 = FUN_18005d788(pbVar6,(byte *)"videocard");
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      uVar7 = 1;
      if (uVar3 == 1) {
        pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
        iVar4 = FUN_18005d788(pbVar6,(byte *)"voodoo_graphics");
        if (iVar4 != 0) {
          iVar4 = FUN_18005d788(pbVar6,(byte *)"voodoo_rush");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x27) = 1;
          }
          else {
            iVar4 = FUN_18005d788(pbVar6,(byte *)"voodoo_2");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x27) = 2;
            }
            else {
              iVar4 = FUN_18005d788(pbVar6,(byte *)"voodoo_banshee");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x27) = 3;
              }
              else {
                iVar4 = FUN_18005d788(pbVar6,(byte *)"other_greater");
                if (iVar4 != 0) {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0x27) = 4;
              }
            }
          }
          goto LAB_18000a36b;
        }
        *(undefined4 *)(param_2 + 0x27) = 0;
        uVar11 = uVar11 + 1;
        goto LAB_18000a092;
      }
LAB_18000a3b0:
      uVar7 = 1;
      if (uVar3 < 2) goto LAB_18000a5fd;
LAB_18000a3b6:
      uVar7 = 0;
    }
    else {
      pbVar10 = pbVar6;
      iVar5 = FUN_18005d788(pbVar6,(byte *)"onboardram");
      if (iVar5 == 0) {
        if (iVar4 == 0) {
          uVar7 = 1;
          if (uVar3 == 0) goto LAB_18000a5fd;
          piVar1 = (int *)(param_2 + 0x2b);
          bVar2 = FUN_180009488(pbVar10,param_3,param_4,uVar11,piVar1,uVar3);
          *piVar1 = *piVar1 << 0x14;
          goto LAB_18000a5fb;
        }
        goto LAB_18000a3b6;
      }
      pbVar10 = pbVar6;
      iVar5 = FUN_18005d788(pbVar6,(byte *)"memorysizeoftmu");
      if (iVar5 == 0) {
        if (iVar4 != 0) goto LAB_18000a3b6;
        uVar7 = 1;
        if (uVar3 != 0) {
          piVar1 = (int *)(param_2 + 0x2f);
          bVar2 = FUN_180009488(pbVar10,param_3,param_4,uVar11,piVar1,uVar3);
          *piVar1 = *piVar1 << 10;
          goto LAB_18000a5fb;
        }
      }
      else {
        pbVar10 = pbVar6;
        iVar5 = FUN_18005d788(pbVar6,(byte *)"numberoftmus");
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_18000a3b6;
          uVar7 = 1;
          if (uVar3 != 0) {
            bVar2 = FUN_180009488(pbVar10,param_3,param_4,uVar11,param_2 + 0x33,uVar3);
            goto LAB_18000a5fb;
          }
        }
        else {
          if (param_5 < 0x263) {
            pbVar10 = pbVar6;
            iVar5 = FUN_18005d788(pbVar6,(byte *)"forcebilinearfilter");
            if (iVar5 == 0) {
              if (iVar4 == 0) {
                uVar7 = 1;
                if (uVar3 != 0) {
                  local_res8[0] = local_res8[0] & 0xffffffffffffff00;
                  uVar7 = FUN_1800093bc(pbVar10,param_3,param_4,uVar11,(undefined1 *)local_res8,
                                        uVar3);
                  uVar7 = uVar7 & 0xff;
                  *(uint *)(param_2 + 0x4b) = -(uint)((char)local_res8[0] != '\0') & 0x200;
                }
                goto LAB_18000a5fd;
              }
              goto LAB_18000a3b6;
            }
          }
          else {
            iVar5 = FUN_18005d788(pbVar6,(byte *)"tmufiltering");
            if (iVar5 == 0) {
              if (iVar4 != 0) {
                return 0;
              }
              uVar7 = 1;
              if (uVar3 != 1) goto LAB_18000a3b0;
              pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
              iVar4 = FUN_18005d788(pbVar6,(byte *)"appdriven");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x4b) = 0;
              }
              else {
                iVar4 = FUN_18005d788(pbVar6,(byte *)"pointsampled");
                if (iVar4 == 0) {
                  *(undefined4 *)(param_2 + 0x4b) = 0x100;
                }
                else {
                  iVar4 = FUN_18005d788(pbVar6,(byte *)"bilinear");
                  if (iVar4 != 0) goto LAB_18000a5fd;
                  *(undefined4 *)(param_2 + 0x4b) = 0x200;
                }
              }
LAB_18000a36b:
              uVar7 = 1;
              uVar11 = uVar11 + 1;
              goto LAB_18000a092;
            }
          }
          pbVar10 = pbVar6;
          iVar5 = FUN_18005d788(pbVar6,(byte *)"disablemipmapping");
          if (iVar5 == 0) {
            if (iVar4 != 0) goto LAB_18000a3b6;
            uVar7 = 1;
            if (uVar3 != 0) {
              puVar8 = (undefined1 *)(param_2 + 0x4f);
              pbVar6 = pbVar10;
              goto LAB_18000a5e4;
            }
          }
          else {
            pbVar10 = pbVar6;
            iVar5 = FUN_18005d788(pbVar6,(byte *)"resolution");
            if (iVar5 == 0) {
              bVar2 = FUN_180009554(pbVar10,param_3,param_4,uVar11,(int *)(param_2 + 0x37),
                                    (int *)(param_2 + 0x3b),param_2 + 0x43,
                                    (undefined4 *)(param_2 + 0x47),uVar3,in_stack_ffffffffffffffa0,
                                    param_5);
LAB_18000a5fb:
              uVar7 = (ulonglong)bVar2;
            }
            else {
              pbVar10 = pbVar6;
              iVar5 = FUN_18005d788(pbVar6,(byte *)"antialiasing");
              if (iVar5 == 0) {
                if (uVar3 != 0) {
                  bVar2 = FUN_18000971c(pbVar10,param_3,param_4,uVar11,
                                        (undefined4 *)(param_2 + 0x3f),uVar3);
                  goto LAB_18000a5fb;
                }
              }
              else {
                pbVar10 = pbVar6;
                iVar5 = FUN_18005d788(pbVar6,(byte *)"enableglidegammaramp");
                if (iVar5 == 0) {
                  if (iVar4 != 0) goto LAB_18000a3b6;
                  uVar7 = 1;
                  if (uVar3 != 0) {
                    puVar8 = (undefined1 *)(param_2 + 0x50);
                    pbVar6 = pbVar10;
                    goto LAB_18000a5e4;
                  }
                }
                else {
                  pbVar10 = pbVar6;
                  iVar5 = FUN_18005d788(pbVar6,(byte *)"forceverticalsync");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_18000a3b6;
                    uVar7 = 1;
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x52);
                      pbVar6 = pbVar10;
                      goto LAB_18000a5e4;
                    }
                  }
                  else {
                    pbVar10 = pbVar6;
                    iVar5 = FUN_18005d788(pbVar6,(byte *)"forceemulatingtruepciaccess");
                    if (iVar5 == 0) {
                      if (iVar4 != 0) goto LAB_18000a3b6;
                      uVar7 = 1;
                      if (uVar3 != 0) {
                        puVar8 = (undefined1 *)(param_2 + 0x53);
                        pbVar6 = pbVar10;
                        goto LAB_18000a5e4;
                      }
                    }
                    else {
                      pbVar10 = pbVar6;
                      iVar5 = FUN_18005d788(pbVar6,(byte *)"16bitdepthbuffer");
                      if (iVar5 == 0) {
                        if (iVar4 != 0) goto LAB_18000a3b6;
                        uVar7 = 1;
                        if (uVar3 != 0) {
                          puVar8 = (undefined1 *)(param_2 + 0x54);
                          pbVar6 = pbVar10;
                          goto LAB_18000a5e4;
                        }
                      }
                      else {
                        pbVar10 = pbVar6;
                        iVar5 = FUN_18005d788(pbVar6,(byte *)"3dfxwatermark");
                        if (iVar5 == 0) {
                          if (iVar4 != 0) goto LAB_18000a3b6;
                          uVar7 = 1;
                          if (uVar3 != 0) {
                            puVar8 = (undefined1 *)(param_2 + 0x55);
                            pbVar6 = pbVar10;
                            goto LAB_18000a5e4;
                          }
                        }
                        else {
                          pbVar10 = pbVar6;
                          iVar5 = FUN_18005d788(pbVar6,(byte *)"3dfxsplashscreen");
                          if (iVar5 == 0) {
                            if (iVar4 != 0) goto LAB_18000a3b6;
                            uVar7 = 1;
                            if (uVar3 != 0) {
                              puVar8 = (undefined1 *)(param_2 + 0x56);
                              pbVar6 = pbVar10;
                              goto LAB_18000a5e4;
                            }
                          }
                          else {
                            pbVar10 = pbVar6;
                            iVar5 = FUN_18005d788(pbVar6,(byte *)"pointcastpalette");
                            if (iVar5 == 0) {
                              if (iVar4 != 0) goto LAB_18000a3b6;
                              uVar7 = 1;
                              if (uVar3 != 0) {
                                puVar8 = (undefined1 *)(param_2 + 0x51);
                                pbVar6 = pbVar10;
LAB_18000a5e4:
                                uVar9 = FUN_1800093bc(pbVar6,param_3,param_4,uVar11,puVar8,uVar3);
                                bVar2 = (byte)uVar9;
                                goto LAB_18000a5fb;
                              }
                            }
                            else {
                              iVar5 = FUN_18005d788(pbVar6,(byte *)"enableinactiveappstate");
                              if (iVar5 != 0) {
                                return 0;
                              }
                              if (iVar4 != 0) goto LAB_18000a3b6;
                              uVar7 = 1;
                              if (uVar3 != 0) {
                                puVar8 = (undefined1 *)(param_2 + 0x57);
                                goto LAB_18000a5e4;
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
LAB_18000a5fd:
    uVar11 = uVar11 + 1;
    if ((char)uVar7 == '\0') {
      return 0;
    }
  } while( true );
}

