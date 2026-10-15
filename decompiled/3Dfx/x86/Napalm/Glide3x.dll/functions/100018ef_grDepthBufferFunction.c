/*
 * grDepthBufferFunction at 100018ef
 * undefined __stdcall grDepthBufferFunction(uint param_1)
 * Address ranges: 100018ef-10001934
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthBufferFunction,4
 */

/* __stdcall grDepthBufferFunction,4 */

void grDepthBufferFunction(uint param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x18ef  27  _grDepthBufferFunction@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)((int)*(int **)(puVar2 + 0xc) + 0x14b)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x98))(param_1);
      *(char *)(*(int *)(puVar2 + 0xc) + 0x14b) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

