/*
 * FUN_10073070 at 10073070
 * undefined FUN_10073070(void)
 * Address ranges: 10073070-1007310b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = FUN_10073b20(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_10073bc0(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_10073ce0(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

