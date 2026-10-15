/*
 * FUN_1002ab7e at 1002ab7e
 * undefined4 __thiscall FUN_1002ab7e(void * this, undefined4 * param_1)
 * Address ranges: 1002ab7e-1002abdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ab7e(void *this,undefined4 *param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = 0x88760238;
    BVar2 = TryEnterCriticalSection(DAT_1006c254);
    if (BVar2 == 0) {
      FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
    }
    piVar1 = *(int **)((int)this + 0x104);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
      uVar3 = 0;
      *param_1 = *(undefined4 *)((int)this + 0x104);
    }
    LeaveCriticalSection(DAT_1006c254);
  }
  return uVar3;
}

