/*
 * FUN_10015379 at 10015379
 * undefined __thiscall FUN_10015379(void * this, uint param_1)
 * Address ranges: 10015379-10015484
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015379(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)((int)this + 0x5c);
    if (((iVar2 != 0) && (param_1 != 0xffffffff)) && (param_1 < *(uint *)((int)this + 0x60))) {
      iVar4 = param_1 * 0xc4;
      iVar3 = *(int *)(iVar4 + 0x44 + iVar2);
      if (iVar3 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
        FUN_10012c5e((int)this);
        FUN_10014824(this,iVar3,0,*(undefined4 *)(iVar4 + 0x4c + iVar2),
                     *(uint *)(iVar4 + 0x48 + iVar2),*(uint *)(iVar4 + 0x3c + iVar2),
                     *(uint *)(iVar4 + 0x40 + iVar2),*(uint *)(iVar4 + 0x10 + iVar2),
                     *(uint *)(iVar4 + 0x18 + iVar2));
        if ((*(int *)(iVar4 + 0x18 + iVar2) == 1) || (*(int *)(iVar4 + 0x18 + iVar2) == 9)) {
          FUN_10014a86(this,iVar3,(uint)*(byte *)(*(int *)((int)this + 0xc) + 0x137 + iVar3),
                       (undefined4 *)(iVar4 + 0x54 + iVar2));
        }
        FUN_10014905(this,iVar3,*(uint *)(iVar4 + 0x28 + iVar2),*(uint *)(iVar4 + 0x2c + iVar2));
        FUN_10014a11(this,iVar3,*(uint *)(iVar4 + 0x24 + iVar2),*(uint *)(iVar4 + 0x20 + iVar2));
        FUN_10014da1(this,iVar3,*(uint *)(iVar4 + 0x1c + iVar2),*(int *)(iVar4 + 0x50 + iVar2));
        FUN_1001497a(this,iVar3);
        *(uint *)((int)this + iVar3 * 4 + 0x70) = param_1;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

