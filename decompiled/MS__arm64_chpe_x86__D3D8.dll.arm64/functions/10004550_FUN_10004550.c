/*
 * FUN_10004550 at 10004550
 * undefined FUN_10004550(void)
 * Address ranges: 10004550-1000459f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004550(undefined4 param_1,int param_2)

{
  if ((&DAT_101389aa)[param_2 * 0x228] == '\0') {
    FUN_10003618(param_1,param_2);
  }
  return *(undefined4 *)(&DAT_10138250 + param_2 * 8);
}

