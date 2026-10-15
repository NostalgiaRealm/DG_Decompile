/*
 * FUN_10006cc5 at 10006cc5
 * char __thiscall FUN_10006cc5(void * this, LPCSTR param_1, undefined4 param_2)
 * Address ranges: 10006cc5-10006cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10006cc5(void *this,LPCSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_10004c70(local_10,param_1);
  cVar1 = FUN_1000604a(this,local_10,param_2);
  FUN_10004cb0(local_10);
  return cVar1;
}

