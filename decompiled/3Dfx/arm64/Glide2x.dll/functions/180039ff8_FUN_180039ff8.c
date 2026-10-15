/*
 * FUN_180039ff8 at 180039ff8
 * undefined __cdecl FUN_180039ff8(uint * param_1)
 * Address ranges: 180039ff8-18003a08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039ff8(uint *param_1)

{
  FUN_18004fa38(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x56));
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_18004fa38(*(longlong *)(param_1 + 0x30),*param_1,*(longlong **)(param_1 + 0x54));
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x52) + 0x10))();
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x4e) + 0x10))();
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x4c) + 0x10))();
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  return;
}

