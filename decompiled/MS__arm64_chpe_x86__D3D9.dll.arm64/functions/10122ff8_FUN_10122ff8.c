/*
 * FUN_10122ff8 at 10122ff8
 * undefined FUN_10122ff8(void)
 * Address ranges: 10122ff8-10123057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10122ff8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_10122f60(param_2);
  uStack_14 = 0;
  local_20 = 0x58454853;
  if (iVar1 - 0x40U < 2) {
    local_20 = 0x52444853;
  }
  uStack_1c = 0;
  local_18 = extraout_w1;
  FUN_10122c50(param_1,&local_20,0x10);
  return param_1[1] - *param_1;
}

