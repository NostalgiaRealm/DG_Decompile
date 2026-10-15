/*
 * grDepthBiasLevel at 100018a9
 * undefined __stdcall grDepthBiasLevel(int param_1)
 * Address ranges: 100018a9-100018eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthBiasLevel,4
 */

/* __stdcall grDepthBiasLevel,4 */

void grDepthBiasLevel(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x18a9  20  _grDepthBiasLevel@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)(puVar2 + 0xc) + 0x123)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x98))(param_1);
      *(int *)(*(int *)(puVar2 + 0xc) + 0x123) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

