/*
 * grTexNCCTable at 10001d23
 * undefined __stdcall grTexNCCTable(undefined4 param_1)
 * Address ranges: 10001d23-10001d7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexNCCTable,4
 */

/* __stdcall grTexNCCTable,4 */

void grTexNCCTable(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x1d23  87  _grTexNCCTable@4 */
  puVar2 = FUN_1000504c();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797)) {
      do {
        (**(code **)(**(int **)(puVar2 + 0xc) + 0x160))(iVar3,param_1);
        *(char *)(iVar3 + 0x137 + *(int *)(puVar2 + 0xc)) = (char)param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797));
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

