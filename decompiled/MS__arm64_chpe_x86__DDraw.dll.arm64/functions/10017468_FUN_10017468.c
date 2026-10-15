/*
 * FUN_10017468 at 10017468
 * undefined FUN_10017468(void)
 * Address ranges: 10017468-10017577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10017468(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  
  FUN_10033c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_1 = &PTR_FUN_100b1dac;
  iVar1 = *(int *)(param_2 + 0xcf00);
  param_1[0x10] = iVar1;
  iVar2 = *(int *)(param_2 + 0xcf00);
  param_1[0x13] = param_3;
  param_1[0x12] = iVar2;
  param_1[0x14] = iVar2 + param_3 * 0x1510 + 0x510;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  iVar2 = *(int *)(param_2 + 0xcf00);
  param_1[0x1b] = param_3;
  param_1[0x1a] = iVar2;
  param_1[0x1c] = iVar2 + param_3 * 0x1510 + 0x510;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = 0;
  param_1[0x11] = iVar1 + param_3 * 0x1510 + 0x510;
  return param_1;
}

