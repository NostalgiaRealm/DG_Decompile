/*
 * grStencilMaskExt at 10002476
 * undefined __stdcall grStencilMaskExt(undefined4 param_1)
 * Address ranges: 10002476-100024c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grStencilMaskExt,4
 */

/* __stdcall grStencilMaskExt,4 */

void grStencilMaskExt(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  undefined *this;
  
                    /* 0x2476  80  _grStencilMaskExt@4 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,4);
    if (bVar2) {
      if ((char)param_1 != *(char *)((int)*(int **)(this + 0xc) + 0xf7)) {
        (**(code **)(**(int **)(this + 0xc) + 0x18c))(param_1);
        *(char *)(*(int *)(this + 0xc) + 0xf7) = (char)param_1;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

