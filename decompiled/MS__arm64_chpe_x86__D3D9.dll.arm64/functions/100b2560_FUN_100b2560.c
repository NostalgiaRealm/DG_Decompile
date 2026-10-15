/*
 * FUN_100b2560 at 100b2560
 * undefined FUN_100b2560(void)
 * Address ranges: 100b2560-100b257b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b2560(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_2;
  *(undefined4 *)(iVar1 + 0xc3c) = param_3;
  return;
}

