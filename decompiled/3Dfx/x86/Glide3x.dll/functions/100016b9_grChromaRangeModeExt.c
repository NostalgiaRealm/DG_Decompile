/*
 * grChromaRangeModeExt at 100016b9
 * undefined __stdcall grChromaRangeModeExt(int param_1)
 * Address ranges: 100016b9-10001708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grChromaRangeModeExt,4
 */

/* __stdcall grChromaRangeModeExt,4 */

void grChromaRangeModeExt(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined *this;
  
                    /* 0x16b9  11  _grChromaRangeModeExt@4 */
  this = FUN_1000504c();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_10004df8(this,1);
    if ((bVar2) && (param_1 != *(int *)((int)*(int **)(this + 0xc) + 0x142))) {
      (**(code **)(**(int **)(this + 0xc) + 0x138))(param_1);
      *(int *)(*(int *)(this + 0xc) + 0x142) = param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

