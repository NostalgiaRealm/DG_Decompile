/*
 * FUN_10075618 at 10075618
 * undefined FUN_10075618(void)
 * Address ranges: 10075618-10075797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10075618(undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  
  if (((((*param_4 == *param_2) && (param_4[1] == param_2[1])) && (param_4[2] == param_2[2])) &&
      ((param_4[3] == param_2[3] && (*param_5 == *param_3)))) &&
     ((param_5[1] == param_3[1] && ((param_5[2] == param_3[2] && (param_5[3] == param_3[3])))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  param_2[3] = param_4[3];
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  param_3[2] = param_5[2];
  param_3[3] = param_5[3];
  return uVar1;
}

