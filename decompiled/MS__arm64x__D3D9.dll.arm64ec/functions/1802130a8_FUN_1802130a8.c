/*
 * FUN_1802130a8 at 1802130a8
 * undefined FUN_1802130a8(void)
 * Address ranges: 1802130a8-1802130ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1802130a8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_w1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_180213038(param_2);
  uStack_14 = 0;
  local_20 = 0x58454853;
  if (iVar1 - 0x40U < 2) {
    local_20 = 0x52444853;
  }
  uStack_1c = 0;
  local_18 = extraout_w1;
  FUN_180214fe8(param_1,&local_20,0x10);
  return (int)param_1[1] - (int)*param_1;
}

