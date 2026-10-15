/*
 * FUN_1800f5ce8 at 1800f5ce8
 * undefined FUN_1800f5ce8(void)
 * Address ranges: 1800f5ce8-1800f5d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800f5ce8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x000180213038(param_2);
  uStack_14 = 0;
  local_20 = 0x58454853;
  if (iVar1 - 0x40U < 2) {
    local_20 = 0x52444853;
  }
  uStack_1c = 0;
  local_18 = extraout_w1;
  FUN_1800f5a90(param_1,&local_20,0x10);
  return (int)param_1[1] - (int)*param_1;
}

