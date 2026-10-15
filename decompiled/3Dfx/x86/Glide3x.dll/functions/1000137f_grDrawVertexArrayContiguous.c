/*
 * grDrawVertexArrayContiguous at 1000137f
 * undefined __stdcall grDrawVertexArrayContiguous(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1000137f-100013c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawVertexArrayContiguous,16
 */

/* __stdcall grDrawVertexArrayContiguous,16 */

void grDrawVertexArrayContiguous
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x137f  32  _grDrawVertexArrayContiguous@16 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_1000732c(*(int *)(puVar2 + 0xc));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x118))
              ((*(int **)(puVar2 + 0xc))[0xa5],param_1,param_2,param_3,param_4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

