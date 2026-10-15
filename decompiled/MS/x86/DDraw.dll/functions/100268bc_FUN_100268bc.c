/*
 * FUN_100268bc at 100268bc
 * undefined4 __thiscall FUN_100268bc(void * this, undefined4 * param_1)
 * Address ranges: 100268bc-1002691a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100268bc(void *this,undefined4 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined1 local_1c [16];
  undefined4 local_c;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar2 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)this + 0x118) + 0x48))(local_1c,*(undefined4 *)((int)this + 0x120))
    ;
    uVar2 = 0;
    *param_1 = local_c;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar2;
}

