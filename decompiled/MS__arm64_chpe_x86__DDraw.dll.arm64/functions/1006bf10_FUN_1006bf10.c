/*
 * FUN_1006bf10 at 1006bf10
 * undefined FUN_1006bf10(void)
 * Address ranges: 1006bf10-1006bf83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bf10(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_100b2e10;
  FUN_1006c6a8(param_1);
  FUN_100914d0(param_1[0x13c]);
  FUN_100914d0(param_1[0x131]);
  FUN_100914d0(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_100914d0(*param_1);
  } while (iVar1 != 0);
  return;
}

