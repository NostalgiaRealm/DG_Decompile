/*
 * FUN_1006fe50 at 1006fe50
 * undefined FUN_1006fe50(void)
 * Address ranges: 1006fe50-1006fec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fe50(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_1009cf38;
  FUN_10070900(param_1);
  FUN_10081dc0(param_1[0x13c]);
  FUN_10081dc0(param_1[0x131]);
  FUN_10081dc0(param_1[0x12e]);
  iVar1 = 8;
  param_1 = param_1 + 0x128;
  do {
    param_1 = param_1 + -0xe;
    iVar1 = iVar1 + -1;
    FUN_10081dc0(*param_1);
  } while (iVar1 != 0);
  return;
}

