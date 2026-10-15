/*
 * grBufferClearExt at 10002523
 * undefined __stdcall grBufferClearExt(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10002523-10002553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferClearExt,16
 */

/* __stdcall grBufferClearExt,16 */

void grBufferClearExt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x2523  11  _grBufferClearExt@16 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x68))(param_1,param_2,param_3,param_4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

