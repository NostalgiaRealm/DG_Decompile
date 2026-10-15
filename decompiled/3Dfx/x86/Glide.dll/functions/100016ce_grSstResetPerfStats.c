/*
 * grSstResetPerfStats at 100016ce
 * undefined __stdcall grSstResetPerfStats(void)
 * Address ranges: 100016ce-100016ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstResetPerfStats,0
 */

/* __stdcall grSstResetPerfStats,0 */

void grSstResetPerfStats(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x16ce  77  _grSstResetPerfStats@0 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xf0))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

