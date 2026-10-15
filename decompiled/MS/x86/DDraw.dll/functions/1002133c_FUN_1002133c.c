/*
 * FUN_1002133c at 1002133c
 * undefined __stdcall FUN_1002133c(undefined4 * param_1, uint param_2)
 * Address ranges: 1002133c-1002136d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002133c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 < 0x1d) {
    iVar1 = param_2 * 0x2c;
    *param_1 = *(undefined4 *)(&DAT_100693f0 + iVar1);
    param_1[1] = *(undefined4 *)(&DAT_100693f4 + iVar1);
    param_1[2] = *(undefined4 *)(&DAT_100693f8 + iVar1);
    param_1[3] = *(undefined4 *)(&DAT_100693fc + iVar1);
  }
  return;
}

