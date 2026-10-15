/*
 * FUN_1004b594 at 1004b594
 * undefined4 __thiscall FUN_1004b594(void * this, void * param_1, uint * param_2)
 * Address ranges: 1004b594-1004b5e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b594(void *this,void *param_1,uint *param_2)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar3 = 0x88760082;
  if ((param_1 != (void *)0x0) && (uVar3 = 0x80070057, param_2 != (uint *)0x0)) {
    uVar2 = FUN_1003f456(param_1,*(int **)((int)this + 0x60));
    *param_2 = uVar2;
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

