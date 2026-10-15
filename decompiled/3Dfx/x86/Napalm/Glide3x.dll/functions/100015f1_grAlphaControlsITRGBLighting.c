/*
 * grAlphaControlsITRGBLighting at 100015f1
 * undefined __stdcall grAlphaControlsITRGBLighting(int param_1)
 * Address ranges: 100015f1-10001633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAlphaControlsITRGBLighting,4
 */

/* __stdcall grAlphaControlsITRGBLighting,4 */

void grAlphaControlsITRGBLighting(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x15f1  6  _grAlphaControlsITRGBLighting@4 */
  puVar2 = FUN_10005411();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 != *(int *)((int)*(int **)(puVar2 + 0xc) + 0x129)) {
      (**(code **)(**(int **)(puVar2 + 0xc) + 0xb0))(param_1);
      *(int *)(*(int *)(puVar2 + 0xc) + 0x129) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

