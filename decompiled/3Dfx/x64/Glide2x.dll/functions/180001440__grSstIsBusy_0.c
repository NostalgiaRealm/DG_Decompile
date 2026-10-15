/*
 * _grSstIsBusy@0 at 180001440
 * undefined1 __fastcall _grSstIsBusy@0(void)
 * Address ranges: 180001440-180001472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 _grSstIsBusy_0(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  
                    /* 0x1440  68  _grSstIsBusy@0
                       0x1440  225  grSstIsBusy */
  puVar2 = FUN_180015044();
  uVar1 = 0;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    uVar1 = (**(code **)(**(longlong **)(puVar2 + 0x18) + 0xa8))();
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return uVar1;
}

