/*
 * _grSstVideoLine@0 at 1800013d4
 * undefined __fastcall _grSstVideoLine@0(void)
 * Address ranges: 1800013d4-180001403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstVideoLine_0(void)

{
  undefined *puVar1;
  
                    /* 0x13d4  80  _grSstVideoLine@0
                       0x13d4  237  grSstVideoLine */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x90))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

