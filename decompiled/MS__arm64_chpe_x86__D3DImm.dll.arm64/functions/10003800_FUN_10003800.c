/*
 * FUN_10003800 at 10003800
 * undefined FUN_10003800(void)
 * Address ranges: 10003800-10003867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x224) == '\0') {
    iVar1 = FUN_10003180(param_1);
    *(int *)(param_1 + 0x220) = iVar1;
    param_2 = param_3;
    if (iVar1 != -1) {
      *(char *)(param_1 + 0x224) = '\x01';
      param_2 = 0;
    }
  }
  return param_2;
}

