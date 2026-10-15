/*
 * FUN_180045da8 at 180045da8
 * undefined8 __fastcall FUN_180045da8(longlong * param_1, ulonglong * param_2)
 * Address ranges: 180045da8-180045e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180045da8(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = *param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar7 = 0;
    uVar5 = uVar1;
    do {
      uVar4 = uVar5 + uVar7 >> 1;
      uVar6 = *(ulonglong *)(*param_1 + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar6 <= uVar2) {
        if (uVar2 <= uVar6) break;
        uVar7 = uVar4 + 1;
        uVar3 = uVar5;
        uVar4 = uVar7;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar7);
    if ((uVar4 != uVar1) &&
       (uVar6 = (ulonglong)uVar4, *(ulonglong *)(*param_1 + uVar6 * 0x18) == uVar2))
    goto LAB_180045e0f;
  }
  FUN_180046194(param_1,uVar4,uVar2,param_2);
  uVar6 = (ulonglong)uVar4;
LAB_180045e0f:
  return *(undefined8 *)(*param_1 + 0x10 + uVar6 * 0x18);
}

