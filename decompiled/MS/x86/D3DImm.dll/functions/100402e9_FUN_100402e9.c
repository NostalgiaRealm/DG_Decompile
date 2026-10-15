/*
 * FUN_100402e9 at 100402e9
 * undefined4 __thiscall FUN_100402e9(void * this, undefined * param_1, undefined4 param_2)
 * Address ranges: 100402e9-1004037b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100402e9(void *this,undefined *param_1,undefined4 param_2)

{
  char cVar1;
  BOOL BVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_1 != (undefined *)0x0) {
    uVar4 = 0;
    local_8 = 1;
    if (*(int *)((int)this + 0xa8c) != 0) {
      do {
        if (local_8 == 0) break;
        if (((*(uint *)((int)this + uVar4 * 0x6c + 0xadc) & 0xe0006) == 0) ||
           (cVar1 = (**(code **)(**(int **)((int)this + 0xa70) + 0x30))(), cVar1 == '\0')) {
          local_8 = (*(code *)param_1)((int)this + uVar4 * 0x6c + 0xa90,param_2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)this + 0xa8c));
    }
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

