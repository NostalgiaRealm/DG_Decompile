/*
 * grAADrawTriangle at 100013c5
 * undefined __stdcall grAADrawTriangle(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100013c5-10001410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawTriangle,24
 */

/* __stdcall grAADrawTriangle,24 */

void grAADrawTriangle(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x13c5  1  _grAADrawTriangle@24 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000732c(*(int *)(puVar2 + 0xc));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x11c))
              ((*(int **)(puVar2 + 0xc))[0xa5],param_1,param_2,param_3,param_4,param_5,param_6);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

