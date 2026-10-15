/*
 * FUN_1800ac434 at 1800ac434
 * undefined8 * __fastcall FUN_1800ac434(undefined8 * param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, uint param_6, uint param_7, int param_8, uint param_9, uint param_10)
 * Address ranges: 1800ac434-1800ac4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800ac434(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,uint param_6,uint param_7,int param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  param_1[1] = param_2;
  *param_1 = &PTR_D3DPERF_GetStatus_180103dc0;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = param_6;
  uVar1 = 1;
  uVar2 = param_7;
  if ((param_9 & 4) != 0) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 6) = uVar2;
  if ((param_8 == 2) || (param_8 == 5)) {
    uVar1 = 6;
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar1;
  *(int *)((longlong)param_1 + 0x44) = param_8;
  uVar2 = -(uint)((param_9 & 4) != 0) & param_7;
  *(uint *)(param_1 + 7) = uVar2;
  *(uint *)(param_1 + 8) = param_9;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = (undefined1)param_10;
  *(undefined1 *)((longlong)param_1 + 0x4d) = 0;
  if ((uVar2 == 0) || (10 < param_6 - 0x15)) {
    uVar2 = *(uint *)(param_1 + 6);
  }
  *(uint *)((longlong)param_1 + 0x3c) = uVar2;
  if (param_6 - 0x27 < 3) {
    *(uint *)(param_1 + 8) = param_9 | 8;
  }
  FUN_1800ac578(&param_10,param_1[1],param_6);
  *(uint *)(param_1 + 9) = param_10;
  return param_1;
}

