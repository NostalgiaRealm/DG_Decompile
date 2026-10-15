/*
 * FUN_10005b4d at 10005b4d
 * int __stdcall FUN_10005b4d(uint param_1)
 * Address ranges: 10005b4d-10005b69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10005b4d(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x18) {
    iVar1 = *(int *)(&DAT_100b1710 + param_1 * 4);
  }
  else {
    iVar1 = param_1 - 0xf6;
  }
  return iVar1;
}

