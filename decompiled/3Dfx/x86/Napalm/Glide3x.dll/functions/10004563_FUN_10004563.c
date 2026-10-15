/*
 * FUN_10004563 at 10004563
 * undefined __thiscall FUN_10004563(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 10004563-100046a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10004563(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint yBottom;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,3);
    if ((bVar2) && (uVar3 = FUN_1000439e(this,param_3,param_4,param_5,param_6), (char)uVar3 != '\0')
       ) {
      iVar5 = *(int *)((int)this + 0xc);
      iVar4 = FUN_1000440d(param_7,param_3 + 1,param_4,param_5,param_6);
      iVar4 = iVar4 + *(int *)(param_1 * 0x4e8 + 0x458 + iVar5) + param_2;
      iVar5 = FUN_1000440d(param_7,param_3,param_3,param_5,param_6);
      uVar3 = FUN_1000435d(param_3,param_5);
      yBottom = uVar3 & 0xffff;
      uVar3 = uVar3 >> 0x10;
      (**(code **)(**(int **)((int)this + 0xc) + 0x60))
                (param_1,iVar4,iVar4 + iVar5,uVar3,yBottom,param_6);
      *(uint *)(*(int *)((int)this + 0xc) + 0x1b9) = uVar3;
      *(uint *)(*(int *)((int)this + 0xc) + 0x1bd) = yBottom;
      *(int *)(*(int *)((int)this + 0xc) + 0x1c1) = iVar4;
      *(int *)(*(int *)((int)this + 0xc) + 0x1c5) = iVar4 + iVar5;
      *(uint *)(*(int *)((int)this + 0xc) + 0x1c9) = param_6;
      iVar5 = *(int *)((int)this + 0xc);
      if ((*(char *)(iVar5 + 0xe4) == '\x06') && (*(char *)(iVar5 + 0x1f1) != '\0')) {
        SetRect((LPRECT)(iVar5 + 0x12d),0,0,uVar3,yBottom);
        (**(code **)(**(int **)((int)this + 0xc) + 0xd0))((int)*(int **)((int)this + 0xc) + 0x12d);
      }
      else {
        *(char *)(iVar5 + 0x1f1) = '\0';
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

