/*
 * FUN_1010cd00 at 1010cd00
 * undefined FUN_1010cd00(void)
 * Address ranges: 1010cd00-1010cd73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1010cd00(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_D3DPERF_GetStatus_native_10160040;
  FUN_1010d498(param_1);
  FUN_101322d0(param_1[0x13c]);
  FUN_101322d0(param_1[0x131]);
  FUN_101322d0(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_101322d0(*param_1);
  } while (iVar1 != 0);
  return;
}

