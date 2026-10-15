/*
 * FUN_1000445f at 1000445f
 * undefined __thiscall FUN_1000445f(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 1000445f-10004557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000445f(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *this_00;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = FUN_1000419c(param_3,param_4,param_5,param_6);
    if ((char)uVar3 != '\0') {
      bVar2 = FUN_10004df8(this_00,3);
      if (bVar2) {
        iVar5 = *(int *)((int)this + 0xc);
        iVar4 = FUN_100041c6(param_7,param_3 + 1,param_4,param_5,param_6);
        iVar4 = iVar4 + *(int *)(param_1 * 0x4e8 + 0x31c + iVar5) + param_2;
        iVar5 = FUN_100041c6(param_7,param_3,param_3,param_5,param_6);
        uVar3 = FUN_1000415b(param_3,param_5);
        (**(code **)(**(int **)((int)this + 0xc) + 0x68))
                  (param_1,iVar4,iVar4 + iVar5,uVar3 >> 0x10,uVar3 & 0xffff,param_6);
        *(uint *)(*(int *)((int)this + 0xc) + 0x16a) = uVar3 >> 0x10;
        *(uint *)(*(int *)((int)this + 0xc) + 0x16e) = uVar3 & 0xffff;
        *(int *)(*(int *)((int)this + 0xc) + 0x172) = iVar4;
        *(int *)(*(int *)((int)this + 0xc) + 0x176) = iVar4 + iVar5;
        *(uint *)(*(int *)((int)this + 0xc) + 0x17a) = param_6;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

