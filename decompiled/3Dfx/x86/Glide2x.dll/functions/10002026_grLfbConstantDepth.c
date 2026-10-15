/*
 * grLfbConstantDepth at 10002026
 * undefined __stdcall grLfbConstantDepth(undefined4 param_1)
 * Address ranges: 10002026-10002067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbConstantDepth,4
 */

/* __stdcall grLfbConstantDepth,4 */

void grLfbConstantDepth(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x2026  51  _grLfbConstantDepth@4 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((short)param_1 != *(short *)((int)*(int **)(puVar2 + 0xc) + 0x12f)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x6c))(param_1);
      *(short *)(*(int *)(puVar2 + 0xc) + 0x12f) = (short)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

