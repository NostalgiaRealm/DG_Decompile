/*
 * FUN_10073110 at 10073110
 * undefined FUN_10073110(void)
 * Address ranges: 10073110-100731ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073110(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_10073b20(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_10073c90(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_10073db0(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

