/*
 * FUN_1009cafb at 1009cafb
 * undefined __fastcall FUN_1009cafb(undefined4 * param_1)
 * Address ranges: 1009cafb-1009cb4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009cafb(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[4] + 0xdd0) >> 2) & 1);
  FUN_10092202((void *)param_1[4],(int)param_1);
  (**(code **)(*(int *)param_1[7] + 4))();
  param_1[7] = 0;
  *param_1 = &PTR_FUN_100d703c;
  FUN_100cfd6c(param_1);
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return;
}

