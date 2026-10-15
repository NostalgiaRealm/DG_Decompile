/*
 * FUN_1002d2c4 at 1002d2c4
 * undefined __fastcall FUN_1002d2c4(int * param_1)
 * Address ranges: 1002d2c4-1002d346
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002d2c4(int *param_1)

{
  FUN_10041444((void *)param_1[0x29],*param_1,(int *)param_1[0x3c]);
  param_1[0x3c] = 0;
  FUN_10041444((void *)param_1[0x29],*param_1,(int *)param_1[0x3b]);
  param_1[0x3b] = 0;
  (**(code **)(*(int *)param_1[0x3a] + 8))((int *)param_1[0x3a]);
  param_1[0x3a] = 0;
  (**(code **)(*(int *)param_1[0x39] + 8))((int *)param_1[0x39]);
  param_1[0x39] = 0;
  (**(code **)(*(int *)param_1[0x38] + 8))((int *)param_1[0x38]);
  param_1[0x38] = 0;
  (**(code **)(*(int *)param_1[0x37] + 8))((int *)param_1[0x37]);
  param_1[0x37] = 0;
  return;
}

