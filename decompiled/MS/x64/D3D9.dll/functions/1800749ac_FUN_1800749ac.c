/*
 * FUN_1800749ac at 1800749ac
 * undefined __fastcall FUN_1800749ac(undefined8 param_1, longlong * param_2, longlong param_3)
 * Address ranges: 1800749ac-180074a74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800749ac(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_1800eddec(param_2,2,0x200005f,0x25001);
  }
  uVar2 = (ulonglong)*(uint *)(param_3 + 0x538);
  if (1 < *(uint *)(param_3 + 0x538)) {
    FUN_1800eddec(param_2,2,0x20000ce,uVar2);
  }
  FUN_1800eddec(param_2,1,0x100185d,uVar2);
  uVar3 = 0x110000;
  FUN_1800eddec(param_2,3,0x300008f,0x110000);
  plVar1 = param_2;
  FUN_1800eddec(param_2,1,0x100285c,uVar3);
  FUN_18007aef8((ulonglong)plVar1,param_2,param_3);
  FUN_1800eddec(param_2,2,0x200005e,(ulonglong)*(uint *)(param_3 + 0x534));
  return;
}

