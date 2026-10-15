/*
 * FUN_10004ef0 at 10004ef0
 * undefined FUN_10004ef0(void)
 * Address ranges: 10004ef0-10004f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004ef0(undefined4 param_1,int param_2)

{
  if ((&DAT_1017156a)[param_2 * 0x228] == '\0') {
    FUN_10003a58(param_1,param_2);
  }
  return *(undefined4 *)(&DAT_10170f70 + param_2 * 0x20);
}

