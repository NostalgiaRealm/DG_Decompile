/*
 * grAlphaTestReferenceValue at 1000186a
 * undefined __stdcall grAlphaTestReferenceValue(undefined4 param_1)
 * Address ranges: 1000186a-100018ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAlphaTestReferenceValue,4
 */

/* __stdcall grAlphaTestReferenceValue,4 */

void grAlphaTestReferenceValue(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x186a  12  _grAlphaTestReferenceValue@4 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((char)param_1 != *(char *)((int)*(int **)(puVar2 + 0xc) + 0x105)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0xa0))(param_1);
      *(char *)(*(int *)(puVar2 + 0xc) + 0x105) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

