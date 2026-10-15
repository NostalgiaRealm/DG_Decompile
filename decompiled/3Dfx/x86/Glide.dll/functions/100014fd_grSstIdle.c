/*
 * grSstIdle at 100014fd
 * undefined __stdcall grSstIdle(void)
 * Address ranges: 100014fd-1000151b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstIdle,0
 */

/* __stdcall grSstIdle,0 */

void grSstIdle(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x14fd  69  _grSstIdle@0 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x50))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

