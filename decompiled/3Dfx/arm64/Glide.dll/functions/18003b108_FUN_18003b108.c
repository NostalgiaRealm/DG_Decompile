/*
 * FUN_18003b108 at 18003b108
 * undefined __cdecl FUN_18003b108(uint * param_1)
 * Address ranges: 18003b108-18003b19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003b108(uint *param_1)

{
  FUN_180050888(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3c));
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_180050888(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3e));
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

