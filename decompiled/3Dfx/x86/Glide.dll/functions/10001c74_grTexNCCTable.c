/*
 * grTexNCCTable at 10001c74
 * undefined __stdcall grTexNCCTable(int param_1, undefined4 param_2)
 * Address ranges: 10001c74-10001cc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexNCCTable,8
 */

/* __stdcall grTexNCCTable,8 */

void grTexNCCTable(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1c74  102  _grTexNCCTable@8 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x140))(param_1,param_2);
      *(char *)(*(int *)(puVar2 + 0xc) + 0x137 + param_1) = (char)param_2;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

