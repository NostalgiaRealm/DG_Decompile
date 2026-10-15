/*
 * FUN_1002ad61 at 1002ad61
 * undefined4 __thiscall FUN_1002ad61(void * this, int * param_1)
 * Address ranges: 1002ad61-1002adc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ad61(void *this,int *param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  BVar1 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar1 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  uVar3 = 0x80070057;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x7c)) {
    piVar4 = (int *)((int)this + 0x150);
    piVar5 = param_1;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    uVar3 = 0;
    if ((*(uint *)((int)this + 0x154) >> 0xb & 1) == 0) {
      param_1[9] = 0;
    }
  }
  LeaveCriticalSection(DAT_1006c254);
  return uVar3;
}

