/*
 * FUN_18000ac60 at 18000ac60
 * longlong __fastcall FUN_18000ac60(longlong * param_1, uint * param_2)
 * Address ranges: 18000ac60-18000ace3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000ac60(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    uVar3 = uVar1;
    do {
      uVar5 = uVar3 + uVar6 >> 1;
      uVar4 = (ulonglong)uVar5;
      uVar2 = *(ulonglong *)(*param_1 + uVar4 * 0x260);
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar6 = uVar5 + 1;
        uVar4 = (ulonglong)uVar6;
        uVar5 = uVar3;
      }
      uVar3 = uVar5;
    } while (uVar3 != uVar6);
    if (((uint)uVar4 != uVar1) && (*(ulonglong *)(uVar4 * 0x260 + *param_1) == uVar7))
    goto LAB_18000accb;
  }
  FUN_18000ace4(param_1,(uint)uVar4,uVar7,param_2);
LAB_18000accb:
  return (uVar4 * 0x260 | 0xc) + *param_1;
}

