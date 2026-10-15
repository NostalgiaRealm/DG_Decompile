/*
 * FUN_1006f310 at 1006f310
 * undefined FUN_1006f310(void)
 * Address ranges: 1006f310-1006f3bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f310(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_1006fe80(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_1006ff80(param_2,param_3,param_7,param_8);
  }
  else if (iVar1 == 0x51) {
    FUN_100700a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

