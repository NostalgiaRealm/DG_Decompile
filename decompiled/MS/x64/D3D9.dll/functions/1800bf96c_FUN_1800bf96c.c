/*
 * FUN_1800bf96c at 1800bf96c
 * longlong __fastcall FUN_1800bf96c(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 1800bf96c-1800bfa09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800bf96c(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 2);
  uVar1 = *param_2;
  uVar5 = 0;
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      uVar4 = uVar8 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar4;
      uVar2 = *(ulonglong *)(param_1[1] + uVar5 * 0x898);
      if (uVar2 <= uVar1) {
        if (uVar1 <= uVar2) break;
        uVar7 = uVar4 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar7);
  }
  lVar6 = uVar5 * 0x898;
  if (((uint)uVar5 == *(uint *)(param_1 + 2)) ||
     (lVar3 = param_1[1], *(ulonglong *)(lVar6 + lVar3) != uVar1)) {
    FUN_1800bfe04(param_1,(uint)uVar5,uVar1,param_2,param_3);
  }
  else {
    FUN_1800fbec0((undefined8 *)(lVar3 + 0x10 + lVar6),param_3,0x888);
  }
  return param_1[1] + lVar6 + 8;
}

