/*
 * FUN_100712f0 at 100712f0
 * undefined FUN_100712f0(void)
 * Address ranges: 100712f0-10071363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100712f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_1009f5a0;
  FUN_10071a88(param_1);
  FUN_10083420(param_1[0x13c]);
  FUN_10083420(param_1[0x131]);
  FUN_10083420(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_10083420(*param_1);
  } while (iVar1 != 0);
  return;
}

