/*
 * FUN_100046a6 at 100046a6
 * undefined __thiscall FUN_100046a6(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 100046a6-100047a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100046a6(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = FUN_1000439e(this,param_3,param_4,param_5,param_6);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_100051b3(this,3);
      if (bVar2) {
        iVar5 = *(int *)((int)this + 0xc);
        iVar4 = FUN_1000440d(param_7,param_3 + 1,param_4,param_5,param_6);
        iVar4 = iVar4 + *(int *)(param_1 * 0x4e8 + 0x458 + iVar5) + param_2;
        iVar5 = FUN_1000440d(param_7,param_3,param_3,param_5,param_6);
        uVar3 = FUN_1000435d(param_3,param_5);
        (**(code **)(**(int **)((int)this + 0xc) + 100))
                  (param_1,iVar4,iVar4 + iVar5,uVar3 >> 0x10,uVar3 & 0xffff,param_6);
        *(uint *)(*(int *)((int)this + 0xc) + 0x1cd) = uVar3 >> 0x10;
        *(uint *)(*(int *)((int)this + 0xc) + 0x1d1) = uVar3 & 0xffff;
        *(int *)(*(int *)((int)this + 0xc) + 0x1d5) = iVar4;
        *(int *)(*(int *)((int)this + 0xc) + 0x1d9) = iVar4 + iVar5;
        *(uint *)(*(int *)((int)this + 0xc) + 0x1dd) = param_6;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

