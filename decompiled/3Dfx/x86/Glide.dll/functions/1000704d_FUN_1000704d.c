/*
 * FUN_1000704d at 1000704d
 * char __thiscall FUN_1000704d(void * this, LPCWSTR param_1, undefined4 param_2)
 * Address ranges: 1000704d-10007082
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1000704d(void *this,LPCWSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_10004f40(local_10,param_1);
  cVar1 = FUN_1000639c(this,local_10,param_2);
  FUN_10005000(local_10);
  return cVar1;
}

