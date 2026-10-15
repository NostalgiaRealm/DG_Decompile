/*
 * grAADrawPoint at 1000136f
 * undefined __stdcall grAADrawPoint(undefined4 param_1)
 * Address ranges: 1000136f-10001399
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawPoint,4
 */

/* __stdcall grAADrawPoint,4 */

void grAADrawPoint(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x136f  4  _grAADrawPoint@4 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x110))(param_1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

