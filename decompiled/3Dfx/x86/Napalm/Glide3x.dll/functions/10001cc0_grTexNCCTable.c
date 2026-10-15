/*
 * grTexNCCTable at 10001cc0
 * undefined __stdcall grTexNCCTable(undefined4 param_1)
 * Address ranges: 10001cc0-10001d1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexNCCTable,4
 */

/* __stdcall grTexNCCTable,4 */

void grTexNCCTable(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x1cc0  109  _grTexNCCTable@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797)) {
      do {
        (**(code **)(**(int **)(puVar2 + 0xc) + 0x154))(iVar3,param_1);
        *(char *)(iVar3 + 0x15a + *(int *)(puVar2 + 0xc)) = (char)param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797));
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

