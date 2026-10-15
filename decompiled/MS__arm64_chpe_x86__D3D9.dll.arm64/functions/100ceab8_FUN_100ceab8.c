/*
 * FUN_100ceab8 at 100ceab8
 * undefined FUN_100ceab8(void)
 * Address ranges: 100ceab8-100cebc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100ceab8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,int param_6,int param_7,int param_8,uint param_9,
                      undefined4 param_10,undefined1 param_11)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong extraout_x15;
  undefined4 local_10 [4];
  
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015f778;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[1] = param_2;
  param_1[6] = param_5;
  param_1[0xc] = param_9;
  param_1[7] = param_6;
  iVar1 = param_7;
  if ((param_9 & 4) != 0) {
    iVar1 = 1;
  }
  param_1[8] = iVar1;
  uVar3 = 1;
  if (param_8 == 2 || param_8 == 5) {
    uVar3 = 6;
  }
  param_1[9] = uVar3;
  if ((param_9 & 4) == 0) {
    param_7 = 0;
  }
  param_1[10] = param_7;
  param_1[0xd] = param_8;
  puVar2 = param_1 + 0xe;
  *puVar2 = 0;
  *(undefined1 *)(param_1 + 0xf) = param_11;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  if ((param_7 == 0) || (10 < param_6 - 0x15U)) {
    param_7 = param_1[8];
  }
  param_1[0xb] = param_7;
  if (param_6 - 0x27U < 3) {
    param_1[0xc] = param_9 | 8;
  }
  FUN_100cecb8(local_10,param_1[1],param_6);
  *puVar2 = local_10[0];
  return extraout_x15 & 0xffffffff;
}

