/*
 * _grDisableAllEffects@0 at 180001d1c
 * undefined __fastcall _grDisableAllEffects@0(void)
 * Address ranges: 180001d1c-180001d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisableAllEffects_0(void)

{
  undefined *puVar1;
  
                    /* 0x1d1c  26  _grDisableAllEffects@0
                       0x1d1c  126  grDisableAllEffects */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    FUN_1800081a8((longlong)puVar1,4,0,4,0);
    FUN_180008264((longlong)puVar1,7);
    FUN_1800082bc((longlong)puVar1,0);
    FUN_180008110((longlong)puVar1,0);
    FUN_180008670((longlong)puVar1,0);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

