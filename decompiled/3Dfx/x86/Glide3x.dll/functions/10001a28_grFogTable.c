/*
 * grFogTable at 10001a28
 * undefined __stdcall grFogTable(undefined4 * param_1)
 * Address ranges: 10001a28-10001a70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogTable,4
 */

/* __stdcall grFogTable,4 */

void grFogTable(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1a28  39  _grFogTable@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0xe8))(param_1);
    FUN_10052930((undefined4 *)(*(int *)(puVar2 + 0xc) + 0x298),param_1,
                 *(uint *)(*(int *)(puVar2 + 0xc) + 0xd8));
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

