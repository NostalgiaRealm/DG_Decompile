/*
 * FUN_1002adf9 at 1002adf9
 * undefined4 __thiscall FUN_1002adf9(void * this, int * param_1)
 * Address ranges: 1002adf9-1002ae51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002adf9(void *this,int *param_1)

{
  int *piVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar2 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  piVar1 = *(int **)((int)this + 0x104);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
    *(int **)((int)this + 0x104) = param_1;
  }
  LeaveCriticalSection(DAT_1006c254);
  return 0;
}

