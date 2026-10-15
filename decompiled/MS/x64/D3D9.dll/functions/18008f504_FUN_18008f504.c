/*
 * FUN_18008f504 at 18008f504
 * undefined8 __fastcall FUN_18008f504(longlong * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18008f504-18008f557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008f504(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined7 extraout_var;
  undefined8 uVar4;
  ulonglong uVar3;
  
  lVar2 = (**(code **)(*param_1 + 200))();
  uVar3 = 0;
  if (lVar2 != 0) {
    bVar1 = FUN_18008f3f8((longlong)param_1);
    uVar3 = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      uVar4 = (**(code **)*param_1)(param_1,param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}

