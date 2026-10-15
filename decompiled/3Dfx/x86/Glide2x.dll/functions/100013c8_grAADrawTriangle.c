/*
 * grAADrawTriangle at 100013c8
 * undefined __stdcall grAADrawTriangle(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100013c8-10001401
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawTriangle,24
 */

/* __stdcall grAADrawTriangle,24 */

void grAADrawTriangle(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x13c8  7  _grAADrawTriangle@24 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x118))(param_1,param_2,param_3,param_4,param_5,param_6)
    ;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

