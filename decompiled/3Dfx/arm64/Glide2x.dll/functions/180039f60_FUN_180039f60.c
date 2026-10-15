/*
 * FUN_180039f60 at 180039f60
 * undefined __cdecl FUN_180039f60(uint * param_1)
 * Address ranges: 180039f60-180039ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039f60(uint *param_1)

{
  FUN_18004fa38(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x4a));
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_18004fa38(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x48));
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x46) + 0x10))();
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x44) + 0x10))();
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x42) + 0x10))();
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return;
}

