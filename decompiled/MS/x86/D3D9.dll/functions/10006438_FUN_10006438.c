/*
 * FUN_10006438 at 10006438
 * int __stdcall FUN_10006438(uint param_1)
 * Address ranges: 10006438-10006454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006438(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x18) {
    iVar1 = *(int *)(&DAT_100d4b90 + param_1 * 4);
  }
  else {
    iVar1 = param_1 - 0xf6;
  }
  return iVar1;
}

