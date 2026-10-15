/*
 * grAADrawLine at 1000139a
 * undefined __stdcall grAADrawLine(undefined4 param_1, undefined4 param_2)
 * Address ranges: 1000139a-100013c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawLine,8
 */

/* __stdcall grAADrawLine,8 */

void grAADrawLine(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x139a  3  _grAADrawLine@8 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x114))(param_1,param_2);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

