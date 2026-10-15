/*
 * FUN_1004b4a6 at 1004b4a6
 * int __thiscall FUN_1004b4a6(void * this, int param_1)
 * Address ranges: 1004b4a6-1004b51c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004b4a6(void *this,int param_1)

{
  int *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this_00 = (int *)((int)this + 4);
  if ((*(char *)((int)this + 0xb) == '\0') && (iVar2 = FUN_10042a6d(this_00,param_1), iVar2 != 0)) {
    piVar1 = *(int **)(iVar2 + 0x10);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    FUN_1003d453(this_00);
    if ((iVar3 == 0) && (*(char *)((int)this + 10) == '\0')) {
      FUN_1004b3d7(iVar2,*(undefined4 **)(iVar2 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    iVar2 = FUN_10042a1a((int)this_00);
    if (iVar2 == 0) {
      *(undefined1 *)((int)this + 0xb) = 1;
    }
    *this_00 = 0;
    if (iVar2 == 0) {
      FUN_1004b51d(this);
    }
  }
  return iVar3;
}

