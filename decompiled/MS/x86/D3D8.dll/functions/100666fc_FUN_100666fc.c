/*
 * FUN_100666fc at 100666fc
 * int __stdcall FUN_100666fc(int param_1)
 * Address ranges: 100666fc-10066718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100666fc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0xc0;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

