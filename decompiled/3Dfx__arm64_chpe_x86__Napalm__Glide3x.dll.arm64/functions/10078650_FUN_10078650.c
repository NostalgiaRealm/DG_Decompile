/*
 * FUN_10078650 at 10078650
 * undefined FUN_10078650(void)
 * Address ranges: 10078650-100786ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_100791c0(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    FUN_100792c0(param_2,param_3,param_7,param_8);
  }
  else if (iVar1 == 0x51) {
    FUN_100793e0(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

