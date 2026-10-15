/*
 * FUN_100abb06 at 100abb06
 * char __thiscall FUN_100abb06(void * this, LPCSTR param_1, undefined4 param_2)
 * Address ranges: 100abb06-100abb3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100abb06(void *this,LPCSTR param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_10 [3];
  
  FUN_100cf070(local_10,param_1);
  cVar1 = FUN_100aae8b(this,local_10,param_2);
  FUN_100cf0b0(local_10);
  return cVar1;
}

