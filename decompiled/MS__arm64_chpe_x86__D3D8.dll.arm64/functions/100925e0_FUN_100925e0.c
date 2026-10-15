/*
 * FUN_100925e0 at 100925e0
 * undefined FUN_100925e0(void)
 * Address ranges: 100925e0-100925fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100925e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_2;
  *(undefined4 *)(iVar1 + 0xc3c) = param_3;
  return;
}

