/*
 * FUN_100898a8 at 100898a8
 * char __thiscall FUN_100898a8(void * this, LPCSTR param_1, undefined4 param_2)
 * Address ranges: 100898a8-100898dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100898a8(void *this,LPCSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_100ac790(local_10,param_1);
  cVar1 = FUN_10088c2d(this,local_10,param_2);
  FUN_100ac7d0(local_10);
  return cVar1;
}

