/*
 * grDrawLine at 1000128b
 * undefined __stdcall grDrawLine(undefined4 param_1, undefined4 param_2)
 * Address ranges: 1000128b-100012b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawLine,8
 */

/* __stdcall grDrawLine,8 */

void grDrawLine(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x128b  31  _grDrawLine@8 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x100))(param_1,param_2);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

