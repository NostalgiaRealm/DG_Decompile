/*
 * grHints at 10002115
 * undefined __stdcall grHints(uint param_1, uint param_2)
 * Address ranges: 10002115-10002168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grHints,8
 */

/* __stdcall grHints,8 */

void grHints(uint param_1,uint param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x2115  49  _grHints@8 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < 7) {
      if (param_2 != *(byte *)((int)*(int **)(puVar2 + 0xc) + param_1 + 0x13a)) {
        (**(code **)(**(int **)(puVar2 + 0xc) + 0xf8))(param_1,param_2);
        *(char *)(*(int *)(puVar2 + 0xc) + 0x13a + param_1) = (char)param_2;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

