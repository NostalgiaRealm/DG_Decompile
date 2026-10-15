/*
 * FUN_10006cfb at 10006cfb
 * char __thiscall FUN_10006cfb(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 10006cfb-10006d30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10006cfb(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_10004bf0(local_10,param_1);
  cVar1 = FUN_1000604a(this,local_10,param_2);
  FUN_10004cb0(local_10);
  return cVar1;
}

