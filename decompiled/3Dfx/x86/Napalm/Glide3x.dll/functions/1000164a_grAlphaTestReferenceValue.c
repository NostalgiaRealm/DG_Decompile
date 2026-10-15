/*
 * grAlphaTestReferenceValue at 1000164a
 * undefined __stdcall grAlphaTestReferenceValue(undefined4 param_1)
 * Address ranges: 1000164a-1000168c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAlphaTestReferenceValue,4
 */

/* __stdcall grAlphaTestReferenceValue,4 */

void grAlphaTestReferenceValue(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x164a  8  _grAlphaTestReferenceValue@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((char)param_1 != (char)(*(int **)(puVar2 + 0xc))[0x4a]) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0xac))(param_1);
      *(char *)(*(int *)(puVar2 + 0xc) + 0x128) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

