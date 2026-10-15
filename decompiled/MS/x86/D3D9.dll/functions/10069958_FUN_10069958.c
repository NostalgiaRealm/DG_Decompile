/*
 * FUN_10069958 at 10069958
 * int __stdcall FUN_10069958(int param_1, int param_2)
 * Address ranges: 10069958-1006997b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10069958(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(*(int *)(param_1 + 0x14) + param_2);
  if (-2 < iVar1) {
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar1;
}

