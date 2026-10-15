/*
 * FUN_100e4f48 at 100e4f48
 * undefined FUN_100e4f48(void)
 * Address ranges: 100e4f48-100e4fc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_100e4f48(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  ulonglong uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  if ((*(int *)(param_1 + 0x8e0) != 0) &&
     (uVar1 = FUN_100eac18(param_3,param_4,param_2), (uVar1 & 1) != 0)) {
    FUN_100ff660(*(undefined4 *)param_2,param_5,param_4);
    *(undefined4 *)(param_2 + 3) = param_4;
    *(undefined8 *)((int)param_2 + 0x1c) = 0;
  }
  return param_2;
}

