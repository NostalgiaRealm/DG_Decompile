/*
 * FUN_10068430 at 10068430
 * undefined FUN_10068430(void)
 * Address ranges: 10068430-100684a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068430(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_10095374;
  FUN_10068bc8(param_1);
  FUN_1007a4e0(param_1[0x13c]);
  FUN_1007a4e0(param_1[0x131]);
  FUN_1007a4e0(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_1007a4e0(*param_1);
  } while (iVar1 != 0);
  return;
}

