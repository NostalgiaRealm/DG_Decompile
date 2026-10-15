/*
 * grTexChromaModeExt at 10001723
 * undefined __stdcall grTexChromaModeExt(int param_1, int param_2)
 * Address ranges: 10001723-10001784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexChromaModeExt,8
 */

/* __stdcall grTexChromaModeExt,8 */

void grTexChromaModeExt(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined *this;
  
                    /* 0x1723  91  _grTexChromaModeExt@8 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,2);
    if (bVar2) {
      if (param_2 != *(int *)(param_1 * 0x9d + 0x261 + (int)*(int **)(this + 0xc))) {
        (**(code **)(**(int **)(this + 0xc) + 0x134))(param_1,param_2);
        *(int *)(param_1 * 0x9d + 0x261 + *(int *)(this + 0xc)) = param_2;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

