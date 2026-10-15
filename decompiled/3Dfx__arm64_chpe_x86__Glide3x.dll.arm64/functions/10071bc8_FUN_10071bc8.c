/*
 * FUN_10071bc8 at 10071bc8
 * undefined FUN_10071bc8(void)
 * Address ranges: 10071bc8-10071cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10071bc8(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((((((*param_2 != *param_3) || (param_2[1] != param_3[1])) || (param_2[2] != param_3[2])) ||
       ((param_2[3] != param_3[3] || (param_2[4] != param_3[4])))) ||
      ((param_2[5] != param_3[5] || ((param_2[6] != param_3[6] || (param_2[7] != param_3[7])))))) ||
     ((param_2[8] != param_3[8] || (uVar1 = 0, param_2[9] != param_3[9])))) {
    uVar1 = 1;
  }
  return uVar1;
}

