/*
 * FUN_100075db at 100075db
 * int __stdcall FUN_100075db(int * param_1, int param_2, int param_3)
 * Address ranges: 100075db-100075fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100075db(int *param_1,int param_2,int param_3)

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

