/*
 * FUN_10072fb0 at 10072fb0
 * undefined FUN_10072fb0(void)
 * Address ranges: 10072fb0-1007305f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_10073b20(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_10073c20(param_2,param_3,param_7,param_8);
  }
  else if (iVar1 == 0x51) {
    FUN_10073d40(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

