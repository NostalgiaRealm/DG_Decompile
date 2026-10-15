/*
 * FUN_10067fb0 at 10067fb0
 * undefined FUN_10067fb0(void)
 * Address ranges: 10067fb0-10068023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067fb0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_10095344;
  FUN_10068748(param_1);
  FUN_1007a060(param_1[0x13c]);
  FUN_1007a060(param_1[0x131]);
  FUN_1007a060(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_1007a060(*param_1);
  } while (iVar1 != 0);
  return;
}

