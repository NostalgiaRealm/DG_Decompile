/*
 * grDepthBiasLevel at 10001a15
 * undefined __stdcall grDepthBiasLevel(short param_1)
 * Address ranges: 10001a15-10001a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthBiasLevel,4
 */

/* __stdcall grDepthBiasLevel,4 */

void grDepthBiasLevel(short param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x1a15  25  _grDepthBiasLevel@4 */
  iVar3 = (int)param_1;
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar3 != *(int *)((int)*(int **)(puVar2 + 0xc) + 0x123)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x88))(iVar3);
      *(int *)(*(int *)(puVar2 + 0xc) + 0x123) = iVar3;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

