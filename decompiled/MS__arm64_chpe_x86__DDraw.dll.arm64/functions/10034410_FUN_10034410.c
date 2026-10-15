/*
 * FUN_10034410 at 10034410
 * undefined FUN_10034410(void)
 * Address ranges: 10034410-10034487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10034410(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + -0x8c);
  param_2[1] = *(undefined4 *)(param_1 + -0x90);
  param_2[2] = 1;
  if ((*(uint *)(param_1 + -0x94) >> 0x11 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + -0x80);
  }
  param_2[3] = uVar1;
  param_2[4] = *(undefined4 *)(&DAT_100b39f0 + *(int *)(param_1 + -0x1c) * 4);
  return param_2;
}

