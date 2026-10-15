/*
 * FUN_10021530 at 10021530
 * undefined FUN_10021530(void)
 * Address ranges: 10021530-10021597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10021530(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x220) == '\0') {
    iVar1 = FUN_10020b40(param_1);
    *(int *)(param_1 + 0x21c) = iVar1;
    param_2 = param_3;
    if (iVar1 != -1) {
      *(char *)(param_1 + 0x220) = '\x01';
      param_2 = 0;
    }
  }
  return param_2;
}

