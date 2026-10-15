/*
 * FUN_10030b55 at 10030b55
 * char __thiscall FUN_10030b55(void * this, LPCSTR param_1, undefined4 param_2)
 * Address ranges: 10030b55-10030b8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10030b55(void *this,LPCSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_1002eb10(local_10,param_1);
  cVar1 = FUN_1002feda(this,local_10,param_2);
  FUN_1002eb50(local_10);
  return cVar1;
}

