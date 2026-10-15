/*
 * FUN_1400015d8 at 1400015d8
 * undefined8 * __cdecl FUN_1400015d8(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1400015d8-140001637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1400015d8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  uVar2 = *param_5;
  param_1[6] = param_5[1];
  param_1[5] = uVar2;
  puVar1 = param_5;
  FUN_140024880((LPSTR)(param_1 + 7),"%s",*param_5,param_4,param_5,param_6,param_7,param_8);
  FUN_140024880((LPSTR)(param_1 + 0x17),"%s, %%uHz",*param_5,param_4,puVar1,param_6,param_7,param_8)
  ;
  return param_1;
}

