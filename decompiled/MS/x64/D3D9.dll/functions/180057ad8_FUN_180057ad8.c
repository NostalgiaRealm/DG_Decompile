/*
 * FUN_180057ad8 at 180057ad8
 * longlong __fastcall FUN_180057ad8(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 180057ad8-180057b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180057ad8(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 2);
  uVar2 = *param_2;
  uVar7 = 0;
  if (uVar10 != 0) {
    uVar9 = 0;
    do {
      uVar6 = uVar10 + uVar9 >> 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = *(ulonglong *)(param_1[1] + uVar7 * 0x38);
      if (uVar3 <= uVar2) {
        if (uVar2 <= uVar3) break;
        uVar9 = uVar6 + 1;
        uVar7 = (ulonglong)uVar9;
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar10 != uVar9);
  }
  lVar8 = uVar7 * 0x38;
  if (((uint)uVar7 == *(uint *)(param_1 + 2)) ||
     (lVar4 = param_1[1], *(ulonglong *)(lVar8 + lVar4) != uVar2)) {
    FUN_180057b88(param_1,(uint)uVar7,uVar2,param_2,param_3);
  }
  else {
    uVar5 = param_3[1];
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
    *puVar1 = *param_3;
    puVar1[1] = uVar5;
    uVar5 = param_3[3];
    puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar4);
    *puVar1 = param_3[2];
    puVar1[1] = uVar5;
    *(undefined8 *)(lVar8 + 0x30 + lVar4) = param_3[4];
  }
  return param_1[1] + lVar8 + 8;
}

