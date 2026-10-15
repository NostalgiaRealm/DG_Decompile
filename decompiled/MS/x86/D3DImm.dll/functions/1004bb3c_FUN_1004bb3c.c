/*
 * FUN_1004bb3c at 1004bb3c
 * int __thiscall FUN_1004bb3c(void * this, int param_1)
 * Address ranges: 1004bb3c-1004bbb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004bb3c(void *this,int param_1)

{
  int *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  this_00 = (int *)((int)this + 0x20);
  if ((*(char *)((int)this + 0x27) == '\0') && (iVar2 = FUN_10042a6d(this_00,param_1), iVar2 != 0))
  {
    piVar1 = *(int **)(iVar2 + 0x10);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar3 = iVar3 + -1;
    FUN_1003d453(this_00);
    if ((iVar3 == 0) && (*(char *)((int)this + 0x26) == '\0')) {
      FUN_1004b9bd(iVar2,*(undefined4 **)(iVar2 + 0x18));
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    iVar2 = FUN_10042a1a((int)this_00);
    if (iVar2 == 0) {
      *(undefined1 *)((int)this + 0x27) = 1;
    }
    *this_00 = 0;
    if (iVar2 == 0) {
      FUN_1004bbb3(this);
    }
  }
  return iVar3;
}

