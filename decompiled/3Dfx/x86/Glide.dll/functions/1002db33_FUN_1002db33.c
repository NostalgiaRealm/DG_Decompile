/*
 * FUN_1002db33 at 1002db33
 * undefined __fastcall FUN_1002db33(int * param_1)
 * Address ranges: 1002db33-1002db86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002db33(int *param_1)

{
  FUN_10021c81(param_1,(LPCVOID)param_1[0x15]);
  (**(code **)(*(int *)param_1[0x40] + 8))((int *)param_1[0x40]);
  param_1[0x40] = 0;
  (**(code **)(*(int *)param_1[0x3f] + 8))((int *)param_1[0x3f]);
  param_1[0x3f] = 0;
  FUN_1002d9ff((int)param_1);
  FUN_1002d64e(param_1);
  FUN_1002d396(param_1);
  FUN_1002d8a9(param_1);
  return;
}

