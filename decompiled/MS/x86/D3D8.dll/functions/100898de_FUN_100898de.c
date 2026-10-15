/*
 * FUN_100898de at 100898de
 * char __thiscall FUN_100898de(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 100898de-10089913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100898de(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_100ac710(local_10,param_1);
  cVar1 = FUN_10088c2d(this,local_10,param_2);
  FUN_100ac7d0(local_10);
  return cVar1;
}

