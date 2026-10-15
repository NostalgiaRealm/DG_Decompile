/*
 * FUN_10030b8b at 10030b8b
 * char __thiscall FUN_10030b8b(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 10030b8b-10030bc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10030b8b(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_1002ea90(local_10,param_1);
  cVar1 = FUN_1002feda(this,local_10,param_2);
  FUN_1002eb50(local_10);
  return cVar1;
}

