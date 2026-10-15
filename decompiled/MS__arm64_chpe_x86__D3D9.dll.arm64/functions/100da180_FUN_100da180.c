/*
 * FUN_100da180 at 100da180
 * undefined FUN_100da180(void)
 * Address ranges: 100da180-100da38b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100da180(int param_1,int param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  int iVar6;
  uint uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auStack_40 [16];
  
  FUN_10157940(auStack_40);
  iVar6 = param_1 + param_3 * 4;
  puVar11 = (undefined8 *)(iVar6 + 0x6828);
  uVar3 = param_5 >> 1;
  uVar7 = 0;
  puVar9 = param_4;
  if (uVar3 != 0) {
    do {
      uVar10 = *puVar9;
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
      *puVar11 = uVar10;
      puVar11 = puVar11 + 1;
    } while (uVar7 < uVar3);
  }
  if ((param_5 & 1) != 0) {
    *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar9 = (undefined8 *)(iVar6 + 0xc230);
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        uVar10 = *param_4;
        uVar7 = uVar7 + 1;
        param_4 = param_4 + 1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (uVar7 < uVar3);
    }
    if ((param_5 & 1) != 0) {
      *(undefined4 *)puVar9 = *(undefined4 *)param_4;
    }
    param_5 = param_3 + param_5;
    if (param_2 != 0) {
      iVar6 = 0;
      if (*(short *)(param_2 + 500) != -1) {
        do {
          uVar1 = ((short *)(param_2 + 500))[iVar6];
          if (param_5 < uVar1) break;
          uVar2 = *(ushort *)(param_2 + iVar6 * 2 + 0x1f6);
          if (param_3 <= uVar2) {
            uVar7 = param_3;
            if (param_3 <= uVar1) {
              uVar7 = (uint)uVar1;
            }
            uVar3 = (uint)uVar2;
            if (param_5 <= uVar2) {
              uVar3 = param_5;
            }
            uVar4 = uVar3 - uVar7 >> 1;
            puVar11 = (undefined8 *)(*(int *)(param_2 + 8) + uVar7 * 4 + 0x2b0);
            uVar12 = 0;
            puVar9 = (undefined8 *)(param_1 + uVar7 * 4 + 0xc230);
            if (uVar4 != 0) {
              do {
                uVar10 = *puVar11;
                uVar12 = uVar12 + 1;
                puVar11 = puVar11 + 1;
                *puVar9 = uVar10;
                puVar9 = puVar9 + 1;
              } while (uVar12 < uVar4);
            }
            if ((uVar3 - uVar7 & 1) != 0) {
              *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
            }
          }
          iVar6 = iVar6 + 2;
        } while (*(short *)(param_2 + iVar6 * 2 + 500) != -1);
      }
    }
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    pcVar8 = extraout_w11;
  }
  else {
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x14),extraout_x1,param_3 + param_5);
    pcVar8 = extraout_w11_00;
  }
  (*pcVar8)(uVar5,param_3);
  FUN_101579f0(auStack_40);
  return;
}

