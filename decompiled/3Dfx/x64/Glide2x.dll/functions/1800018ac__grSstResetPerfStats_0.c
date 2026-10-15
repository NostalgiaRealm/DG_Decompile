/*
 * _grSstResetPerfStats@0 at 1800018ac
 * undefined __fastcall _grSstResetPerfStats@0(void)
 * Address ranges: 1800018ac-1800018da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstResetPerfStats_0(void)

{
  undefined *puVar1;
  
                    /* 0x18ac  73  _grSstResetPerfStats@0
                       0x18ac  230  grSstResetPerfStats */
  puVar1 = FUN_180015044();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x1e0))();
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

