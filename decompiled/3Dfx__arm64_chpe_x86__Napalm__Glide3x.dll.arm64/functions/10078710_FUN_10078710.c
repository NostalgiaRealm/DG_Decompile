/*
 * FUN_10078710 at 10078710
 * undefined FUN_10078710(void)
 * Address ranges: 10078710-100787ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078710(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  
  iVar1 = FUN_100791c0(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_10079260(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_10079380(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

