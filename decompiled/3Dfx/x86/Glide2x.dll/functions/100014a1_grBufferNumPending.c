/*
 * grBufferNumPending at 100014a1
 * undefined4 __stdcall grBufferNumPending(void)
 * Address ranges: 100014a1-100014c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferNumPending,0
 */

/* __stdcall grBufferNumPending,0 */

undefined4 grBufferNumPending(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
                    /* 0x14a1  14  _grBufferNumPending@0 */
  puVar2 = FUN_10012760();
  uVar3 = 0;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = (**(code **)(**(int **)(puVar2 + 0xc) + 100))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return uVar3;
}

