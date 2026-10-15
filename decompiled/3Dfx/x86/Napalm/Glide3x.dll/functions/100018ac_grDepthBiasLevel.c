/*
 * grDepthBiasLevel at 100018ac
 * undefined __stdcall grDepthBiasLevel(int param_1)
 * Address ranges: 100018ac-100018ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthBiasLevel,4
 */

/* __stdcall grDepthBiasLevel,4 */

void grDepthBiasLevel(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x18ac  26  _grDepthBiasLevel@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)(puVar2 + 0xc) + 0x146)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x94))(param_1);
      *(int *)(*(int *)(puVar2 + 0xc) + 0x146) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

