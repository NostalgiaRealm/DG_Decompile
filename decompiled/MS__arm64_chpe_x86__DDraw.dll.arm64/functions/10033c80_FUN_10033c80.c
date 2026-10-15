/*
 * FUN_10033c80 at 10033c80
 * undefined FUN_10033c80(void)
 * Address ranges: 10033c80-10033d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10033c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                      uint param_9,undefined4 param_10,undefined1 param_11)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong extraout_x15;
  undefined4 local_10 [4];
  
  *param_1 = &PTR_FUN_100b2398;
  param_1[1] = param_2;
  uVar1 = param_7;
  if ((param_9 & 4) != 0) {
    uVar1 = 1;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = uVar1;
  uVar3 = 1;
  if (param_8 == 2 || param_8 == 5) {
    uVar3 = 6;
  }
  param_1[9] = uVar3;
  if ((param_9 & 4) == 0) {
    param_7 = 0;
  }
  param_1[10] = param_7;
  param_1[0xc] = param_9;
  param_1[0xd] = param_8;
  puVar2 = param_1 + 0xe;
  *puVar2 = 0;
  *(undefined1 *)(param_1 + 0xf) = param_11;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0xb] = uVar1;
  FUN_10033e50(local_10,param_2,param_6);
  *puVar2 = local_10[0];
  return extraout_x15 & 0xffffffff;
}

