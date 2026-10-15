/*
 * FUN_10004f50 at 10004f50
 * undefined FUN_10004f50(void)
 * Address ranges: 10004f50-10004fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004f50(undefined4 param_1,int param_2,undefined4 *param_3)

{
  if ((&DAT_1017156a)[param_2 * 0x228] == '\0') {
    FUN_10003a58(param_1,param_2);
  }
  *param_3 = *(undefined4 *)(&DAT_101714fc + param_2 * 0x45);
  param_3[1] = *(undefined4 *)((int)&DAT_101714fc + param_2 * 0x228 + 4);
  param_3[2] = *(undefined4 *)(&DAT_1017150c + param_2 * 0x45);
  param_3[3] = *(undefined4 *)(&DAT_10170f70 + param_2 * 0x20);
  return;
}

