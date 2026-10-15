/*
 * _grFlush@0 at 180001578
 * undefined __fastcall _grFlush@0(void)
 * Address ranges: 180001578-1800015a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFlush_0(void)

{
  undefined *puVar1;
  
                    /* 0x1578  36  _grFlush@0
                       0x1578  136  grFlush */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x38))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

