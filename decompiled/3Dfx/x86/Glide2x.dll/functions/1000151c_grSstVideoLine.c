/*
 * grSstVideoLine at 1000151c
 * undefined4 __stdcall grSstVideoLine(void)
 * Address ranges: 1000151c-1000153f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstVideoLine,0
 */

/* __stdcall grSstVideoLine,0 */

undefined4 grSstVideoLine(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
                    /* 0x151c  78  _grSstVideoLine@0 */
  puVar2 = FUN_10012760();
  uVar3 = 0;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = (**(code **)(**(int **)(puVar2 + 0xc) + 0x48))();
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return uVar3;
}

