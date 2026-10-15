/*
 * FUN_1004b646 at 1004b646
 * undefined4 __thiscall FUN_1004b646(void * this, uint param_1, int param_2)
 * Address ranges: 1004b646-1004b6a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b646(void *this,uint param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar2 = 0x80070057;
  if ((param_1 < 0xff) && (param_1 + param_2 < 0x101)) {
    (**(code **)(**(int **)((int)this + 0x60) + 0x58))(param_1,param_2);
    uVar2 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar2;
}

