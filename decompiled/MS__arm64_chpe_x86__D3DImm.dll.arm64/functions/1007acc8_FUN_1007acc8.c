/*
 * FUN_1007acc8 at 1007acc8
 * undefined FUN_1007acc8(void)
 * Address ranges: 1007acc8-1007ad27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007acc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_1007ac30(param_2);
  uStack_14 = 0;
  local_20 = 0x58454853;
  if (iVar1 - 0x40U < 2) {
    local_20 = 0x52444853;
  }
  uStack_1c = 0;
  local_18 = extraout_w1;
  FUN_1007a920(param_1,&local_20,0x10);
  return param_1[1] - *param_1;
}

