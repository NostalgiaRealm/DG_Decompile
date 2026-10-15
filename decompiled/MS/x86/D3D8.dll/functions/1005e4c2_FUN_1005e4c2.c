/*
 * FUN_1005e4c2 at 1005e4c2
 * int __stdcall FUN_1005e4c2(int param_1)
 * Address ranges: 1005e4c2-1005e4de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005e4c2(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x88;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

