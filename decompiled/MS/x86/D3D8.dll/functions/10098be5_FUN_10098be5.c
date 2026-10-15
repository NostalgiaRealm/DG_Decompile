/*
 * FUN_10098be5 at 10098be5
 * undefined __fastcall FUN_10098be5(int param_1)
 * Address ranges: 10098be5-10098c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10098be5(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x908);
  *(uint *)(param_1 + 0x908) = uVar1 + 1;
  *(uint *)(param_1 + 0x90c) = *(int *)(param_1 + 0x90c) + (uint)(0xfffffffe < uVar1);
  return;
}

