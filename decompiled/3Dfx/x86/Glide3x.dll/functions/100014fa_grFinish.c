/*
 * grFinish at 100014fa
 * undefined __stdcall grFinish(void)
 * Address ranges: 100014fa-10001524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFinish,0
 */

/* __stdcall grFinish,0 */

void grFinish(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x14fa  35  _grFinish@0 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x1c))();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x54))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

