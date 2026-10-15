/*
 * FUN_180030bc0 at 180030bc0
 * undefined4 __fastcall FUN_180030bc0(longlong * param_1, uint * param_2)
 * Address ranges: 180030bc0-180030c6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180030bc0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = ((ulonglong)param_2[7] + (ulonglong)param_2[5] + (ulonglong)param_2[3] +
           (ulonglong)param_2[1] << 0x20 | (ulonglong)param_2[6]) + (ulonglong)param_2[4] +
          (ulonglong)param_2[2] + (ulonglong)*param_2;
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar5 = uVar1;
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      uVar6 = *(ulonglong *)(*param_1 + (ulonglong)uVar3 * 0x30);
      uVar2 = uVar3;
      if (uVar6 <= uVar7) {
        if (uVar7 <= uVar6) break;
        uVar4 = uVar3 + 1;
        uVar2 = uVar5;
        uVar3 = uVar4;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar4);
    if ((uVar3 != uVar1) &&
       (uVar6 = (ulonglong)uVar3, *(ulonglong *)(*param_1 + uVar6 * 0x30) == uVar7))
    goto LAB_180030c55;
  }
  FUN_180030c70(param_1,uVar3,uVar7,(undefined8 *)param_2);
  uVar6 = (ulonglong)uVar3;
LAB_180030c55:
  return *(undefined4 *)(*param_1 + 0x28 + uVar6 * 0x30);
}

