/*
 * FUN_1801d15c8 at 1801d15c8
 * undefined FUN_1801d15c8(void)
 * Address ranges: 1801d15c8-1801d1673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801d15c8(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = 0;
  if (uVar1 != 0) {
    uVar5 = 0;
    uVar4 = uVar1;
    do {
      uVar2 = uVar4 + uVar5 >> 1;
      uVar7 = (ulonglong)uVar2;
      uVar6 = *(ulonglong *)(*param_1 + uVar7 * 0x18);
      if (uVar6 <= uVar3) {
        if (uVar3 <= uVar6) break;
        uVar5 = uVar2 + 1;
        uVar7 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar4 != uVar5);
    if (((uint)uVar7 != uVar1) && (*(ulonglong *)(*param_1 + uVar7 * 0x18) == uVar3))
    goto LAB_1801d1658;
  }
  FUN_1801d1678(param_1,uVar7,uVar3,param_2);
LAB_1801d1658:
  return *(undefined8 *)(*param_1 + uVar7 * 0x18 + 0x10);
}

