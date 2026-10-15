/*
 * FUN_10027400 at 10027400
 * undefined FUN_10027400(void)
 * Address ranges: 10027400-10027467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10027400(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    iVar1 = FUN_10026a30(param_1);
    *(int *)(param_1 + 0x3c0) = iVar1;
    param_2 = param_3;
    if (iVar1 != -1) {
      *(char *)(param_1 + 0x3c4) = '\x01';
      param_2 = 0;
    }
  }
  return param_2;
}

