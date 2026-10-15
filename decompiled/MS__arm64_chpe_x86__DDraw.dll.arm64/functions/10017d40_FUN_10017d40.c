/*
 * FUN_10017d40 at 10017d40
 * undefined FUN_10017d40(void)
 * Address ranges: 10017d40-10017d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_2;
  *(undefined4 *)(iVar1 + 0xc3c) = param_3;
  return;
}

