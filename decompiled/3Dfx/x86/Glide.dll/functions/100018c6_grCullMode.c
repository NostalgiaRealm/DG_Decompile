/*
 * grCullMode at 100018c6
 * undefined __stdcall grCullMode(uint param_1)
 * Address ranges: 100018c6-10001923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grCullMode,4
 */

/* __stdcall grCullMode,4 */

void grCullMode(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  
                    /* 0x18c6  24  _grCullMode@4 */
  puVar3 = FUN_10012ab2();
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    piVar2 = *(int **)(puVar3 + 0xc);
    if (param_1 != *(byte *)((int)piVar2 + 0x102)) {
      if ((param_1 != 0) && (*(char *)((int)piVar2 + 0x11a) == '\x01')) {
        param_1 = (param_1 == 1) + 1;
      }
      (**(code **)(*piVar2 + 0xc4))(param_1);
      *(char *)(*(int *)(puVar3 + 0xc) + 0x102) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

