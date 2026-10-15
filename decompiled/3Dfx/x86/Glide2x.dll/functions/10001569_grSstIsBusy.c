/*
 * grSstIsBusy at 10001569
 * undefined1 __stdcall grSstIsBusy(void)
 * Address ranges: 10001569-1000158d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstIsBusy,0
 */

/* __stdcall grSstIsBusy,0 */

undefined1 grSstIsBusy(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined *puVar3;
  
                    /* 0x1569  66  _grSstIsBusy@0 */
  puVar3 = FUN_10012760();
  uVar2 = 0;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar2 = (**(code **)(**(int **)(puVar3 + 0xc) + 0x54))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return uVar2;
}

