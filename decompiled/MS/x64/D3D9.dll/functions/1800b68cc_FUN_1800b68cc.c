/*
 * FUN_1800b68cc at 1800b68cc
 * undefined __fastcall FUN_1800b68cc(longlong param_1, longlong param_2, uint param_3, undefined4 * param_4, int param_5)
 * Address ranges: 1800b68cc-1800b6a2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b68cc(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar5 = MXCSR;
  puVar10 = param_4;
  puVar12 = (undefined4 *)(param_1 + ((ulonglong)(param_3 * 4) + 0x14f8) * 4);
  for (uVar6 = (ulonglong)(uint)(param_5 * 4); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar6 = 0;
  MXCSR = 0x3fc0;
  if (*(char *)(param_1 + 0x21) == '\0') {
    uVar1 = param_3 + param_5;
    puVar10 = (undefined4 *)(param_1 + ((ulonglong)(param_3 * 4) + 0x2d48) * 4);
    for (uVar7 = (ulonglong)(uint)(param_5 * 4); uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *param_4;
      param_4 = param_4 + 1;
      puVar10 = puVar10 + 1;
    }
    if (param_2 != 0) {
      sVar2 = *(short *)(param_2 + 0x18);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(param_2 + 0x18 + uVar6 * 2);
        uVar4 = *(ushort *)(param_2 + 0x18 + (ulonglong)((int)uVar6 + 1) * 2);
        if (uVar1 < uVar3) break;
        if (param_3 <= uVar4) {
          uVar11 = (uint)uVar3;
          if (uVar3 < param_3) {
            uVar11 = param_3;
          }
          uVar9 = uVar1;
          if (uVar4 < uVar1) {
            uVar9 = (uint)uVar4;
          }
          puVar10 = (undefined4 *)
                    (*(longlong *)(param_2 + 0x10) + 0x414 + (ulonglong)(uVar11 * 4) * 4);
          puVar12 = (undefined4 *)(param_1 + ((ulonglong)(uVar11 * 4) + 0x2d48) * 4);
          for (uVar7 = (ulonglong)((uVar9 - uVar11) * 4); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        uVar6 = (ulonglong)((int)uVar6 + 2);
        sVar2 = *(short *)(param_2 + 0x18 + uVar6 * 2);
      }
    }
    lVar8 = (ulonglong)(param_3 * 4) + 0x2d48;
  }
  else {
    lVar8 = (ulonglong)(param_3 * 4) + 0x14f8;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))
            (*(longlong **)(param_1 + 0x28),param_3,param_3 + param_5,param_1 + lVar8 * 4);
  MXCSR = uVar5;
  return;
}

