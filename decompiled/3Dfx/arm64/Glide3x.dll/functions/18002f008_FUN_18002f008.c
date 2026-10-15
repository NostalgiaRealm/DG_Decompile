/*
 * FUN_18002f008 at 18002f008
 * undefined __cdecl FUN_18002f008(uint * param_1)
 * Address ranges: 18002f008-18002f09b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f008(uint *param_1)

{
  FUN_1800535c8(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3c));
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_1800535c8(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x3e));
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

