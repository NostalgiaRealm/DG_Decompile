/*
 * FUN_10074237 at 10074237
 * int __stdcall FUN_10074237(int param_1)
 * Address ranges: 10074237-10074253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10074237(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + -0x88;
  if ((*(int *)(param_1 + 4) == 0) && (param_1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

