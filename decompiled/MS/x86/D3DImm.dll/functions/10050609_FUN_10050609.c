/*
 * FUN_10050609 at 10050609
 * undefined __thiscall FUN_10050609(void * this, int * param_1)
 * Address ranges: 10050609-1005064e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10050609(void *this,int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)((int)this + 0xc) + 0x4a0);
  iVar1 = *(int *)((int)this + 0x10) * 0x1510 + *(int *)((int)this + 0xc);
  EnterCriticalSection(lpCriticalSection);
  if (param_1 == *(int **)(iVar1 + 0x550)) {
    *(undefined4 *)(iVar1 + 0x550) = 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  LeaveCriticalSection(lpCriticalSection);
  return;
}

