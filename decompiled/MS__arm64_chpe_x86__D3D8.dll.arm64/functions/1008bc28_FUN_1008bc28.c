/*
 * FUN_1008bc28 at 1008bc28
 * undefined FUN_1008bc28(void)
 * Address ranges: 1008bc28-1008bd3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1008bc28(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  FUN_10091d18(param_1,param_2,*(undefined4 *)(param_2 + 0x14),param_3,param_4,param_5,param_6,
               param_7,param_8);
  param_1[0x23] = 1;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_10129a4c;
  param_1[0x22] = &PTR_FUN_101299f8;
  param_1[0x2a] = param_2;
  iVar1 = *(int *)(param_2 + 0x1cf00);
  param_1[0x2c] = param_1[4];
  param_1[0x2b] = iVar1;
  param_1[0x2d] = iVar1 + param_1[4] * 0x1510 + 0x510;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x33) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x100;
  param_1[0x23] = 1;
  return param_1;
}

