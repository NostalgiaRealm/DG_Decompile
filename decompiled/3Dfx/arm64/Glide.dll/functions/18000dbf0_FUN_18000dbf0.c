/*
 * FUN_18000dbf0 at 18000dbf0
 * uint __cdecl FUN_18000dbf0(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, int * param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 18000dbf0-18000e3a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000dbf0(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  int *param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  undefined8 in_stack_fffffffffffffb78;
  char local_460 [4];
  int local_45c;
  byte abStack_458 [1032];
  
  uVar1 = (uint)param_5;
  uVar5 = 1;
  uVar12 = 0;
  do {
    while( true ) {
      uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar3 <= uVar12) {
        return uVar5;
      }
      pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar12);
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar12);
      piVar13 = (int *)(ulonglong)uVar3;
      iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar12);
      uVar5 = FUN_180060ae0(pbVar6,(byte *)"disableandpassthru");
      if (uVar5 == 0) {
        if (iVar4 != 0) goto LAB_18000dddc;
        uVar5 = 1;
        if (uVar3 != 0) {
          param_5 = (int *)(param_2 + 0x80);
          uVar7 = 0;
          goto LAB_18000e364;
        }
        goto LAB_18000dde0;
      }
      uVar5 = FUN_180060ae0(pbVar6,(byte *)"videocard");
      if (uVar5 != 0) break;
      if (iVar4 != 0) {
        return 0;
      }
      if (uVar3 != 1) goto LAB_18000ddd8;
      pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar12,0);
      uVar5 = FUN_180060ae0(pbVar6,&DAT_18006423c);
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0x58) = 0;
      }
      else {
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"internal3d");
        if (uVar5 == 0) {
          *(undefined4 *)(param_2 + 0x58) = 1;
        }
        else {
          uVar5 = FUN_180060ae0(pbVar6,(byte *)"geforce_ti_4800");
          if (uVar5 == 0) {
            uVar10 = 2;
          }
          else {
            uVar5 = FUN_180060ae0(pbVar6,(byte *)"ati_radeon_8500");
            if (uVar5 == 0) {
              uVar10 = 3;
            }
            else {
              uVar5 = FUN_180060ae0(pbVar6,(byte *)"matrox_parhelia-512");
              if (uVar5 == 0) {
                uVar10 = 4;
              }
              else {
                uVar5 = FUN_180060ae0(pbVar6,(byte *)"geforce_fx_5700_ultra");
                if (uVar5 == 0) {
                  uVar10 = 5;
                }
                else {
                  uVar5 = FUN_180060ae0(pbVar6,(byte *)"geforce_9800_gt");
                  if (uVar1 < 0x277 || uVar5 != 0) goto LAB_18000dddc;
                  uVar10 = 6;
                }
              }
            }
          }
          *(undefined4 *)(param_2 + 0x58) = uVar10;
        }
      }
LAB_18000e0f4:
      uVar5 = 1;
      uVar12 = uVar12 + 1;
    }
    uVar5 = FUN_180060ae0(pbVar6,&DAT_1800642b8);
    if (uVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      uVar5 = 1;
      if (uVar3 != 1) goto LAB_18000dde0;
      *(undefined8 *)(param_2 + 0x5c) = 0;
      pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar12,0);
      iVar4 = FUN_1800611e0(pbVar6,(byte *)"%d %s",param_2 + 0x5c,abStack_458,param_5,param_6,
                            param_7,param_8);
      if (iVar4 == 1) {
        lVar11 = *(longlong *)(param_2 + 0x5c) << 0x14;
      }
      else {
        if (iVar4 != 2) goto LAB_18000e0f4;
        uVar3 = FUN_180060ae0(abStack_458,&DAT_1800642c8);
        if ((uVar3 == 0) || (uVar3 = FUN_180060ae0(abStack_458,&DAT_1800642cc), uVar3 == 0)) {
          *(longlong *)(param_2 + 0x5c) = *(longlong *)(param_2 + 0x5c) << 0x14;
          goto LAB_18000dde0;
        }
        uVar5 = FUN_180060ae0(abStack_458,&DAT_1800642d0);
        if ((uVar5 != 0) && (uVar5 = FUN_180060ae0(abStack_458,&DAT_1800642d4), uVar5 != 0)) {
          return 0;
        }
        lVar11 = *(longlong *)(param_2 + 0x5c) << 0x1e;
      }
      *(longlong *)(param_2 + 0x5c) = lVar11;
      goto LAB_18000e0f4;
    }
    uVar5 = FUN_180060ae0(pbVar6,(byte *)"filtering");
    if (uVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      if (uVar3 != 1) {
LAB_18000ddd8:
        uVar5 = 1;
        if (1 < uVar3) goto LAB_18000dddc;
        goto LAB_18000dde0;
      }
      pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar12,0);
      uVar5 = FUN_180060ae0(pbVar6,(byte *)"appdriven");
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0x78) = 0;
      }
      else {
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"pointsampled");
        if (uVar5 == 0) {
          uVar10 = 0x100;
        }
        else {
          uVar5 = FUN_180060ae0(pbVar6,(byte *)"bilinear");
          if (uVar5 == 0) {
            uVar10 = 0x200;
          }
          else {
            uVar5 = FUN_180060ae0(pbVar6,(byte *)"pointmip");
            if (uVar1 < 0x282 || uVar5 != 0) {
              uVar5 = FUN_180060ae0(pbVar6,(byte *)"linearmip");
              if (uVar5 == 0) {
                uVar10 = 0x300;
              }
              else {
                uVar5 = FUN_180060ae0(pbVar6,(byte *)"trilinear");
                if (uVar5 != 0) {
                  param_5 = &local_45c;
                  local_45c = 0;
                  uVar3 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar12,0);
                  uVar3 = uVar3 & 0xff;
                  uVar5 = uVar3;
                  if (uVar3 != 0) {
                    *(int *)(param_2 + 0x78) = local_45c;
                    uVar5 = 0;
                    if (local_45c - 1U < 0x10) {
                      uVar5 = uVar3;
                    }
                  }
                  goto LAB_18000dde0;
                }
                uVar10 = 0x400;
              }
            }
            else {
              uVar10 = 0x500;
            }
          }
        }
        *(undefined4 *)(param_2 + 0x78) = uVar10;
      }
      goto LAB_18000e0f4;
    }
    if ((0x281 < uVar1) && (uVar5 = FUN_180060ae0(pbVar6,(byte *)"mipmapping"), uVar5 == 0)) {
      if (iVar4 != 0) {
        return 0;
      }
      if (uVar3 != 1) goto LAB_18000ddd8;
      pbVar6 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar12,0);
      uVar5 = FUN_180060ae0(pbVar6,(byte *)"appdriven");
      if (uVar5 == 0) {
        *(undefined4 *)(param_2 + 0x7c) = 0;
      }
      else {
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"disabled");
        if (uVar5 == 0) {
          *(undefined4 *)(param_2 + 0x7c) = 1;
        }
        else {
          uVar5 = FUN_180060ae0(pbVar6,(byte *)"autogen_point");
          if (uVar5 == 0) {
            uVar10 = 2;
          }
          else {
            uVar5 = FUN_180060ae0(pbVar6,(byte *)"autogen_bilinear");
            if ((((uVar5 != 0) &&
                 (uVar5 = FUN_180060ae0(pbVar6,(byte *)"autogen_bicubic"), uVar5 != 0)) &&
                (uVar5 = FUN_180060ae0(pbVar6,(byte *)"autogen_lanczos-2"), uVar5 != 0)) &&
               (uVar3 = FUN_180060ae0(pbVar6,(byte *)"autogen_lanczos-3"), uVar5 = 1, uVar3 != 0))
            goto LAB_18000dde0;
            uVar10 = 3;
          }
          *(undefined4 *)(param_2 + 0x7c) = uVar10;
        }
      }
      goto LAB_18000e0f4;
    }
    uVar5 = FUN_180060ae0(pbVar6,(byte *)"keepfilterifpointsampled");
    uVar7 = (ulonglong)uVar5;
    if (uVar1 < 0x276 || uVar5 != 0) {
      if ((uVar1 < 0x282) && (uVar5 = FUN_180060ae0(pbVar6,(byte *)"disablemipmapping"), uVar5 == 0)
         ) {
        if (iVar4 == 0) {
          uVar5 = 1;
          if (uVar3 == 0) goto LAB_18000dde0;
          local_460[0] = '\0';
          param_5 = (int *)local_460;
          uVar8 = FUN_18000cb30(0,param_3,param_4,uVar12,(undefined1 *)param_5,uVar3);
          uVar5 = (uint)uVar8;
          *(uint *)(param_2 + 0x7c) = (uint)(local_460[0] != '\0');
          param_6 = piVar13;
          goto LAB_18000e1c0;
        }
        goto LAB_18000dddc;
      }
      uVar5 = FUN_180060ae0(pbVar6,(byte *)"resolution");
      if (uVar5 == 0) {
        param_8 = (undefined4 *)(param_2 + 0x74);
        param_7 = param_2 + 0x70;
        param_6 = (int *)(param_2 + 0x68);
        param_5 = (int *)(param_2 + 100);
        bVar2 = FUN_18000ccb0(0,param_3,param_4,uVar12,param_5,param_6,param_7,param_8,uVar3,
                              in_stack_fffffffffffffb78,uVar1);
        uVar5 = (uint)bVar2;
LAB_18000e1c0:
        uVar5 = uVar5 & 0xff;
      }
      else {
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"antialiasing");
        if (uVar5 == 0) {
          if (iVar4 != 0) goto LAB_18000dddc;
          uVar5 = 1;
          if (uVar3 == 0) goto LAB_18000dde0;
          param_5 = (int *)(param_2 + 0x6c);
          uVar8 = FUN_18000cec0(0,param_3,param_4,uVar12,param_5,uVar3);
          uVar5 = (uint)uVar8;
          param_6 = piVar13;
          goto LAB_18000e1c0;
        }
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"appcontrolledscreenmode");
        if (uVar5 == 0) {
          if (iVar4 != 0) goto LAB_18000dddc;
          uVar5 = 1;
          if (uVar3 == 0) goto LAB_18000dde0;
          param_5 = (int *)(param_2 + 0x81);
          uVar7 = 0;
LAB_18000e364:
          uVar8 = FUN_18000cb30(uVar7,param_3,param_4,uVar12,(undefined1 *)param_5,uVar3);
          uVar5 = (uint)uVar8;
          param_6 = piVar13;
          goto LAB_18000e1c0;
        }
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"disablealtentertotogglescreenmode");
        if (uVar5 == 0) {
          if (iVar4 == 0) {
            uVar5 = 1;
            if (uVar3 != 0) {
              param_5 = (int *)(param_2 + 0x82);
              uVar7 = 0;
              goto LAB_18000e364;
            }
            goto LAB_18000dde0;
          }
          goto LAB_18000dddc;
        }
        if (uVar1 < 0x27a) {
          pcVar9 = "bilinearblitstretch";
LAB_18000e264:
          uVar5 = FUN_180060ae0(pbVar6,(byte *)pcVar9);
          if (uVar5 == 0) {
            if (iVar4 != 0) goto LAB_18000dddc;
            uVar5 = 1;
            if (uVar3 == 0) goto LAB_18000dde0;
            param_5 = (int *)(param_2 + 0x84);
            uVar7 = 0;
            goto LAB_18000e364;
          }
        }
        else if (0x27f < uVar1) {
          pcVar9 = "bilinear2doperations";
          goto LAB_18000e264;
        }
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"phongshadingwhenpossible");
        if (uVar5 == 0) {
          if (iVar4 != 0) goto LAB_18000dddc;
          uVar5 = 1;
          if (uVar3 == 0) goto LAB_18000dde0;
          param_5 = (int *)(param_2 + 0x85);
          uVar7 = 0;
          goto LAB_18000e364;
        }
        uVar5 = FUN_180060ae0(pbVar6,(byte *)"forceverticalsync");
        if (uVar5 == 0) {
          if (iVar4 != 0) goto LAB_18000dddc;
          uVar5 = 1;
          if (uVar3 != 0) {
            param_5 = (int *)(param_2 + 0x86);
            uVar7 = 0;
            goto LAB_18000e364;
          }
        }
        else {
          uVar5 = FUN_180060ae0(pbVar6,(byte *)"dgvoodoowatermark");
          if (uVar5 == 0) {
            if (iVar4 != 0) goto LAB_18000dddc;
            uVar5 = 1;
            if (uVar3 != 0) {
              param_5 = (int *)(param_2 + 0x83);
              uVar7 = 0;
              goto LAB_18000e364;
            }
          }
          else {
            uVar5 = FUN_180060ae0(pbVar6,(byte *)"fastvideomemoryaccess");
            if (uVar5 == 0) {
              if (iVar4 != 0) goto LAB_18000dddc;
              uVar5 = 1;
              if (uVar3 != 0) {
                param_5 = (int *)(param_2 + 0x88);
                uVar7 = 0;
                goto LAB_18000e364;
              }
            }
            else {
              if ((uVar1 < 0x286) ||
                 (uVar5 = FUN_180060ae0(pbVar6,(byte *)"disabled3dtnldevice"), uVar5 != 0)) {
                return 0;
              }
              if (iVar4 != 0) goto LAB_18000dddc;
              uVar5 = 1;
              if (uVar3 != 0) {
                param_5 = (int *)(param_2 + 0x89);
                uVar7 = 0;
                goto LAB_18000e364;
              }
            }
          }
        }
      }
    }
    else {
      if (iVar4 == 0) {
        uVar5 = 1;
        if (uVar3 != 0) {
          param_5 = (int *)(param_2 + 0x87);
          goto LAB_18000e364;
        }
        goto LAB_18000dde0;
      }
LAB_18000dddc:
      uVar5 = 0;
    }
LAB_18000dde0:
    uVar12 = uVar12 + 1;
    if (uVar5 == 0) {
      return 0;
    }
  } while( true );
}

