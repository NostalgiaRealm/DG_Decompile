/*
 * FUN_1004de8c at 1004de8c
 * undefined4 __stdcall FUN_1004de8c(int param_1, uint param_2, int param_3)
 * Address ranges: 1004de8c-1004ded2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004de8c(int param_1,uint param_2,int param_3)

{
  void *this;
  BOOL BVar1;
  
  this = *(void **)(param_1 + 4);
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  FUN_10007e31(this,param_2,param_3 != 0);
  LeaveCriticalSection(DAT_1006bbd0);
  return 0;
}

