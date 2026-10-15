/*
 * FUN_1002126a at 1002126a
 * undefined __fastcall FUN_1002126a(int * param_1)
 * Address ranges: 1002126a-100212bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002126a(int *param_1)

{
  FUN_10016390(param_1,(LPCVOID)param_1[0x15]);
  (**(code **)(*(int *)param_1[0x40] + 8))((int *)param_1[0x40]);
  param_1[0x40] = 0;
  (**(code **)(*(int *)param_1[0x3f] + 8))((int *)param_1[0x3f]);
  param_1[0x3f] = 0;
  FUN_10021136((int)param_1);
  FUN_10020d82(param_1);
  FUN_10020aca(param_1);
  FUN_10020fdd(param_1);
  return;
}

