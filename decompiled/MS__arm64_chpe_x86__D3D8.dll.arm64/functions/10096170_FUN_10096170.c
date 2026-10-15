/*
 * FUN_10096170 at 10096170
 * undefined FUN_10096170(void)
 * Address ranges: 10096170-100961b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10096170(int param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100debf0(*(undefined4 *)(param_1 + 0x1cf00),&local_40,param_3);
  param_2[1] = uStack_38;
  *param_2 = local_40;
  param_2[3] = uStack_28;
  param_2[2] = uStack_30;
  return param_2;
}

