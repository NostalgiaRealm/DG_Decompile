/*
 * FUN_10007b85 at 10007b85
 * int __stdcall FUN_10007b85(int * param_1, int param_2, int param_3)
 * Address ranges: 10007b85-10007ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007b85(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = param_1[param_2];
  }
  else {
    iVar1 = param_2 * param_3 + *param_1;
  }
  return iVar1;
}

