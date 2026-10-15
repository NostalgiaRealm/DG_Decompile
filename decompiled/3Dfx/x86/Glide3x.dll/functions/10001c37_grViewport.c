/*
 * grViewport at 10001c37
 * undefined __stdcall grViewport(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10001c37-10001c6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grViewport,16
 */

/* __stdcall grViewport,16 */

void grViewport(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1c37  93  _grViewport@16 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x130))(param_1,param_2,param_3,param_4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

