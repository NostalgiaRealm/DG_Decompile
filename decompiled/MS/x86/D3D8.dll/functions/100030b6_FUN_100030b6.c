/*
 * FUN_100030b6 at 100030b6
 * int __stdcall FUN_100030b6(undefined4 param_1, undefined4 param_2, int param_3)
 * Address ranges: 100030b6-100030d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100030b6(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_100ba2b4 + 2000);
  if (*(int *)(DAT_100ba2b4 + 2000) == 0) {
    iVar1 = 1;
    if (param_3 != 0) {
      iVar1 = param_3;
    }
  }
  return iVar1;
}

