/*
 * FUN_18000dbc8 at 18000dbc8
 * undefined8 __fastcall FUN_18000dbc8(longlong * param_1, int * param_2)
 * Address ranges: 18000dbc8-18000dcdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18000dbc8(longlong *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = 0;
  uVar7 = ((ulonglong)
           ((((param_2[6] & 0xfU) << 4 | param_2[6] & 0xfU) << 4 | param_2[7] & 0xfU) << 4 |
           param_2[8] & 0xfU) << 0x10 |
           (ulonglong)
           ((param_2[0xb] & 0xfU | ((param_2[10] & 0xfU) << 4 | param_2[10] & 0xfU) << 4) << 4) |
          (ulonglong)(param_2[0xc] & 0xf)) << 0x20 |
          (ulonglong)
          ((((uint)*(ushort *)(param_2 + 4) << 5 | param_2[2] & 0xfU) * 2 | param_2[1] & 1U) * 2) |
          (ulonglong)(-(uint)(param_2[3] != 0) & 0x40) | (ulonglong)(*param_2 != 0);
  if (uVar1 != 0) {
    uVar5 = uVar1;
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      uVar6 = (ulonglong)uVar3;
      uVar2 = *(ulonglong *)(*param_1 + (ulonglong)uVar3 * 0x48);
      if (uVar2 <= uVar7) {
        if (uVar7 <= uVar2) break;
        uVar4 = uVar3 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar4);
    if (((uint)uVar6 != uVar1) && (*(ulonglong *)(*param_1 + uVar6 * 0x48) == uVar7))
    goto LAB_18000dcc6;
  }
  FUN_18000e154(param_1,(uint)uVar6,uVar7,(undefined8 *)param_2);
LAB_18000dcc6:
  return *(undefined8 *)(*param_1 + 0x40 + uVar6 * 0x48);
}

