/*
 * FUN_1004eecc at 1004eecc
 * int __thiscall FUN_1004eecc(void * this, undefined4 param_1)
 * Address ranges: 1004eecc-1004ef9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004eecc(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((int)this + 0x10);
  if (iVar6 != -1) {
    iVar1 = *(int *)this;
    if (*(int *)(iVar6 * 0xc + iVar1) != 0) {
      iVar6 = *(int *)(iVar6 * 0xc + 8 + iVar1);
    }
    if (iVar6 != -1) {
      *(undefined4 *)(iVar6 * 0xc + iVar1) = param_1;
      *(int *)((int)this + 0x10) = iVar6;
      return iVar6;
    }
  }
  iVar6 = *(int *)((int)this + 4);
  iVar1 = *(int *)((int)this + 8);
  if (iVar6 == iVar1) {
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = iVar1 * 2;
    }
    SVar3 = (SIZE_T)((ulonglong)uVar2 * 0xc);
    if ((int)((ulonglong)uVar2 * 0xc >> 0x20) != 0) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_1004f643(SVar3);
    if (puVar4 == (undefined4 *)0x0) {
      return -1;
    }
    FUN_1004fd20(puVar4,*(undefined4 **)this,*(int *)((int)this + 8) * 0xc);
    thunk_FUN_1004f626(*(LPVOID *)this);
    *(undefined4 **)this = puVar4;
    *(uint *)((int)this + 8) = uVar2;
  }
  iVar5 = *(int *)((int)this + 4) * 0xc;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar5 + iVar1) = param_1;
  *(undefined4 *)(iVar5 + 4 + iVar1) = 0xffffffff;
  *(undefined4 *)(iVar5 + 8 + iVar1) = 0xffffffff;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  if (*(int *)((int)this + 0x10) != -1) {
    *(int *)(*(int *)((int)this + 0x10) * 0xc + 8 + *(int *)this) = iVar6;
    *(undefined4 *)(iVar6 * 0xc + 4 + *(int *)this) = *(undefined4 *)((int)this + 0x10);
  }
  *(int *)((int)this + 0x10) = iVar6;
  if (*(int *)((int)this + 0xc) == -1) {
    *(int *)((int)this + 0xc) = iVar6;
  }
  return iVar6;
}

