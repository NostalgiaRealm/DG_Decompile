/*
 * grSstStatus at 1000163e
 * undefined4 __stdcall grSstStatus(void)
 * Address ranges: 1000163e-10001661
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstStatus,0
 */

/* __stdcall grSstStatus,0 */

undefined4 grSstStatus(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
                    /* 0x163e  81  _grSstStatus@0 */
  puVar2 = FUN_10012ab2();
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

