/*
 * FUN_10007017 at 10007017
 * char __thiscall FUN_10007017(void * this, LPCSTR param_1, undefined4 param_2)
 * Address ranges: 10007017-1000704c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10007017(void *this,LPCSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_10004fc0(local_10,param_1);
  cVar1 = FUN_1000639c(this,local_10,param_2);
  FUN_10005000(local_10);
  return cVar1;
}

