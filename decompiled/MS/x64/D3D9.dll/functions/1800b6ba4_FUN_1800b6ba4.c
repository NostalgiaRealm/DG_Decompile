/*
 * FUN_1800b6ba4 at 1800b6ba4
 * undefined __fastcall FUN_1800b6ba4(longlong param_1, longlong param_2, uint param_3, undefined4 * param_4, uint param_5)
 * Address ranges: 1800b6ba4-1800b6cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b6ba4(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar5 = MXCSR;
  uVar14 = (ulonglong)param_3;
  MXCSR = 0x3fc0;
  uVar12 = 0;
  puVar9 = param_4;
  puVar10 = (undefined4 *)(param_1 + ((ulonglong)param_3 + 0x1a84) * 4);
  for (uVar7 = (ulonglong)param_5; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (*(char *)(param_1 + 0x21) == '\0') {
    uVar13 = param_3 + param_5;
    puVar9 = (undefined4 *)(param_1 + (uVar14 + 0x3108) * 4);
    for (uVar7 = (ulonglong)param_5; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar9 = *param_4;
      param_4 = param_4 + 1;
      puVar9 = puVar9 + 1;
    }
    if (param_2 != 0) {
      sVar1 = *(short *)(param_2 + 0x200);
      while (sVar1 != -1) {
        uVar2 = *(ushort *)(param_2 + 0x200 + uVar12 * 2);
        uVar3 = *(ushort *)(param_2 + 0x200 + (ulonglong)((int)uVar12 + 1) * 2);
        if (uVar13 < uVar2) break;
        if (param_3 <= uVar3) {
          uVar7 = (ulonglong)(uint)uVar2;
          if (uVar2 < param_3) {
            uVar7 = uVar14;
          }
          uVar4 = uVar13;
          if (uVar3 < uVar13) {
            uVar4 = (uint)uVar3;
          }
          puVar9 = (undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x2b0 + uVar7 * 4);
          puVar10 = (undefined4 *)(param_1 + 0xc420 + uVar7 * 4);
          for (uVar8 = (ulonglong)(uVar4 - (int)uVar7); uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        uVar12 = (ulonglong)((int)uVar12 + 2);
        sVar1 = *(short *)(param_2 + 0x200 + uVar12 * 2);
      }
    }
    lVar11 = **(longlong **)(param_1 + 0x28);
    lVar6 = uVar14 + 0x3108;
  }
  else {
    lVar11 = **(longlong **)(param_1 + 0x28);
    lVar6 = uVar14 + 0x1a84;
  }
  (**(code **)(lVar11 + 0x198))
            (*(undefined8 *)(param_1 + 0x28),uVar14,param_3 + param_5,param_1 + lVar6 * 4);
  MXCSR = uVar5;
  return;
}

