/*
 * FUN_100673e8 at 100673e8
 * undefined FUN_100673e8(void)
 * Address ranges: 100673e8-10067467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_100673e8(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ulonglong uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  if ((*(int *)(param_1 + 0x8e0) != 0) &&
     (uVar1 = FUN_10075948(param_3,param_4,param_2), (uVar1 & 1) != 0)) {
    FUN_1007e4a0(*(undefined4 *)param_2,param_5,param_4);
    *(undefined4 *)(param_2 + 3) = param_4;
    *(undefined8 *)((int)param_2 + 0x1c) = 0;
  }
  return param_2;
}

