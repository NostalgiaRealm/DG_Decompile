/*
 * grDepthRange at 10001b9d
 * undefined __stdcall grDepthRange(undefined4 param_1, undefined4 param_2)
 * Address ranges: 10001b9d-10001bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDepthRange,8
 */

/* __stdcall grDepthRange,8 */

void grDepthRange(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1b9d  30  _grDepthRange@8 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x120))(param_1,param_2);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

