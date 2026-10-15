/*
 * grFogTable at 10001b26
 * undefined __stdcall grFogTable(undefined4 * param_1)
 * Address ranges: 10001b26-10001b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogTable,4
 */

/* __stdcall grFogTable,4 */

void grFogTable(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1b26  41  _grFogTable@4 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xd8))(param_1);
    FUN_100500b0((undefined4 *)(*(int *)(puVar2 + 0xc) + 0x21c),param_1,
                 *(uint *)(*(int *)(puVar2 + 0xc) + 0xd8));
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

