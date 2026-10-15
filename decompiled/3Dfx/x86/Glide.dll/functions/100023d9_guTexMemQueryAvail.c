/*
 * guTexMemQueryAvail at 100023d9
 * int __stdcall guTexMemQueryAvail(int param_1)
 * Address ranges: 100023d9-1000241a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexMemQueryAvail,4
 */

/* __stdcall guTexMemQueryAvail,4 */

int guTexMemQueryAvail(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *this;
  int iVar3;
  
                    /* 0x23d9  137  _guTexMemQueryAvail@4 */
  this = FUN_10012ab2();
  iVar3 = 0;
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)(this + 0x1c) + 0x797)) {
      iVar2 = *(int *)(this + param_1 * 4 + 100);
      iVar3 = FUN_10014298(this,param_1);
      iVar3 = iVar3 - iVar2;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return iVar3;
}

