/*
 * grDrawPoint at 10001260
 * undefined __stdcall grDrawPoint(undefined4 param_1)
 * Address ranges: 10001260-1000129c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawPoint,4
 */

/* __stdcall grDrawPoint,4 */

void grDrawPoint(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1260  29  _grDrawPoint@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000732c(*(int *)(puVar2 + 0xc));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x108))((*(int **)(puVar2 + 0xc))[0xa5],param_1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

