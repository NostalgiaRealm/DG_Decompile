/*
 * _grSstIdle@0 at 1800013a4
 * undefined __fastcall _grSstIdle@0(void)
 * Address ranges: 1800013a4-1800013d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstIdle_0(void)

{
  undefined *puVar1;
  
                    /* 0x13a4  71  _grSstIdle@0
                       0x13a4  232  grSstIdle */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0xa0))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

