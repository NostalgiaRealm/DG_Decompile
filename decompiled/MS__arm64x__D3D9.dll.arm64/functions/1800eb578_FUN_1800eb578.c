/*
 * FUN_1800eb578 at 1800eb578
 * undefined FUN_1800eb578(void)
 * Address ranges: 1800eb578-1800eb5eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1800eb578(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  if ((*(longlong *)(param_1 + 0xb10) != 0) &&
     (uVar1 = FUN_1800f0470(param_3,param_4,param_2), (uVar1 & 1) != 0)) {
    thunk_FUN_180001218(*param_2,param_5,param_4);
    *(undefined4 *)(param_2 + 4) = param_4;
    *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  }
  return param_2;
}

