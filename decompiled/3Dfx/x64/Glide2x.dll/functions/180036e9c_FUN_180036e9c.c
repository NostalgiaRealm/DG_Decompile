/*
 * FUN_180036e9c at 180036e9c
 * undefined __fastcall FUN_180036e9c(uint * param_1)
 * Address ranges: 180036e9c-180036f4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036e9c(uint *param_1)

{
  FUN_18004cb4c(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3c));
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_18004cb4c(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3e));
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x3a) + 0x10))();
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x36) + 0x10))();
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x34) + 0x10))();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return;
}

