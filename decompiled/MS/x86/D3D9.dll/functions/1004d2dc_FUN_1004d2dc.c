/*
 * FUN_1004d2dc at 1004d2dc
 * undefined __thiscall FUN_1004d2dc(void * this, uint param_1)
 * Address ranges: 1004d2dc-1004d33a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004d2dc(void *this,uint param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  if (*(int *)(param_1 + 0x34) != 0) {
    piVar1 = (int *)FUN_1004d33b((void *)((int)this + 0x50),&param_1);
    if (piVar1 != (int *)0x0) {
      FUN_1004cab1((int *)(*piVar1 * 0x30 + *(int *)((int)this + 0x28)));
      *(undefined1 *)(*piVar1 * 0x30 + 0x2d + *(int *)((int)this + 0x28)) = 1;
      FUN_1004d37a((void *)((int)this + 0x50),&param_1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x60));
  return;
}

