/*
 * FUN_1006bc50 at 1006bc50
 * undefined FUN_1006bc50(void)
 * Address ranges: 1006bc50-1006bcc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bc50(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_100991c0;
  FUN_1006c3e8(param_1);
  FUN_1007dd80(param_1[0x13c]);
  FUN_1007dd80(param_1[0x131]);
  FUN_1007dd80(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_1007dd80(*param_1);
  } while (iVar1 != 0);
  return;
}

