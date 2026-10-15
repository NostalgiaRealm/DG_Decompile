/*
 * FUN_100045b0 at 100045b0
 * undefined FUN_100045b0(void)
 * Address ranges: 100045b0-1000463f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100045b0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  if ((&DAT_101389aa)[param_2 * 0x228] == '\0') {
    FUN_10003618(param_1,param_2);
  }
  *param_3 = *(undefined4 *)(&DAT_1013893c + param_2 * 0x45);
  param_3[1] = *(undefined4 *)((int)&DAT_1013893c + param_2 * 0x228 + 4);
  param_3[2] = *(undefined4 *)(&DAT_1013894c + param_2 * 0x45);
  param_3[3] = *(undefined4 *)(&DAT_10138250 + param_2 * 8);
  return;
}

