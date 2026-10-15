/*
 * grViewport at 10001bd4
 * undefined __stdcall grViewport(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10001bd4-10001c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grViewport,16
 */

/* __stdcall grViewport,16 */

void grViewport(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1bd4  115  _grViewport@16 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x124))(param_1,param_2,param_3,param_4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

