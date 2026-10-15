/*
 * _grAADrawPoint@4 at 1800011a8
 * undefined __fastcall _grAADrawPoint@4(void)
 * Address ranges: 1800011a8-1800011da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawPoint_4(void)

{
  undefined *puVar1;
  
                    /* 0x11a8  6  _grAADrawPoint@4
                       0x11a8  167  grAADrawPoint */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x220))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

