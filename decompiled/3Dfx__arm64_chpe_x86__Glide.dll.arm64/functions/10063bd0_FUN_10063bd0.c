/*
 * FUN_10063bd0 at 10063bd0
 * undefined FUN_10063bd0(void)
 * Address ranges: 10063bd0-10063c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_10063bd0(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ulonglong uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  if ((*(int *)(param_1 + 0x8e0) != 0) &&
     (uVar1 = FUN_10072128(param_3,param_4,param_2), (uVar1 & 1) != 0)) {
    FUN_1007ac00(*(undefined4 *)param_2,param_5,param_4);
    *(undefined4 *)(param_2 + 3) = param_4;
    *(undefined8 *)((int)param_2 + 0x1c) = 0;
  }
  return param_2;
}

