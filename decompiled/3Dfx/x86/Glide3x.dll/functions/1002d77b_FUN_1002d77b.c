/*
 * FUN_1002d77b at 1002d77b
 * char __thiscall FUN_1002d77b(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 1002d77b-1002d7b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1002d77b(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_1002b680(local_10,param_1);
  cVar1 = FUN_1002caca(this,local_10,param_2);
  FUN_1002b740(local_10);
  return cVar1;
}

