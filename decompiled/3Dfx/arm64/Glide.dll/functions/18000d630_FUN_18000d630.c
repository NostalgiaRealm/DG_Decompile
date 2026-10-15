/*
 * FUN_18000d630 at 18000d630
 * uint __cdecl FUN_18000d630(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 18000d630-18000dbef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000d630(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 in_stack_ffffffffffffff78;
  char local_60 [16];
  
  uVar6 = 1;
  uVar11 = 0;
LAB_18000d66c:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar11) {
      return uVar6;
    }
    pbVar7 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
    uVar5 = FUN_180060ae0(pbVar7,(byte *)"videocard");
    if (uVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      if (uVar3 == 1) {
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
        uVar6 = FUN_180060ae0(pbVar7,(byte *)"voodoo_graphics");
        if (uVar6 == 0) {
          *(undefined4 *)(param_2 + 0x27) = 0;
        }
        else {
          uVar6 = FUN_180060ae0(pbVar7,(byte *)"voodoo_rush");
          if (uVar6 == 0) {
            uVar10 = 1;
          }
          else {
            uVar6 = FUN_180060ae0(pbVar7,(byte *)"voodoo_2");
            if (uVar6 == 0) {
              uVar10 = 2;
            }
            else {
              uVar6 = FUN_180060ae0(pbVar7,(byte *)"voodoo_banshee");
              if (uVar6 == 0) {
                uVar10 = 3;
              }
              else {
                uVar6 = FUN_180060ae0(pbVar7,(byte *)"other_greater");
                if (uVar6 != 0) goto LAB_18000d9c4;
                uVar10 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0x27) = uVar10;
        }
        goto LAB_18000d9b8;
      }
LAB_18000d9c0:
      uVar6 = 1;
      if (1 < uVar3) goto LAB_18000d9c4;
    }
    else {
      uVar5 = FUN_180060ae0(pbVar7,(byte *)"onboardram");
      if (uVar5 == 0) {
        if (iVar4 != 0) {
          return 0;
        }
        uVar6 = 1;
        if (uVar3 != 0) {
          if ((uVar3 != 1) ||
             (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,param_2 + 0x2b),
             cVar1 == '\0')) {
            uVar6 = 0;
          }
          *(int *)(param_2 + 0x2b) = *(int *)(param_2 + 0x2b) << 0x14;
        }
      }
      else {
        uVar5 = FUN_180060ae0(pbVar7,(byte *)"memorysizeoftmu");
        if (uVar5 == 0) {
          if (iVar4 != 0) {
            return 0;
          }
          uVar6 = 1;
          if (uVar3 != 0) {
            if ((uVar3 != 1) ||
               (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,param_2 + 0x2f),
               cVar1 == '\0')) {
              uVar6 = 0;
            }
            *(int *)(param_2 + 0x2f) = *(int *)(param_2 + 0x2f) << 10;
          }
        }
        else {
          uVar5 = FUN_180060ae0(pbVar7,(byte *)"numberoftmus");
          if (uVar5 == 0) {
            if (iVar4 != 0) {
              return 0;
            }
            uVar6 = 1;
            if ((uVar3 == 0) ||
               ((uVar3 == 1 &&
                (cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,param_2 + 0x33),
                cVar1 != '\0')))) goto LAB_18000dbbc;
LAB_18000d9c4:
            uVar6 = 0;
          }
          else {
            uVar10 = 0x200;
            if (param_5 < 0x263) {
              uVar5 = FUN_180060ae0(pbVar7,(byte *)"forcebilinearfilter");
              if (uVar5 != 0) goto LAB_18000d9cc;
              if (iVar4 != 0) goto LAB_18000d9c4;
              uVar6 = 1;
              if (uVar3 == 0) goto LAB_18000dbbc;
              local_60[0] = '\0';
              uVar8 = FUN_18000cb30(0,param_3,param_4,uVar11,local_60,uVar3);
              uVar6 = (uint)uVar8;
              if (local_60[0] == '\0') {
                uVar10 = 0;
              }
              *(undefined4 *)(param_2 + 0x4b) = uVar10;
            }
            else {
              uVar5 = FUN_180060ae0(pbVar7,(byte *)"tmufiltering");
              if (uVar5 == 0) {
                if (iVar4 != 0) {
                  return 0;
                }
                uVar6 = 1;
                if (uVar3 != 1) goto LAB_18000d9c0;
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
                uVar3 = FUN_180060ae0(pbVar7,(byte *)"appdriven");
                if (uVar3 == 0) {
                  *(undefined4 *)(param_2 + 0x4b) = 0;
                }
                else {
                  uVar3 = FUN_180060ae0(pbVar7,(byte *)"pointsampled");
                  if (uVar3 == 0) {
                    *(undefined4 *)(param_2 + 0x4b) = 0x100;
                  }
                  else {
                    uVar3 = FUN_180060ae0(pbVar7,(byte *)"bilinear");
                    if (uVar3 != 0) goto LAB_18000dbbc;
                    *(undefined4 *)(param_2 + 0x4b) = 0x200;
                  }
                }
LAB_18000d9b8:
                uVar6 = 1;
                uVar11 = uVar11 + 1;
                goto LAB_18000d66c;
              }
LAB_18000d9cc:
              uVar5 = FUN_180060ae0(pbVar7,(byte *)"disablemipmapping");
              if (uVar5 == 0) {
                if (iVar4 == 0) {
                  uVar6 = 1;
                  if (uVar3 != 0) {
                    puVar9 = (undefined1 *)(param_2 + 0x4f);
                    goto LAB_18000dba4;
                  }
                  goto LAB_18000dbbc;
                }
                goto LAB_18000d9c4;
              }
              uVar5 = FUN_180060ae0(pbVar7,(byte *)"resolution");
              if (uVar5 != 0) {
                uVar5 = FUN_180060ae0(pbVar7,(byte *)"antialiasing");
                if (uVar5 == 0) {
                  if (uVar3 != 0) {
                    uVar8 = FUN_18000cec0(0,param_3,param_4,uVar11,(undefined4 *)(param_2 + 0x3f),
                                          uVar3);
                    uVar6 = (uint)uVar8;
                    goto LAB_18000dbb8;
                  }
                }
                else {
                  uVar6 = FUN_180060ae0(pbVar7,(byte *)"enableglidegammaramp");
                  if (uVar6 == 0) {
                    if (iVar4 != 0) goto LAB_18000d9c4;
                    uVar6 = 1;
                    if (uVar3 != 0) {
                      puVar9 = (undefined1 *)(param_2 + 0x50);
                      goto LAB_18000dba4;
                    }
                  }
                  else {
                    uVar6 = FUN_180060ae0(pbVar7,(byte *)"forceverticalsync");
                    if (uVar6 == 0) {
                      if (iVar4 != 0) goto LAB_18000d9c4;
                      uVar6 = 1;
                      if (uVar3 != 0) {
                        puVar9 = (undefined1 *)(param_2 + 0x52);
                        goto LAB_18000dba4;
                      }
                    }
                    else {
                      uVar6 = FUN_180060ae0(pbVar7,(byte *)"forceemulatingtruepciaccess");
                      if (uVar6 == 0) {
                        if (iVar4 != 0) goto LAB_18000d9c4;
                        uVar6 = 1;
                        if (uVar3 != 0) {
                          puVar9 = (undefined1 *)(param_2 + 0x53);
                          goto LAB_18000dba4;
                        }
                      }
                      else {
                        uVar6 = FUN_180060ae0(pbVar7,(byte *)"16bitdepthbuffer");
                        if (uVar6 == 0) {
                          if (iVar4 != 0) goto LAB_18000d9c4;
                          uVar6 = 1;
                          if (uVar3 != 0) {
                            puVar9 = (undefined1 *)(param_2 + 0x54);
                            goto LAB_18000dba4;
                          }
                        }
                        else {
                          uVar6 = FUN_180060ae0(pbVar7,(byte *)"3dfxwatermark");
                          if (uVar6 == 0) {
                            if (iVar4 != 0) goto LAB_18000d9c4;
                            uVar6 = 1;
                            if (uVar3 != 0) {
                              puVar9 = (undefined1 *)(param_2 + 0x55);
                              goto LAB_18000dba4;
                            }
                          }
                          else {
                            uVar6 = FUN_180060ae0(pbVar7,(byte *)"3dfxsplashscreen");
                            if (uVar6 == 0) {
                              if (iVar4 != 0) goto LAB_18000d9c4;
                              uVar6 = 1;
                              if (uVar3 != 0) {
                                puVar9 = (undefined1 *)(param_2 + 0x56);
                                goto LAB_18000dba4;
                              }
                            }
                            else {
                              uVar6 = FUN_180060ae0(pbVar7,(byte *)"pointcastpalette");
                              if (uVar6 == 0) {
                                if (iVar4 != 0) goto LAB_18000d9c4;
                                uVar6 = 1;
                                if (uVar3 != 0) {
                                  puVar9 = (undefined1 *)(param_2 + 0x51);
LAB_18000dba4:
                                  uVar8 = FUN_18000cb30(0,param_3,param_4,uVar11,puVar9,uVar3);
                                  uVar6 = (uint)uVar8;
                                  goto LAB_18000dbb8;
                                }
                              }
                              else {
                                uVar6 = FUN_180060ae0(pbVar7,(byte *)"enableinactiveappstate");
                                if (uVar6 != 0) {
                                  return 0;
                                }
                                if (iVar4 != 0) goto LAB_18000d9c4;
                                uVar6 = 1;
                                if (uVar3 != 0) {
                                  puVar9 = (undefined1 *)(param_2 + 0x57);
                                  goto LAB_18000dba4;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_18000dbbc;
              }
              bVar2 = FUN_18000ccb0(0,param_3,param_4,uVar11,(int *)(param_2 + 0x37),
                                    (int *)(param_2 + 0x3b),param_2 + 0x43,
                                    (undefined4 *)(param_2 + 0x47),uVar3,in_stack_ffffffffffffff78,
                                    param_5);
              uVar6 = (uint)bVar2;
            }
LAB_18000dbb8:
            uVar6 = uVar6 & 0xff;
          }
        }
      }
    }
LAB_18000dbbc:
    uVar11 = uVar11 + 1;
    if (uVar6 == 0) {
      return 0;
    }
  } while( true );
}

