/*
 * FUN_100210ec at 100210ec
 * undefined __fastcall FUN_100210ec(int * param_1)
 * Address ranges: 100210ec-1002113f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100210ec(int *param_1)

{
  FUN_10014cff(param_1,(LPCVOID)param_1[0x15]);
  (**(code **)(*(int *)param_1[0x40] + 8))((int *)param_1[0x40]);
  param_1[0x40] = 0;
  (**(code **)(*(int *)param_1[0x3f] + 8))((int *)param_1[0x3f]);
  param_1[0x3f] = 0;
  FUN_10020fb8((int)param_1);
  FUN_10020c07(param_1);
  FUN_1002094f(param_1);
  FUN_10020e62(param_1);
  return;
}

