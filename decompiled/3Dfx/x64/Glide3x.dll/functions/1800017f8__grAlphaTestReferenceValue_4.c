/*
 * _grAlphaTestReferenceValue@4 at 1800017f8
 * undefined __fastcall _grAlphaTestReferenceValue@4(char param_1)
 * Address ranges: 1800017f8-18000184a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestReferenceValue_4(char param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x17f8  6  _grAlphaTestReferenceValue@4
                       0x17f8  106  grAlphaTestReferenceValue */
  puVar2 = FUN_1800069ac();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(char *)((longlong)plVar1 + 0x115)) {
      (**(code **)(*plVar1 + 0x160))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x115) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

