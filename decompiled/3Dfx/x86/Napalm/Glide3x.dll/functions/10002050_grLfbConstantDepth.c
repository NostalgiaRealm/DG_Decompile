/*
 * grLfbConstantDepth at 10002050
 * undefined __stdcall grLfbConstantDepth(short param_1)
 * Address ranges: 10002050-10002092
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbConstantDepth,4
 */

/* __stdcall grLfbConstantDepth,4 */

void grLfbConstantDepth(short param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x2050  59  _grLfbConstantDepth@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(short *)((int)*(int **)(puVar2 + 0xc) + 0x152)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x78))(param_1);
      *(short *)(*(int *)(puVar2 + 0xc) + 0x152) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

