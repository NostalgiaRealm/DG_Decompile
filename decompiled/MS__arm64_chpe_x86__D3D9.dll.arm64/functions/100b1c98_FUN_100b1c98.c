/*
 * FUN_100b1c98 at 100b1c98
 * undefined FUN_100b1c98(void)
 * Address ranges: 100b1c98-100b1daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100b1c98(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_100ceab8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015f0e8;
  piVar1 = (int *)(param_2 + 0x1cf00);
  iVar2 = *piVar1;
  param_1[0x10] = iVar2;
  iVar3 = *piVar1;
  param_1[0x13] = param_3;
  param_1[0x12] = iVar3;
  param_1[0x14] = iVar3 + param_3 * 0x1510 + 0x510;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  param_1[0x19] = 0;
  iVar3 = *piVar1;
  param_1[0x1b] = param_3;
  param_1[0x1a] = iVar3;
  param_1[0x1c] = iVar3 + param_3 * 0x1510 + 0x510;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = 0;
  param_1[0x11] = iVar2 + param_3 * 0x1510 + 0x510;
  return param_1;
}

