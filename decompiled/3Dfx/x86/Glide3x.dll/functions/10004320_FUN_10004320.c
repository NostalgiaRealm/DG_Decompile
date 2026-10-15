/*
 * FUN_10004320 at 10004320
 * undefined __thiscall FUN_10004320(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 10004320-1000445e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10004320(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint yBottom;
  uint extraout_ECX;
  int extraout_EDX;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    bVar2 = FUN_10004df8(this,3);
    if ((bVar2) && (uVar3 = FUN_1000419c(param_3,param_4,param_5,param_6), (char)uVar3 != '\0')) {
      iVar5 = *(int *)((int)this + 0xc);
      iVar4 = FUN_100041c6(param_7,extraout_EDX + 1,param_4,param_5,extraout_ECX);
      iVar4 = iVar4 + *(int *)(param_1 * 0x4e8 + 0x31c + iVar5) + param_2;
      iVar5 = FUN_100041c6(param_7,param_3,param_3,param_5,param_6);
      uVar3 = FUN_1000415b(param_3,param_5);
      yBottom = uVar3 & 0xffff;
      uVar3 = uVar3 >> 0x10;
      (**(code **)(**(int **)((int)this + 0xc) + 100))
                (param_1,iVar4,iVar4 + iVar5,uVar3,yBottom,param_6);
      *(uint *)(*(int *)((int)this + 0xc) + 0x156) = uVar3;
      *(uint *)(*(int *)((int)this + 0xc) + 0x15a) = yBottom;
      *(int *)(*(int *)((int)this + 0xc) + 0x15e) = iVar4;
      *(int *)(*(int *)((int)this + 0xc) + 0x162) = iVar4 + iVar5;
      *(uint *)(*(int *)((int)this + 0xc) + 0x166) = param_6;
      iVar5 = *(int *)((int)this + 0xc);
      if ((*(char *)(iVar5 + 0xe0) == '\x06') && (*(char *)(iVar5 + 0x18e) != '\0')) {
        SetRect((LPRECT)(iVar5 + 0x10a),0,0,uVar3,yBottom);
        (**(code **)(**(int **)((int)this + 0xc) + 0xdc))((int)*(int **)((int)this + 0xc) + 0x10a);
      }
      else {
        *(char *)(iVar5 + 0x18e) = '\0';
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

