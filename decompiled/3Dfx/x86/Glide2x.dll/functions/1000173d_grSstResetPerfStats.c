/*
 * grSstResetPerfStats at 1000173d
 * undefined __stdcall grSstResetPerfStats(void)
 * Address ranges: 1000173d-1000175e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstResetPerfStats,0
 */

/* __stdcall grSstResetPerfStats,0 */

void grSstResetPerfStats(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x173d  71  _grSstResetPerfStats@0 */
  puVar2 = FUN_10012760();
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

