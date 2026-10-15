/*
 * FUN_10042470 at 10042470
 * undefined FUN_10042470(void)
 * Address ranges: 10042470-10042527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10042470(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (((param_1[3] != param_2[3] || (param_1[4] != param_2[4])) ||
      ((param_1[5] != param_2[5] || (uVar1 = 1, param_1[6] != param_2[6])))))) {
    uVar1 = 0;
  }
  return uVar1;
}

