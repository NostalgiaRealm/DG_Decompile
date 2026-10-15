/*
 * grTexMultibase at 10001f07
 * undefined __stdcall grTexMultibase(int param_1, int param_2)
 * Address ranges: 10001f07-10001f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexMultibase,8
 */

/* __stdcall grTexMultibase,8 */

void grTexMultibase(int param_1,int param_2)

{
  int *piVar1;
  undefined *this;
  
                    /* 0x1f07  107  _grTexMultibase@8 */
  this = FUN_10005411();
  if (this[0x3c] != '\0') {
    piVar1 = (int *)(this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(int *)(this + 0x1c) + 0x797)) {
      if ((bool)*(char *)(param_1 * 0x9d + 0x28e + *(int *)(this + 0xc)) != (param_2 != 0)) {
        *(bool *)(param_1 * 0x9d + 0x28e + *(int *)(this + 0xc)) = param_2 != 0;
        FUN_100053d5(this,param_1,'\x01');
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

