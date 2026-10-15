/*
 * _grDisableAllEffects@0 at 180001db0
 * undefined __fastcall _grDisableAllEffects@0(void)
 * Address ranges: 180001db0-180001e17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDisableAllEffects_0(void)

{
  undefined *puVar1;
  
                    /* 0x1db0  31  _grDisableAllEffects@0
                       0x1db0  192  grDisableAllEffects */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    FUN_180016b64((longlong)puVar1,4,0,4,0);
    FUN_180016c20((longlong)puVar1,7);
    FUN_180016c78((longlong)puVar1,0);
    FUN_180016acc((longlong)puVar1,0);
    FUN_180017020((longlong)puVar1,0);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

