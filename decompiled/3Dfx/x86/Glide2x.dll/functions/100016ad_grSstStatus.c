/*
 * grSstStatus at 100016ad
 * undefined4 __stdcall grSstStatus(void)
 * Address ranges: 100016ad-100016d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstStatus,0
 */

/* __stdcall grSstStatus,0 */

undefined4 grSstStatus(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
                    /* 0x16ad  75  _grSstStatus@0 */
  puVar2 = FUN_10012760();
  uVar3 = 0;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = (**(code **)(**(int **)(puVar2 + 0xc) + 0x4c))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return uVar3;
}

