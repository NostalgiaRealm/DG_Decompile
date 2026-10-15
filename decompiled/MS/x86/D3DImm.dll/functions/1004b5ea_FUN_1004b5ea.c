/*
 * FUN_1004b5ea at 1004b5ea
 * undefined4 __thiscall FUN_1004b5ea(void * this, int param_1)
 * Address ranges: 1004b5ea-1004b645
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b5ea(void *this,int param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_1 != 0) {
    (**(code **)**(undefined4 **)(param_1 + 0x60))();
    cVar1 = (**(code **)(**(int **)((int)this + 0x60) + 0x50))(*(undefined4 *)(param_1 + 0x60));
    uVar3 = 0;
    if (cVar1 == '\0') {
      uVar3 = 0x80004005;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

