/*
 * grGammaCorrectionValue at 10001bde
 * undefined __stdcall grGammaCorrectionValue(void)
 * Address ranges: 10001bde-10001c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGammaCorrectionValue,4
 */

/* __stdcall grGammaCorrectionValue,4 */

void grGammaCorrectionValue(void)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x1bde  42  _grGammaCorrectionValue@4 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_10019df7((undefined4 *)(*(int *)(puVar2 + 0xc) + 0x1158));
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x30))(*(int **)(puVar2 + 0xc) + 0x456);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

