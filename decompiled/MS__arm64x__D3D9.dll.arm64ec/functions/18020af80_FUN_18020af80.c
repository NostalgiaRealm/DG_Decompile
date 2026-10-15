/*
 * FUN_18020af80 at 18020af80
 * undefined FUN_18020af80(void)
 * Address ranges: 18020af80-18020afd7;18020afe0-18020aff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18020af80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
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
     (uVar1 = FUN_18020fa48(param_3,param_4,param_2), (uVar1 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*param_2,param_5,param_4);
  }
  return param_2;
}

