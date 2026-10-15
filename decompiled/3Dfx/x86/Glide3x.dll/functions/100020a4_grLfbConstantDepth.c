/*
 * grLfbConstantDepth at 100020a4
 * undefined __stdcall grLfbConstantDepth(short param_1)
 * Address ranges: 100020a4-100020e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbConstantDepth,4
 */

/* __stdcall grLfbConstantDepth,4 */

void grLfbConstantDepth(short param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x20a4  51  _grLfbConstantDepth@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(short *)((int)*(int **)(puVar2 + 0xc) + 0x12f)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x7c))(param_1);
      *(short *)(*(int *)(puVar2 + 0xc) + 0x12f) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

