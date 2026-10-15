/*
 * guTexMemQueryAvail at 10002413
 * int __stdcall guTexMemQueryAvail(int param_1)
 * Address ranges: 10002413-10002454
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
  
                    /* 0x2413  133  _guTexMemQueryAvail@4 */
  this = FUN_10012760();
  iVar3 = 0;
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)(this + 0x1c) + 0x797)) {
      iVar2 = *(int *)(this + param_1 * 4 + 100);
      iVar3 = FUN_10013f0a(this,param_1);
      iVar3 = iVar3 - iVar2;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return iVar3;
}

