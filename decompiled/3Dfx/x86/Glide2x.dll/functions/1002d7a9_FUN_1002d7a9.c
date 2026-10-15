/*
 * FUN_1002d7a9 at 1002d7a9
 * undefined __fastcall FUN_1002d7a9(int * param_1)
 * Address ranges: 1002d7a9-1002d7fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d7a9(int *param_1)

{
  FUN_100218f5(param_1,(LPCVOID)param_1[0x15]);
  (**(code **)(*(int *)param_1[0x40] + 8))((int *)param_1[0x40]);
  param_1[0x40] = 0;
  (**(code **)(*(int *)param_1[0x3f] + 8))((int *)param_1[0x3f]);
  param_1[0x3f] = 0;
  FUN_1002d675((int)param_1);
  FUN_1002d2c4(param_1);
  FUN_1002d00c(param_1);
  FUN_1002d51f(param_1);
  return;
}

