/*
 * _grAlphaTestReferenceValue@4 at 180001a2c
 * undefined __fastcall _grAlphaTestReferenceValue@4(char param_1)
 * Address ranges: 180001a2c-180001a7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestReferenceValue_4(char param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1a2c  14  _grAlphaTestReferenceValue@4
                       0x1a2c  171  grAlphaTestReferenceValue */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(char *)((longlong)plVar1 + 0x115)) {
      (**(code **)(*plVar1 + 0x140))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x115) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

