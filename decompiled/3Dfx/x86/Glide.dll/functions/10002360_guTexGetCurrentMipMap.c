/*
 * guTexGetCurrentMipMap at 10002360
 * undefined4 __stdcall guTexGetCurrentMipMap(int param_1)
 * Address ranges: 10002360-1000239d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexGetCurrentMipMap,4
 */

/* __stdcall guTexGetCurrentMipMap,4 */

undefined4 guTexGetCurrentMipMap(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
                    /* 0x2360  135  _guTexGetCurrentMipMap@4 */
  puVar2 = FUN_10012ab2();
  uVar3 = 0xffffffff;
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((*(int *)(puVar2 + 0x5c) != 0) && (param_1 < *(int *)(*(int *)(puVar2 + 0x1c) + 0x797))) {
      uVar3 = *(undefined4 *)(puVar2 + param_1 * 4 + 0x70);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return uVar3;
}

