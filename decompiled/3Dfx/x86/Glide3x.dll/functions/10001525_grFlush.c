/*
 * grFlush at 10001525
 * undefined __stdcall grFlush(void)
 * Address ranges: 10001525-10001543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFlush,0
 */

/* __stdcall grFlush,0 */

void grFlush(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1525  36  _grFlush@0 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x1c))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

