/*
 * FUN_1004dbab at 1004dbab
 * undefined4 __stdcall FUN_1004dbab(int param_1, int * param_2)
 * Address ranges: 1004dbab-1004dbea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004dbab(int param_1,int *param_2)

{
  void *this;
  BOOL BVar1;
  undefined4 uVar2;
  
  this = *(void **)(param_1 + 4);
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = FUN_10006d16(this,param_2);
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

