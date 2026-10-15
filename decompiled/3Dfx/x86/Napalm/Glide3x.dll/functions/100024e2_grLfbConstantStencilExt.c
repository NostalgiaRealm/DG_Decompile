/*
 * grLfbConstantStencilExt at 100024e2
 * undefined __stdcall grLfbConstantStencilExt(void)
 * Address ranges: 100024e2-10002503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbConstantStencilExt,4
 */

/* __stdcall grLfbConstantStencilExt,4 */

void grLfbConstantStencilExt(void)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x24e2  60  _grLfbConstantStencilExt@4 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_100051b3(this,4);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

