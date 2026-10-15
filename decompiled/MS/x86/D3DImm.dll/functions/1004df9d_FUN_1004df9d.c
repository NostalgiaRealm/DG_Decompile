/*
 * FUN_1004df9d at 1004df9d
 * undefined4 __stdcall FUN_1004df9d(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1004df9d-1004dfde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004df9d(int param_1,uint param_2,undefined4 *param_3)

{
  void *this;
  BOOL BVar1;
  undefined4 uVar2;
  
  this = *(void **)(param_1 + 4);
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = FUN_100078db(this,param_2,param_3);
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

