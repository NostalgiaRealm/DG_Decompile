/*
 * FUN_10040524 at 10040524
 * undefined4 __thiscall FUN_10040524(void * this, undefined * param_1, undefined4 param_2)
 * Address ranges: 10040524-1004058b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040524(void *this,undefined *param_1,undefined4 param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x80070057;
  if (param_1 != (undefined *)0x0) {
    uVar4 = 0;
    iVar2 = 1;
    if (*(int *)((int)this + 0xa8c) != 0) {
      do {
        if (iVar2 == 0) break;
        iVar2 = (*(code *)param_1)(uVar4 * 0x6c + 0xad8 + (int)this,param_2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)((int)this + 0xa8c));
    }
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

