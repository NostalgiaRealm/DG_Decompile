/*
 * grCoordinateSpace at 10001bcd
 * undefined __stdcall grCoordinateSpace(int param_1)
 * Address ranges: 10001bcd-10001bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grCoordinateSpace,4
 */

/* __stdcall grCoordinateSpace,4 */

void grCoordinateSpace(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1bcd  18  _grCoordinateSpace@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x128))(param_1 != 0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

