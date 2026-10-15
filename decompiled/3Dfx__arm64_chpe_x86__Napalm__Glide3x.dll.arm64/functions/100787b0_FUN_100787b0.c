/*
 * FUN_100787b0 at 100787b0
 * undefined FUN_100787b0(void)
 * Address ranges: 100787b0-1007884b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100787b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_100791c0(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_10079330(param_2,param_3,param_7);
  }
  else if (iVar1 == 0x51) {
    FUN_10079450(param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

