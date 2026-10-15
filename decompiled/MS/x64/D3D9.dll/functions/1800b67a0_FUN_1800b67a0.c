/*
 * FUN_1800b67a0 at 1800b67a0
 * undefined __fastcall FUN_1800b67a0(longlong param_1, longlong param_2, uint param_3, undefined4 * param_4, uint param_5)
 * Address ranges: 1800b67a0-1800b68ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b67a0(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar5 = MXCSR;
  uVar13 = (ulonglong)param_3;
  MXCSR = 0x3fc0;
  puVar10 = param_4;
  puVar11 = (undefined4 *)(param_1 + ((ulonglong)param_3 + 0x1a64) * 4);
  for (uVar7 = (ulonglong)param_5; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar12 = param_3 + param_5;
  puVar10 = (undefined4 *)(param_1 + ((ulonglong)param_3 + 0x2ccc) * 4);
  for (uVar7 = (ulonglong)param_5; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *param_4;
    param_4 = param_4 + 1;
    puVar10 = puVar10 + 1;
  }
  if (param_2 != 0) {
    uVar7 = 0;
    sVar1 = *(short *)(param_2 + 0x840);
    while (sVar1 != -1) {
      uVar2 = *(ushort *)(param_2 + 0x840 + uVar7 * 2);
      uVar3 = *(ushort *)(param_2 + 0x840 + (ulonglong)((int)uVar7 + 1) * 2);
      if (uVar12 < uVar2) break;
      if (param_3 <= uVar3) {
        uVar9 = (ulonglong)(uint)uVar2;
        if (uVar2 < param_3) {
          uVar9 = uVar13;
        }
        uVar4 = uVar12;
        if (uVar3 < uVar12) {
          uVar4 = (uint)uVar3;
        }
        puVar10 = (undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x49e8 + uVar9 * 4);
        puVar11 = (undefined4 *)(param_1 + ((ulonglong)(uint)((int)uVar9 * 4) + 0x2ccc) * 4);
        for (uVar8 = (ulonglong)(uVar4 - (int)uVar9); uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      uVar7 = (ulonglong)((int)uVar7 + 2);
      sVar1 = *(short *)(param_2 + 0x840 + uVar7 * 2);
    }
  }
  lVar6 = uVar13 + 0x2ccc;
  if (*(char *)(param_1 + 0x21) != '\0') {
    lVar6 = uVar13 + 0x1a64;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))
            (*(longlong **)(param_1 + 0x28),uVar13,param_3 + param_5,param_1 + lVar6 * 4);
  MXCSR = uVar5;
  return;
}

