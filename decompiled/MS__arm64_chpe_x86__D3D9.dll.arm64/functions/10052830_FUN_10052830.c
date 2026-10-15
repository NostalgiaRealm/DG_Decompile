/*
 * FUN_10052830 at 10052830
 * undefined FUN_10052830(void)
 * Address ranges: 10052830-100528bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10052830(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,undefined1 param_7)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_1015eb98;
  piVar1 = param_1 + 6;
  param_1[1] = param_2;
  *piVar1 = param_6;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = param_7;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  if (*piVar1 == 2 && (*piVar1 == 2 && param_5 != 0)) {
    *piVar1 = 0;
  }
  return param_1;
}

