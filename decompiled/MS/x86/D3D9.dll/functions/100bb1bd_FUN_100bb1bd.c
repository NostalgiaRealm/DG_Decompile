/*
 * FUN_100bb1bd at 100bb1bd
 * undefined __fastcall FUN_100bb1bd(int param_1)
 * Address ranges: 100bb1bd-100bb1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100bb1bd(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x908);
  *(uint *)(param_1 + 0x908) = uVar1 + 1;
  *(uint *)(param_1 + 0x90c) = *(int *)(param_1 + 0x90c) + (uint)(0xfffffffe < uVar1);
  return;
}

