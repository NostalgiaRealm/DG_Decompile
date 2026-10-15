/*
 * FUN_10033790 at 10033790
 * undefined FUN_10033790(void)
 * Address ranges: 10033790-100337b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033790(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10031ee0(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x24) = param_3;
  }
  return;
}

