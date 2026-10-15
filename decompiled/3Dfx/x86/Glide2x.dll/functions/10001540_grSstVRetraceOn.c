/*
 * grSstVRetraceOn at 10001540
 * bool __stdcall grSstVRetraceOn(void)
 * Address ranges: 10001540-10001568
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstVRetraceOn,0
 */

/* __stdcall grSstVRetraceOn,0 */

bool grSstVRetraceOn(void)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  
                    /* 0x1540  76  _grSstVRetraceOn@0 */
  puVar3 = FUN_10012760();
  bVar4 = false;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    cVar2 = (**(code **)(**(int **)(puVar3 + 0xc) + 0x44))();
    bVar4 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar4;
}

