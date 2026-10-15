/*
 * FUN_1002ad0f at 1002ad0f
 * undefined4 __thiscall FUN_1002ad0f(void * this, int * param_1)
 * Address ranges: 1002ad0f-1002ad60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ad0f(void *this,int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x20)) {
    piVar4 = (int *)((int)this + 0x198);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *piVar4;
      piVar4 = piVar4 + 1;
      param_1 = param_1 + 1;
    }
    uVar3 = 0;
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

