/*
 * FUN_100ca319 at 100ca319
 * int __thiscall FUN_100ca319(void * this, undefined4 param_1)
 * Address ranges: 100ca319-100ca39e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100ca319(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    if (*(int *)(iVar2 * 0xc + iVar3) != 0) {
      iVar2 = *(int *)(iVar2 * 0xc + 8 + iVar3);
    }
    if (iVar2 != -1) {
      *(undefined4 *)(iVar2 * 0xc + iVar3) = param_1;
      *(int *)((int)this + 0x10) = iVar2;
      return iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 4);
  local_10 = param_1;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  uVar1 = FUN_100c1960(this,&local_10);
  iVar3 = -1;
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x10) != -1) {
      *(int *)(*(int *)((int)this + 0x10) * 0xc + 8 + *(int *)this) = iVar2;
      *(undefined4 *)(iVar2 * 0xc + 4 + *(int *)this) = *(undefined4 *)((int)this + 0x10);
    }
    *(int *)((int)this + 0x10) = iVar2;
    iVar3 = iVar2;
    if (*(int *)((int)this + 0xc) == -1) {
      *(int *)((int)this + 0xc) = iVar2;
    }
  }
  return iVar3;
}

