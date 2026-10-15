/*
 * grDepthBufferFunction at 100019ea
 * undefined __stdcall grDepthBufferFunction(uint param_1)
 * Address ranges: 100019ea-10001a2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthBufferFunction,4
 */

/* __stdcall grDepthBufferFunction,4 */

void grDepthBufferFunction(uint param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x19ea  26  _grDepthBufferFunction@4 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(byte *)(*(int **)(puVar2 + 0xc) + 0x4a)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x8c))(param_1);
      *(char *)(*(int *)(puVar2 + 0xc) + 0x128) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

