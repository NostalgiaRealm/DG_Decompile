/*
 * FUN_100abb3c at 100abb3c
 * char __thiscall FUN_100abb3c(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 100abb3c-100abb71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100abb3c(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_100ceff0(local_10,param_1);
  cVar1 = FUN_100aae8b(this,local_10,param_2);
  FUN_100cf0b0(local_10);
  return cVar1;
}

