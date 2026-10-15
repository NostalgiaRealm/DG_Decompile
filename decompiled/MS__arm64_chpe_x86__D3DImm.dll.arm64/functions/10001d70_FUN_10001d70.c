/*
 * FUN_10001d70 at 10001d70
 * undefined FUN_10001d70(void)
 * Address ranges: 10001d70-10001daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001d70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x933);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else if ((iVar1 != 1) || (*(int *)(*(int *)(param_1 + 0xc) + 0x92f) == 0)) {
    param_2 = 1;
  }
  return param_2;
}

