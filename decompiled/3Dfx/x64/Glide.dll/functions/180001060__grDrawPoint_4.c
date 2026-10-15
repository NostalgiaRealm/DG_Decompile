/*
 * _grDrawPoint@4 at 180001060
 * undefined __fastcall _grDrawPoint@4(void)
 * Address ranges: 180001060-180001092
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4(void)

{
  undefined *puVar1;
  
                    /* 0x1060  36  _grDrawPoint@4
                       0x1060  197  grDrawPoint */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1f8))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

