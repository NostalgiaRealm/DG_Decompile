/*
 * _grResetTriStats@0 at 1800018dc
 * undefined __fastcall _grResetTriStats@0(void)
 * Address ranges: 1800018dc-18000190a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grResetTriStats_0(void)

{
  undefined *puVar1;
  
                    /* 0x18dc  61  _grResetTriStats@0
                       0x18dc  218  grResetTriStats */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1e8))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

