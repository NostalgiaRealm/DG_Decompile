/*
 * FUN_1002ef8a at 1002ef8a
 * undefined1 __fastcall FUN_1002ef8a(undefined4 param_1, int param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1002ef8a-1002f7b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined1 __fastcall
FUN_1002ef8a(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  byte local_44c [1024];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  char local_d;
  int local_c;
  int local_8;
  
  uVar8 = 0;
  local_18 = (undefined1 *)(param_2 + 0x80);
  local_1c = (undefined1 *)(param_2 + 0x87);
  local_20 = (undefined4 *)(param_2 + 0x74);
  local_24 = param_2 + 0x70;
  local_28 = (int *)(param_2 + 0x68);
  local_2c = (int *)(param_2 + 100);
  local_30 = (undefined4 *)(param_2 + 0x6c);
  local_34 = (undefined1 *)(param_2 + 0x81);
  local_38 = (undefined1 *)(param_2 + 0x82);
  local_14 = (undefined1 *)(param_2 + 0x84);
  local_3c = (undefined1 *)(param_2 + 0x85);
  local_40 = (undefined1 *)(param_2 + 0x86);
  local_44 = (undefined1 *)(param_2 + 0x83);
  local_48 = (undefined1 *)(param_2 + 0x88);
  local_4c = (undefined1 *)(param_2 + 0x89);
  local_8 = param_2;
LAB_1002f017:
  uVar7 = 1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x1c))(param_4);
    if (uVar2 <= uVar8) {
      return (char)uVar7;
    }
    pbVar3 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,uVar8);
    uVar2 = (**(code **)(*param_3 + 0x24))(param_4,uVar8);
    local_c = (**(code **)(*param_3 + 0x30))(param_4,uVar8);
    pcVar10 = "disableandpassthru";
    iVar4 = FUN_1005231b(pbVar3,(byte *)"disableandpassthru");
    if (iVar4 == 0) {
      puVar9 = local_18;
      if (local_c != 0) goto LAB_1002f06b;
joined_r0x1002f077:
      uVar7 = 1;
      if (uVar2 == 0) goto LAB_1002f7a5;
LAB_1002f791:
      uVar6 = FUN_1002dd0f(pcVar10,param_3,param_4,uVar8,puVar9,uVar2);
      bVar1 = (byte)uVar6;
LAB_1002f79d:
      uVar7 = (uint)bVar1;
    }
    else {
      iVar4 = FUN_1005231b(pbVar3,(byte *)"videocard");
      if (iVar4 == 0) {
        if (local_c != 0) {
          return 0;
        }
        uVar7 = 1;
        if (uVar2 == 1) {
          pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar8,0);
          iVar4 = FUN_1005231b(pbVar3,&DAT_100569a8);
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 0;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"internal3d");
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 1;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"geforce_ti_4800");
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 2;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"ati_radeon_8500");
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 3;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"matrox_parhelia-512");
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 4;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"geforce_fx_5700_ultra");
          if (iVar4 == 0) {
            *(undefined4 *)(local_8 + 0x58) = 5;
            goto LAB_1002f4f1;
          }
          iVar4 = FUN_1005231b(pbVar3,(byte *)"geforce_9800_gt");
          if ((iVar4 == 0) && (0x276 < param_5)) {
            *(undefined4 *)(local_8 + 0x58) = 6;
            goto LAB_1002f4f1;
          }
        }
        else if (uVar2 < 2) goto LAB_1002f7a5;
LAB_1002f06b:
        uVar7 = 0;
      }
      else {
        iVar5 = FUN_1005231b(pbVar3,&DAT_10056a18);
        iVar4 = local_8;
        if (iVar5 == 0) {
          if (local_c != 0) {
            return 0;
          }
          uVar7 = 1;
          if (uVar2 == 1) {
            *(undefined4 *)(local_8 + 0x5c) = 0;
            *(undefined4 *)(local_8 + 0x60) = 0;
            pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar8,0);
            iVar5 = FUN_10052e41(pbVar3,(byte *)"%d %s");
            if (iVar5 == 1) {
              uVar2 = *(uint *)(iVar4 + 0x5c);
              *(uint *)(iVar4 + 0x5c) = uVar2 << 0x14;
              *(uint *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) << 0x14 | uVar2 >> 0xc;
            }
            else if (iVar5 == 2) break;
          }
        }
        else {
          iVar4 = FUN_1005231b(pbVar3,(byte *)"filtering");
          if (iVar4 == 0) {
            if (local_c != 0) {
              return 0;
            }
            if (uVar2 != 1) goto LAB_1002f4f7;
            pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar8,0);
            iVar4 = FUN_1005231b(pbVar3,(byte *)"appdriven");
            if (iVar4 == 0) {
              *(undefined4 *)(local_8 + 0x78) = 0;
              goto LAB_1002f4f1;
            }
            iVar4 = FUN_1005231b(pbVar3,(byte *)"pointsampled");
            if (iVar4 == 0) {
              *(undefined4 *)(local_8 + 0x78) = 0x100;
              goto LAB_1002f4f1;
            }
            iVar4 = FUN_1005231b(pbVar3,(byte *)"bilinear");
            if (iVar4 == 0) {
              *(undefined4 *)(local_8 + 0x78) = 0x200;
              goto LAB_1002f4f1;
            }
            iVar4 = FUN_1005231b(pbVar3,(byte *)"pointmip");
            if ((iVar4 == 0) && (0x281 < param_5)) {
              *(undefined4 *)(local_8 + 0x78) = 0x500;
              goto LAB_1002f4f1;
            }
            iVar4 = FUN_1005231b(pbVar3,(byte *)"linearmip");
            if (iVar4 == 0) {
              *(undefined4 *)(local_8 + 0x78) = 0x300;
              goto LAB_1002f4f1;
            }
            iVar4 = FUN_1005231b(pbVar3,(byte *)"trilinear");
            if (iVar4 == 0) {
              *(undefined4 *)(local_8 + 0x78) = 0x400;
              goto LAB_1002f4f1;
            }
            local_c = 0;
            bVar1 = (**(code **)(*param_3 + 0x2c))(param_4,uVar8,0,&local_c);
            uVar7 = (uint)bVar1;
            if (bVar1 != 0) {
              if ((local_c < 1) || (0x10 < local_c)) {
                uVar7 = 0;
              }
              *(int *)(local_8 + 0x78) = local_c;
            }
          }
          else if ((param_5 < 0x282) ||
                  (iVar4 = FUN_1005231b(pbVar3,(byte *)"mipmapping"), iVar4 != 0)) {
            pcVar10 = "keepfilterifpointsampled";
            iVar4 = FUN_1005231b(pbVar3,(byte *)"keepfilterifpointsampled");
            if ((iVar4 != 0) || (puVar9 = local_1c, param_5 < 0x276)) {
              if (param_5 < 0x282) {
                pcVar10 = "disablemipmapping";
                iVar4 = FUN_1005231b(pbVar3,(byte *)"disablemipmapping");
                if (iVar4 == 0) {
                  if (local_c != 0) goto LAB_1002f06b;
                  uVar7 = 1;
                  if (uVar2 != 0) {
                    local_d = '\0';
                    uVar7 = FUN_1002dd0f(pcVar10,param_3,param_4,uVar8,&local_d,uVar2);
                    uVar7 = uVar7 & 0xff;
                    *(uint *)(local_8 + 0x7c) = (uint)(local_d != '\0');
                  }
                  goto LAB_1002f7a5;
                }
              }
              pcVar10 = "resolution";
              iVar4 = FUN_1005231b(pbVar3,(byte *)"resolution");
              if (iVar4 == 0) {
                bVar1 = FUN_1002de19(pcVar10,param_3,param_4,uVar8,local_2c,local_28,local_24,
                                     local_20,uVar2,pcVar10,param_5);
                uVar7 = (uint)bVar1;
                goto LAB_1002f7a5;
              }
              pcVar10 = "antialiasing";
              iVar4 = FUN_1005231b(pbVar3,(byte *)"antialiasing");
              if (iVar4 != 0) {
                pcVar10 = "appcontrolledscreenmode";
                iVar4 = FUN_1005231b(pbVar3,(byte *)"appcontrolledscreenmode");
                if (iVar4 == 0) {
                  puVar9 = local_34;
                  if (local_c == 0) goto joined_r0x1002f077;
                  goto LAB_1002f06b;
                }
                pcVar10 = "disablealtentertotogglescreenmode";
                iVar4 = FUN_1005231b(pbVar3,(byte *)"disablealtentertotogglescreenmode");
                puVar9 = local_38;
                if (iVar4 == 0) goto joined_r0x1002f6cb;
                if (param_5 < 0x27a) {
                  pcVar10 = "bilinearblitstretch";
LAB_1002f6a0:
                  iVar4 = FUN_1005231b(pbVar3,(byte *)pcVar10);
                  puVar9 = local_14;
                  if (iVar4 == 0) goto joined_r0x1002f6cb;
                }
                else if (0x27f < param_5) {
                  pcVar10 = "bilinear2doperations";
                  goto LAB_1002f6a0;
                }
                pcVar10 = "phongshadingwhenpossible";
                iVar4 = FUN_1005231b(pbVar3,(byte *)"phongshadingwhenpossible");
                puVar9 = local_3c;
                if (iVar4 != 0) {
                  pcVar10 = "forceverticalsync";
                  iVar4 = FUN_1005231b(pbVar3,(byte *)"forceverticalsync");
                  puVar9 = local_40;
                  if (iVar4 != 0) {
                    pcVar10 = "dgvoodoowatermark";
                    iVar4 = FUN_1005231b(pbVar3,(byte *)"dgvoodoowatermark");
                    puVar9 = local_44;
                    if (iVar4 != 0) {
                      pcVar10 = "fastvideomemoryaccess";
                      iVar4 = FUN_1005231b(pbVar3,(byte *)"fastvideomemoryaccess");
                      puVar9 = local_48;
                      if (iVar4 != 0) {
                        if (param_5 < 0x286) {
                          return 0;
                        }
                        pcVar10 = "disabled3dtnldevice";
                        iVar4 = FUN_1005231b(pbVar3,(byte *)"disabled3dtnldevice");
                        puVar9 = local_4c;
                        if (iVar4 != 0) {
                          return 0;
                        }
                      }
                    }
                  }
                }
                goto joined_r0x1002f6cb;
              }
              if (local_c != 0) goto LAB_1002f06b;
              uVar7 = 1;
              if (uVar2 == 0) goto LAB_1002f7a5;
              uVar6 = FUN_1002df6e(pcVar10,param_3,param_4,uVar8,local_30,uVar2);
              bVar1 = (byte)uVar6;
              goto LAB_1002f79d;
            }
joined_r0x1002f6cb:
            if (local_c != 0) goto LAB_1002f06b;
            uVar7 = 1;
            if (uVar2 != 0) goto LAB_1002f791;
          }
          else {
            if (local_c != 0) {
              return 0;
            }
            if (uVar2 == 1) {
              pbVar3 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar8,0);
              iVar4 = FUN_1005231b(pbVar3,(byte *)"appdriven");
              if (iVar4 == 0) {
                *(undefined4 *)(local_8 + 0x7c) = 0;
              }
              else {
                iVar4 = FUN_1005231b(pbVar3,(byte *)"disabled");
                if (iVar4 == 0) {
                  *(undefined4 *)(local_8 + 0x7c) = 1;
                }
                else {
                  iVar4 = FUN_1005231b(pbVar3,(byte *)"autogen_point");
                  if (iVar4 == 0) {
                    *(undefined4 *)(local_8 + 0x7c) = 2;
                  }
                  else {
                    iVar4 = FUN_1005231b(pbVar3,(byte *)"autogen_bilinear");
                    if ((((iVar4 == 0) ||
                         (iVar4 = FUN_1005231b(pbVar3,(byte *)"autogen_bicubic"), iVar4 == 0)) ||
                        (iVar4 = FUN_1005231b(pbVar3,(byte *)"autogen_lanczos-2"), iVar4 == 0)) ||
                       (iVar4 = FUN_1005231b(pbVar3,(byte *)"autogen_lanczos-3"), iVar4 == 0)) {
                      *(undefined4 *)(local_8 + 0x7c) = 3;
                    }
                  }
                }
              }
              goto LAB_1002f4f1;
            }
LAB_1002f4f7:
            uVar7 = 1;
            if (1 < uVar2) {
              uVar7 = 0;
            }
          }
        }
      }
    }
LAB_1002f7a5:
    uVar8 = uVar8 + 1;
    if ((char)uVar7 == '\0') {
      return 0;
    }
  } while( true );
  iVar5 = FUN_1005231b(local_44c,&DAT_10056a28);
  if ((iVar5 == 0) || (iVar5 = FUN_1005231b(local_44c,&DAT_10056a2c), iVar5 == 0)) {
    uVar7 = *(int *)(iVar4 + 0x60) << 0x14 | *(uint *)(iVar4 + 0x5c) >> 0xc;
    iVar5 = *(uint *)(iVar4 + 0x5c) << 0x14;
  }
  else {
    iVar5 = FUN_1005231b(local_44c,&DAT_10056a30);
    if ((iVar5 != 0) && (iVar5 = FUN_1005231b(local_44c,&DAT_10056a34), iVar5 != 0)) {
      return 0;
    }
    uVar7 = *(int *)(iVar4 + 0x60) << 0x1e | *(uint *)(iVar4 + 0x5c) >> 2;
    iVar5 = *(uint *)(iVar4 + 0x5c) << 0x1e;
  }
  *(int *)(iVar4 + 0x5c) = iVar5;
  *(uint *)(iVar4 + 0x60) = uVar7;
LAB_1002f4f1:
  uVar8 = uVar8 + 1;
  goto LAB_1002f017;
}

