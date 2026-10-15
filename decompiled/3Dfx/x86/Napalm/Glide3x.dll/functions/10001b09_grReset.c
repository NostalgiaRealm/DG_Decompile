/*
 * grReset at 10001b09
 * bool __stdcall grReset(undefined4 param_1)
 * Address ranges: 10001b09-10001b3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grReset,4
 */

/* __stdcall grReset,4 */

bool grReset(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  
                    /* 0x1b09  70  _grReset@4 */
  puVar3 = FUN_10005411();
  bVar4 = false;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    cVar2 = (**(code **)(**(int **)(puVar3 + 0xc) + 0x118))(param_1);
    bVar4 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar4;
}

