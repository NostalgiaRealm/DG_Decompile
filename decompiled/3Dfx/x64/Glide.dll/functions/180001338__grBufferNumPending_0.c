/*
 * _grBufferNumPending@0 at 180001338
 * undefined __fastcall _grBufferNumPending@0(void)
 * Address ranges: 180001338-180001367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferNumPending_0(void)

{
  undefined *puVar1;
  
                    /* 0x1338  16  _grBufferNumPending@0
                       0x1338  177  grBufferNumPending */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 200))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

