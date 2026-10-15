/*
 * _grFinish@0 at 18000153c
 * undefined __fastcall _grFinish@0(void)
 * Address ranges: 18000153c-180001574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFinish_0(void)

{
  undefined *puVar1;
  
                    /* 0x153c  35  _grFinish@0
                       0x153c  135  grFinish */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x38))();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0xa8))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

