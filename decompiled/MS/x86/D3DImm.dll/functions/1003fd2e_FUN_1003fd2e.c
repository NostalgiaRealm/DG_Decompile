/*
 * FUN_1003fd2e at 1003fd2e
 * undefined4 __thiscall FUN_1003fd2e(void * this, int param_1, int * param_2)
 * Address ranges: 1003fd2e-1003fd89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003fd2e(void *this,int param_1,int *param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((param_2 != (int *)0x0) && (uVar2 = 0x88760307, *(int *)((int)this + 0x1520) != 0)) {
    FUN_1004c14b(*(void **)((int)this + 0x151c),param_1,param_2);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

