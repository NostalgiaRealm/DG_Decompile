/*
 * FUN_1003da54 at 1003da54
 * char __thiscall FUN_1003da54(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 1003da54-1003da89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1003da54(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_10060130(local_10,param_1);
  cVar1 = FUN_1003cda3(this,local_10,param_2);
  FUN_100601f0(local_10);
  return cVar1;
}

