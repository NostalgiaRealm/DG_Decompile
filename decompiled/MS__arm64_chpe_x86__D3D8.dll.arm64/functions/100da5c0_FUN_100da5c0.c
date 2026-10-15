/*
 * FUN_100da5c0 at 100da5c0
 * undefined FUN_100da5c0(void)
 * Address ranges: 100da5c0-100da633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100da5c0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_1012a940;
  FUN_100dad58(param_1);
  FUN_100fed00(param_1[0x13c]);
  FUN_100fed00(param_1[0x131]);
  FUN_100fed00(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_100fed00(*param_1);
  } while (iVar1 != 0);
  return;
}

