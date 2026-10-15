/*
 * FUN_10033760 at 10033760
 * undefined FUN_10033760(void)
 * Address ranges: 10033760-10033787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10031ee0(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = param_3;
  }
  return;
}

