/*
 * grAuxBufferExt at 10001465
 * undefined __stdcall grAuxBufferExt(undefined4 param_1)
 * Address ranges: 10001465-100014a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAuxBufferExt,4
 */

/* __stdcall grAuxBufferExt,4 */

void grAuxBufferExt(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  undefined *this;
  
                    /* 0x1465  9  _grAuxBufferExt@4 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,3);
    if (bVar2) {
      (**(code **)(**(int **)(this + 0xc) + 0x5c))(param_1);
      *(char *)(*(int *)(this + 0xc) + 0xe5) = (char)param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

