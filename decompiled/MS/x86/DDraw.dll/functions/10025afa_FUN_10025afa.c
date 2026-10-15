/*
 * FUN_10025afa at 10025afa
 * int __thiscall FUN_10025afa(void * this, int param_1)
 * Address ranges: 10025afa-10025c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10025afa(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  this_00 = (int *)((int)this + 0x44);
  iVar3 = FUN_1002356c(this_00,param_1);
  bVar6 = false;
  iVar5 = 0;
  iVar1 = *(int *)(iVar3 + 0x18);
  if ((*(char *)((int)this + 0x4b) == '\0') && (iVar3 != 0)) {
    piVar2 = *(int **)(iVar3 + 0x10);
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    iVar5 = iVar5 + -1;
    FUN_10022ecc(this_00);
    if ((iVar5 == 0) && (*(char *)((int)this + 0x4a) == '\0')) {
      FUN_1002481e(iVar3,*(undefined4 **)(iVar3 + 0x18));
      *(undefined4 *)(iVar3 + 0x18) = 0;
    }
    iVar3 = FUN_10023519((int)this_00);
    bVar6 = iVar3 == 0;
    if (iVar3 == 0) {
      *(undefined1 *)((int)this + 0x4b) = 1;
    }
    *this_00 = 0;
    if (iVar5 != 0) goto LAB_10025c11;
  }
  uVar4 = 0;
  if (*(int *)((int)this + 300) != 0) {
    do {
      iVar3 = *(int *)(*(int *)((int)this + 0x128) + uVar4 * 4);
      if (*(int *)(iVar3 + 0x100) == iVar1) {
        *(undefined4 *)(iVar3 + 0x100) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 300));
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x138) != 0) {
    do {
      iVar3 = *(int *)(*(int *)((int)this + 0x134) + uVar4 * 4);
      if (*(int *)(iVar3 + 4) == iVar1) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0x138));
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x144) != 0) {
    do {
      iVar3 = *(int *)(*(int *)((int)this + 0x140) + uVar4 * 4);
      if (*(int *)(iVar3 + 0x44) == iVar1) {
        *(undefined4 *)(iVar3 + 0x44) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0x144));
  }
LAB_10025c11:
  if (((bVar6) && ((**(code **)(*(int *)this + 0x18))(), DAT_1006c23c == 0)) &&
     (DAT_1006c215 == '\0')) {
    FUN_10022794();
  }
  return iVar5;
}

