/*
 * grResetTriStats at 100016f0
 * undefined __stdcall grResetTriStats(void)
 * Address ranges: 100016f0-10001711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grResetTriStats,0
 */

/* __stdcall grResetTriStats,0 */

void grResetTriStats(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x16f0  64  _grResetTriStats@0 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xf4))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

