/*
 * FUN_1400012dc at 1400012dc
 * undefined8 * __fastcall FUN_1400012dc(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5)
 * Address ranges: 1400012dc-140001341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1400012dc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_4;
  *(undefined4 *)(param_1 + 2) = param_3;
  uVar1 = param_5[1];
  param_1[5] = *param_5;
  param_1[6] = uVar1;
  FUN_140024290((LPSTR)(param_1 + 7),"%s",*param_5,param_4);
  FUN_140024290((LPSTR)(param_1 + 0x17),"%s, %%uHz",*param_5,param_4);
  return param_1;
}

