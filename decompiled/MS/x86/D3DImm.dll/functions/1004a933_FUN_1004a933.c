/*
 * FUN_1004a933 at 1004a933
 * int __thiscall FUN_1004a933(void * this, undefined4 * param_1)
 * Address ranges: 1004a933-1004a962
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a933(void *this,undefined4 *param_1)

{
  bool bVar1;
  int local_8;
  
  local_8 = 0;
  bVar1 = FUN_1004ad2a(param_1 + 1,this,&local_8);
  if (bVar1) {
    FUN_1004a82b(param_1);
  }
  return local_8;
}

