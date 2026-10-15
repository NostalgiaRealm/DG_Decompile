/*
 * grDrawLine at 1000129d
 * undefined __stdcall grDrawLine(undefined4 param_1, undefined4 param_2)
 * Address ranges: 1000129d-100012dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawLine,8
 */

/* __stdcall grDrawLine,8 */

void grDrawLine(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x129d  35  _grDrawLine@8 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000786b(*(int *)(puVar2 + 0xc));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x100))((*(int **)(puVar2 + 0xc))[0xf4],param_1,param_2)
    ;
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

