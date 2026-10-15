/*
 * FUN_1004731b at 1004731b
 * undefined __thiscall FUN_1004731b(void * this, int * param_1)
 * Address ranges: 1004731b-10047360
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004731b(void *this,int *param_1)

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

