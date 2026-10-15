/*
 * grReset at 10001b06
 * bool __stdcall grReset(undefined4 param_1)
 * Address ranges: 10001b06-10001b3a
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
  
                    /* 0x1b06  61  _grReset@4 */
  puVar3 = FUN_1000504c();
  bVar4 = false;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    cVar2 = (**(code **)(**(int **)(puVar3 + 0xc) + 0x124))(param_1);
    bVar4 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar4;
}

