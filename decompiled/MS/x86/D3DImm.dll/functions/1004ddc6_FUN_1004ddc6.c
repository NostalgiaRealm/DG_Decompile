/*
 * FUN_1004ddc6 at 1004ddc6
 * undefined4 __stdcall FUN_1004ddc6(int param_1, uint param_2)
 * Address ranges: 1004ddc6-1004de33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004ddc6(int param_1,uint param_2)

{
  void *this;
  BOOL BVar1;
  undefined4 uVar2;
  
  this = *(void **)(param_1 + 4);
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x88760835;
  if ((((*(char *)((int)this + 0x224) == '\0') && (uVar2 = 0x88760834, param_2 != 0)) &&
      (param_2 <= *(uint *)((int)this + 0x218))) &&
     (*(int *)(*(int *)((int)this + 0x214) + -4 + param_2 * 4) != 0)) {
    FUN_1003dbaa(this,param_2 - 1);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

