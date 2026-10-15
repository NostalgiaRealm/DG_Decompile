/*
 * grTexDownloadTable at 10001edd
 * undefined __stdcall grTexDownloadTable(int param_1, undefined4 * param_2)
 * Address ranges: 10001edd-10001f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadTable,8
 */

/* __stdcall grTexDownloadTable,8 */

void grTexDownloadTable(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined *this;
  int iVar2;
  
                    /* 0x1edd  78  _grTexDownloadTable@8 */
  this = FUN_1000504c();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = 0;
    if (0 < *(int *)(*(int *)(this + 0x1c) + 0x797)) {
      do {
        FUN_10006eed(this,iVar2,param_1,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(int *)(this + 0x1c) + 0x797));
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

