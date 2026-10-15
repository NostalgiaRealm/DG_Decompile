/*
 * FUN_10005303 at 10005303
 * undefined __thiscall FUN_10005303(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10005303-100053d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005303(void *this,int param_1,uint param_2,uint param_3)

{
  void *this_00;
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,2);
    if (bVar2) {
      this_00 = *(void **)((int)this + 0xc);
      uVar3 = FUN_10009384(this_00,param_2);
      uVar4 = FUN_10009384(this_00,param_3);
      uVar6 = 0xff000000;
      iVar7 = 3;
      param_3 = uVar4;
      do {
        uVar5 = uVar6 & uVar4;
        if (uVar5 < (uVar6 & uVar3)) {
          uVar4 = ~uVar6 & param_3 | uVar6 & uVar3;
          uVar3 = uVar3 & ~uVar6 | uVar5;
          param_3 = uVar4;
        }
        uVar6 = uVar6 >> 8;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar1 = *(int **)((int)this + 0xc);
      iVar7 = param_1 * 0x9d;
      if ((uVar3 != *(uint *)(iVar7 + 0x259 + (int)piVar1)) ||
         (uVar4 != *(uint *)(iVar7 + 0x25d + (int)piVar1))) {
        (**(code **)(*piVar1 + 0x138))(param_1,uVar3,uVar4);
        *(uint *)(iVar7 + 0x259 + *(int *)((int)this + 0xc)) = uVar3;
        *(uint *)(iVar7 + 0x25d + *(int *)((int)this + 0xc)) = param_3;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

