/*
 * FUN_1800277c8 at 1800277c8
 * undefined4 __cdecl FUN_1800277c8(longlong * param_1, uint * param_2)
 * Address ranges: 1800277c8-1800278a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800277c8(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar1 = ((ulonglong)param_2[6] |
          (ulonglong)param_2[5] + (ulonglong)param_2[7] + (ulonglong)param_2[3] +
          (ulonglong)param_2[1] << 0x20) + (ulonglong)param_2[4] + (ulonglong)param_2[2] +
          (ulonglong)*param_2;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar3 = uVar4 + uVar5 >> 1;
      uVar7 = (ulonglong)uVar3;
      uVar6 = *(ulonglong *)(*param_1 + uVar7 * 0x30);
      if (uVar6 <= uVar1) {
        if (uVar1 <= uVar6) break;
        uVar5 = uVar3 + 1;
        uVar7 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar5);
    if (((uint)uVar7 != uVar2) && (*(ulonglong *)(*param_1 + uVar7 * 0x30) == uVar1))
    goto LAB_180027888;
  }
  FUN_1800278a8(param_1,(uint)uVar7,uVar1,(undefined8 *)param_2);
LAB_180027888:
  return *(undefined4 *)(*param_1 + uVar7 * 0x30 + 0x28);
}

