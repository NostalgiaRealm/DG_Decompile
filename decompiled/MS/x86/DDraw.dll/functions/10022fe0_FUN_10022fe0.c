/*
 * FUN_10022fe0 at 10022fe0
 * int __stdcall FUN_10022fe0(int * param_1)
 * Address ranges: 10022fe0-1002305c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10022fe0(int *param_1)

{
  int *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this = param_1 + 1;
  if (*(char *)((int)param_1 + 0xb) == '\0') {
    iVar2 = FUN_1002356c(this,0x10062560);
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0x10);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar3 = iVar3 + -1;
      FUN_10022ecc(this);
      if ((iVar3 == 0) && (*(char *)((int)param_1 + 10) == '\0')) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
      }
      iVar2 = FUN_10023519((int)this);
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_1 + 0xb) = 1;
      }
      *this = 0;
      if (iVar2 == 0) {
        FUN_10022f4a((int)param_1);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 0x24))(1);
        }
      }
    }
  }
  return iVar3;
}

