/*
 * FUN_1801baed8 at 1801baed8
 * undefined FUN_1801baed8(void)
 * Address ranges: 1801baed8-1801baf8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801baed8(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,int param_6,int param_7,int param_8,uint param_9,
                      undefined1 param_10)

{
  int iVar1;
  undefined4 uVar2;
  longlong extraout_x10;
  undefined4 local_10 [4];
  
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022e0f8;
  param_1[1] = param_2;
  iVar1 = param_7;
  if ((param_9 & 4) != 0) {
    iVar1 = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(int *)((longlong)param_1 + 0x2c) = param_6;
  *(uint *)(param_1 + 8) = param_9;
  *(int *)((longlong)param_1 + 0x44) = param_8;
  uVar2 = 1;
  if (param_8 == 2 || param_8 == 5) {
    uVar2 = 6;
  }
  *(undefined1 *)((longlong)param_1 + 0x4d) = 0;
  *(int *)(param_1 + 6) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  if ((param_9 & 4) == 0) {
    param_7 = 0;
  }
  *(int *)(param_1 + 7) = param_7;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = param_10;
  if ((param_7 == 0) || (10 < param_6 - 0x15U)) {
    param_7 = *(int *)(param_1 + 6);
  }
  *(int *)((longlong)param_1 + 0x3c) = param_7;
  if (param_6 - 0x27U < 3) {
    *(uint *)(param_1 + 8) = param_9 | 8;
  }
  FUN_1801baf90(local_10,param_1[1],param_6);
  *(undefined4 *)(extraout_x10 + 0x48) = local_10[0];
  return extraout_x10;
}

