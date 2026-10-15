/*
 * FUN_1006f470 at 1006f470
 * undefined FUN_1006f470(void)
 * Address ranges: 1006f470-1006f50b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f470(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_1006fe80(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_1006fff0(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_10070110(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

