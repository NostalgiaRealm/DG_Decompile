/*
 * grAlphaControlsITRGBLighting at 10001811
 * undefined __stdcall grAlphaControlsITRGBLighting(int param_1)
 * Address ranges: 10001811-10001853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAlphaControlsITRGBLighting,4
 */

/* __stdcall grAlphaControlsITRGBLighting,4 */

void grAlphaControlsITRGBLighting(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1811  10  _grAlphaControlsITRGBLighting@4 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)(puVar2 + 0xc) + 0x106)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0xa4))(param_1);
      *(int *)(*(int *)(puVar2 + 0xc) + 0x106) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

