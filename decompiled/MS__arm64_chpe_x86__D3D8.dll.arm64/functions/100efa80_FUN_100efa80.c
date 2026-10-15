/*
 * FUN_100efa80 at 100efa80
 * undefined FUN_100efa80(void)
 * Address ranges: 100efa80-100efadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100efa80(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_100ef9e8(param_2);
  uStack_14 = 0;
  local_20 = 0x58454853;
  if (iVar1 - 0x40U < 2) {
    local_20 = 0x52444853;
  }
  uStack_1c = 0;
  local_18 = extraout_w1;
  FUN_100ef6d8(param_1,&local_20,0x10);
  return param_1[1] - *param_1;
}

