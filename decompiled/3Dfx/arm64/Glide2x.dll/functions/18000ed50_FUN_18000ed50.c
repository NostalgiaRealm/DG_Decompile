/*
 * FUN_18000ed50 at 18000ed50
 * uint __cdecl FUN_18000ed50(undefined4 * param_1, longlong * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 18000ed50-18000f447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000ed50(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,longlong param_7,undefined4 *param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  uint local_60 [2];
  undefined8 local_58;
  
  local_60[0] = 0;
  uVar3 = 1;
  uVar11 = 0;
  local_58 = param_3;
LAB_18000ed84:
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  if (uVar2 <= uVar11) {
    return uVar3;
  }
  pbVar8 = (byte *)(**(code **)(*param_2 + 0x30))(param_2,uVar11);
  if (pbVar8 == (byte *)0x0) {
    uVar7 = 1;
    uVar6 = 0;
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2,uVar11);
      if (uVar3 <= uVar2) {
        uVar3 = uVar7;
        if (uVar6 == 0) {
          local_60[0] = 0x287;
        }
        else if ((((((local_60[0] != 0x287) && (local_60[0] != 0x286)) && (local_60[0] != 0x285)) &&
                  ((local_60[0] != 0x283 && (local_60[0] != 0x282)))) &&
                 ((((local_60[0] != 0x281 && ((local_60[0] != 0x280 && (local_60[0] != 0x279)))) &&
                   (local_60[0] != 0x278)) &&
                  ((((local_60[0] != 0x277 && (local_60[0] != 0x276)) && (local_60[0] != 0x275)) &&
                   (((local_60[0] != 0x274 && (local_60[0] != 0x273)) &&
                    ((local_60[0] != 0x270 && ((local_60[0] != 0x263 && (local_60[0] != 0x262)))))))
                   ))))) &&
                ((local_60[0] != 0x261 &&
                 ((local_60[0] != 0x260 && (uVar3 = 0, local_60[0] == 0x255)))))) {
          uVar3 = uVar7;
        }
        break;
      }
      pbVar8 = (byte *)(**(code **)(*param_2 + 0x40))(param_2,uVar11,uVar2);
      iVar4 = (**(code **)(*param_2 + 0x48))(param_2,uVar11,uVar2);
      iVar5 = (**(code **)(*param_2 + 0x60))(param_2,uVar11,uVar2);
      uVar3 = FUN_18005fc90(pbVar8,(byte *)"version");
      if (uVar3 != 0) goto LAB_18000f414;
      if (iVar5 == 0 && iVar4 != 0) {
        if ((iVar4 == 1) &&
           (cVar1 = (**(code **)(*param_2 + 0x58))(param_2,uVar11,uVar2,0,local_60), cVar1 != '\0'))
        {
          uVar7 = 1;
          uVar6 = uVar7;
        }
        else {
          uVar7 = 0;
          uVar6 = uVar7;
        }
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar7;
    } while (uVar7 != 0);
    goto LAB_18000f418;
  }
  uVar3 = FUN_18005fc90(pbVar8,(byte *)"general");
  if (uVar3 == 0) {
    uVar3 = FUN_18000c0b8(local_58,param_1,param_2,uVar11,local_60[0]);
LAB_18000f278:
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = FUN_18005fc90(pbVar8,(byte *)"glide");
    if (uVar3 == 0) {
      uVar3 = FUN_18000c720(local_58,(longlong)param_1,param_2,uVar11,local_60[0]);
      goto LAB_18000f278;
    }
    uVar3 = FUN_18005fc90(pbVar8,(byte *)"directx");
    if (uVar3 == 0) {
      uVar3 = FUN_18000cce0(local_58,(longlong)param_1,param_2,uVar11,(int *)(ulonglong)local_60[0],
                            param_6,param_7,param_8);
      goto LAB_18000f278;
    }
    uVar3 = FUN_18005fc90(pbVar8,(byte *)"glideext");
    if (uVar3 != 0) {
      uVar3 = FUN_18005fc90(pbVar8,(byte *)"directxext");
      if (uVar3 == 0) {
        uVar3 = FUN_18000d498(local_58,(longlong)param_1,param_2,uVar11,
                              (uint *)(ulonglong)local_60[0],(ulonglong)param_6,param_7,param_8);
      }
      else {
        uVar3 = FUN_18005fc90(pbVar8,(byte *)"generalext");
        if (uVar3 != 0) {
          uVar3 = FUN_18005fc90(pbVar8,(byte *)"debug");
          if (uVar3 != 0) {
            return 0;
          }
          uVar3 = 1;
          uVar2 = 0;
          do {
            uVar6 = (**(code **)(*param_2 + 0x38))(param_2,uVar11);
            if (uVar6 <= uVar2) break;
            pbVar8 = (byte *)(**(code **)(*param_2 + 0x40))(param_2,uVar11,uVar2);
            uVar6 = (**(code **)(*param_2 + 0x48))(param_2,uVar11,uVar2);
            piVar12 = (int *)(ulonglong)uVar6;
            iVar4 = (**(code **)(*param_2 + 0x60))(param_2,uVar11,uVar2);
            uVar7 = FUN_18005fc90(pbVar8,&DAT_180063acc);
            if (uVar7 == 0) {
              if ((iVar4 == 0) && (uVar6 != 0)) {
                puVar10 = (undefined4 *)((longlong)param_1 + 0x1fb);
LAB_18000f32c:
                uVar9 = FUN_18000ecb0(0,param_2,uVar11,uVar2,puVar10,uVar6);
                uVar3 = (uint)uVar9;
                goto LAB_18000f404;
              }
            }
            else {
              uVar7 = FUN_18005fc90(pbVar8,(byte *)"warning");
              if (uVar7 == 0) {
                if ((iVar4 == 0) && (uVar6 != 0)) {
                  puVar10 = (undefined4 *)((longlong)param_1 + 0x1ff);
                  goto LAB_18000f32c;
                }
              }
              else {
                uVar7 = FUN_18005fc90(pbVar8,(byte *)"error");
                if (uVar7 == 0) {
                  if ((iVar4 == 0) && (uVar6 != 0)) {
                    puVar10 = (undefined4 *)((longlong)param_1 + 0x203);
                    goto LAB_18000f32c;
                  }
                }
                else {
                  uVar7 = FUN_18005fc90(pbVar8,(byte *)"maxtracelevel");
                  if (uVar7 == 0) {
                    if ((iVar4 == 0) && (uVar6 == 1)) {
                      uVar3 = (**(code **)(*param_2 + 0x58))
                                        (param_2,uVar11,uVar2,0,(longlong)param_1 + 0x207);
                      piVar12 = param_6;
LAB_18000f404:
                      uVar3 = uVar3 & 0xff;
                      param_6 = piVar12;
                    }
                  }
                  else {
                    uVar7 = FUN_18005fc90(pbVar8,(byte *)"logtofile");
                    if (uVar7 != 0) goto LAB_18000f414;
                    if ((iVar4 == 0) && (uVar6 != 0)) {
                      uVar9 = FUN_18000bc20(0,param_2,uVar11,uVar2,
                                            (undefined1 *)((longlong)param_1 + 0x20b),uVar6);
                      uVar3 = (uint)uVar9;
                      goto LAB_18000f404;
                    }
                  }
                }
              }
            }
            uVar2 = uVar2 + 1;
          } while (uVar3 != 0);
          goto LAB_18000f418;
        }
        uVar3 = FUN_18000e1c0(local_58,(longlong)param_1,param_2,uVar11,
                              (char *)(ulonglong)local_60[0],(ulonglong)param_6,param_7,param_8);
      }
      goto LAB_18000f278;
    }
    uVar3 = 1;
    uVar2 = 0;
    do {
      while( true ) {
        uVar6 = (**(code **)(*param_2 + 0x38))(param_2,uVar11);
        if (uVar6 <= uVar2) goto LAB_18000f418;
        pbVar8 = (byte *)(**(code **)(*param_2 + 0x40))(param_2,uVar11,uVar2);
        uVar6 = (**(code **)(*param_2 + 0x48))(param_2,uVar11,uVar2);
        iVar4 = (**(code **)(*param_2 + 0x60))(param_2,uVar11,uVar2);
        uVar7 = FUN_18005fc90(pbVar8,(byte *)"ditheringeffect");
        if (uVar7 != 0) break;
        if (iVar4 != 0) {
LAB_18000f210:
          uVar3 = 0;
          goto LAB_18000f418;
        }
        if (uVar6 != 1) {
LAB_18000f110:
          uVar3 = 1;
          if (1 < uVar6) {
LAB_18000f114:
            uVar3 = 0;
          }
          goto LAB_18000f118;
        }
        pbVar8 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,uVar11,uVar2,0);
        uVar3 = FUN_18005fc90(pbVar8,(byte *)"pure32bit");
        if (uVar3 == 0) {
          *(undefined4 *)((longlong)param_1 + 0xe7) = 0;
        }
        else {
          uVar3 = FUN_18005fc90(pbVar8,(byte *)"dither2x2");
          if (uVar3 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xe7) = 1;
          }
          else {
            uVar3 = FUN_18005fc90(pbVar8,(byte *)"dither4x4");
            if (uVar3 != 0) goto LAB_18000f114;
            *(undefined4 *)((longlong)param_1 + 0xe7) = 2;
          }
        }
LAB_18000f1b4:
        uVar3 = 1;
        uVar2 = uVar2 + 1;
      }
      uVar7 = FUN_18005fc90(pbVar8,(byte *)"dithering");
      if (uVar7 == 0) {
        if (iVar4 != 0) goto LAB_18000f210;
        if (uVar6 != 1) goto LAB_18000f110;
        pbVar8 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,uVar11,uVar2,0);
        uVar3 = FUN_18005fc90(pbVar8,(byte *)"disabled");
        if (uVar3 == 0) {
          *(undefined4 *)((longlong)param_1 + 0xeb) = 0;
        }
        else {
          uVar3 = FUN_18005fc90(pbVar8,(byte *)"appdriven");
          if (uVar3 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xeb) = 1;
          }
          else {
            uVar3 = FUN_18005fc90(pbVar8,(byte *)"forcealways");
            if (uVar3 != 0) goto LAB_18000f114;
            *(undefined4 *)((longlong)param_1 + 0xeb) = 2;
          }
        }
        goto LAB_18000f1b4;
      }
      uVar7 = FUN_18005fc90(pbVar8,(byte *)"ditherorderedmatrixsizescale");
      if (uVar7 == 0) {
        if (iVar4 != 0) goto LAB_18000f210;
        uVar3 = 1;
        if ((uVar6 != 0) &&
           ((uVar6 != 1 ||
            (cVar1 = (**(code **)(*param_2 + 0x58))(param_2,uVar11,uVar2,0,(longlong)param_1 + 0xef)
            , cVar1 == '\0')))) goto LAB_18000f114;
      }
LAB_18000f118:
      uVar2 = uVar2 + 1;
    } while (uVar3 != 0);
  }
  goto LAB_18000f418;
LAB_18000f414:
  uVar3 = 0;
LAB_18000f418:
  uVar11 = uVar11 + 1;
  if (uVar3 == 0) {
    return 0;
  }
  goto LAB_18000ed84;
}

