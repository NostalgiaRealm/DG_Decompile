/*
 * FUN_180016e58 at 180016e58
 * undefined __fastcall FUN_180016e58(undefined8 * param_1, longlong param_2, undefined8 param_3)
 * Address ranges: 180016e58-180016ea8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016e58(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x400);
  }
  if ((param_2 != param_1[6]) || (lVar1 != param_1[5])) {
    (**(code **)*param_1)(param_1,param_3);
    param_1[6] = param_2;
    param_1[5] = lVar1;
  }
  return;
}

