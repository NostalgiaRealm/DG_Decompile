/*
 * FUN_10014f1c at 10014f1c
 * undefined __thiscall FUN_10014f1c(void * this, uint param_1, uint param_2, int * param_3)
 * Address ranges: 10014f1c-10014fea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014f1c(void *this,uint param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)((int)this + 0x5c);
    if (((iVar2 != 0) && (param_1 != 0xffffffff)) && (param_1 < *(uint *)((int)this + 0x60))) {
      iVar5 = param_1 * 0xc4;
      iVar3 = *(int *)(iVar5 + 0x44 + iVar2);
      if (iVar3 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) {
        if (((param_1 == *(uint *)((int)this + 0x70)) || (param_1 == *(uint *)((int)this + 0x74)))
           || (param_1 == *(uint *)((int)this + 0x78))) {
          FUN_1001290c((int)this);
        }
        iVar4 = FUN_10014b19(*(uint *)(iVar5 + 0x48 + iVar2),param_2,param_2,
                             *(int *)(iVar5 + 0x10 + iVar2),*(uint *)(iVar5 + 0x18 + iVar2));
        FUN_100142fa(this,iVar3,*(uint *)(iVar5 + 0x4c + iVar2),param_2,
                     *(uint *)(iVar5 + 0x40 + iVar2),*(uint *)(iVar5 + 0x10 + iVar2),
                     *(uint *)(iVar5 + 0x18 + iVar2),*(uint *)(iVar5 + 0x48 + iVar2),
                     (undefined4 *)*param_3);
        *param_3 = *param_3 + iVar4;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

