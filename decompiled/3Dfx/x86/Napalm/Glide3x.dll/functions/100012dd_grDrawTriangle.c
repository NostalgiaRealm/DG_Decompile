/*
 * grDrawTriangle at 100012dd
 * undefined __stdcall grDrawTriangle(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100012dd-1000131f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawTriangle,12
 */

/* __stdcall grDrawTriangle,12 */

void grDrawTriangle(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x12dd  37  _grDrawTriangle@12 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000786b(*(int *)(puVar2 + 0xc));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x104))
              ((*(int **)(puVar2 + 0xc))[0xf4],param_1,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

