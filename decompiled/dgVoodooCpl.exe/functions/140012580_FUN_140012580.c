/*
 * FUN_140012580 at 140012580
 * undefined8 * __fastcall FUN_140012580(longlong param_1, undefined8 * param_2, uint param_3, uint param_4, int param_5, uint param_6)
 * Address ranges: 140012580-1400126ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_140012580(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,int param_5,
             uint param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar7 = (ulonglong)param_4;
  uVar4 = 0;
  *param_2 = 0;
  uVar1 = *(uint *)(param_1 + 0x328);
  param_2[1] = 0;
  param_2[2] = 0;
  if (uVar1 == 0) {
    return param_2;
  }
  while (*(uint *)(*(longlong *)(param_1 + 800) + uVar5 * 4) != param_3) {
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
    if (uVar1 <= uVar3) {
      return param_2;
    }
  }
  if ((int)uVar5 == -1) {
    return param_2;
  }
  if (*(uint *)(param_1 + 0x128 + uVar5 * 0x10) <= param_4) {
    return param_2;
  }
  if (*(int *)(*(longlong *)(param_1 + (uVar5 + 0x12) * 0x10) + uVar7 * 8) == 0) {
    FUN_140011c30(param_1,param_3,param_4,(param_5 != 1) + 2);
  }
  if (param_6 < *(uint *)(*(longlong *)(param_1 + (uVar5 + 0x12) * 0x10) + uVar7 * 8)) {
    lVar6 = (ulonglong)param_6 * 0x1c;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0x20;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + (uVar5 + 2) * 0x10) + uVar7 * 8);
    uVar1 = *(uint *)(lVar6 + 0xc + lVar2);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar6 + lVar2);
    *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(lVar6 + 4 + lVar2);
    uVar3 = *(uint *)(lVar6 + 8 + lVar2);
    *(uint *)(param_2 + 1) = uVar3;
    *(uint *)((longlong)param_2 + 0xc) = uVar1;
    if (uVar1 != 0) {
      uVar4 = uVar3 / uVar1;
    }
    *(uint *)(param_2 + 2) = uVar4;
  }
  return param_2;
}

