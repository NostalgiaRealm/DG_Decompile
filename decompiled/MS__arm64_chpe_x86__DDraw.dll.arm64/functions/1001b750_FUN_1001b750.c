/*
 * FUN_1001b750 at 1001b750
 * undefined FUN_1001b750(void)
 * Address ranges: 1001b750-1001b797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1001b750(int param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10070540(*(undefined4 *)(param_1 + 0xcf00),&local_40,param_3);
  param_2[1] = uStack_38;
  *param_2 = local_40;
  param_2[3] = uStack_28;
  param_2[2] = uStack_30;
  return param_2;
}

