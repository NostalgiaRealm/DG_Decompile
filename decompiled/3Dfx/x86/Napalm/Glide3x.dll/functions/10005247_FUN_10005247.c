/*
 * FUN_10005247 at 10005247
 * undefined __thiscall FUN_10005247(void * this, uint param_1, uint param_2)
 * Address ranges: 10005247-10005302
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005247(void *this,uint param_1,uint param_2)

{
  void *this_00;
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    bVar2 = FUN_100051b3(this,1);
    if (bVar2) {
      this_00 = *(void **)((int)this + 0xc);
      uVar3 = FUN_10009384(this_00,param_1);
      uVar4 = FUN_10009384(this_00,param_2);
      uVar7 = 0xff000000;
      iVar6 = 3;
      do {
        uVar5 = uVar7 & uVar4;
        if (uVar5 < (uVar7 & uVar3)) {
          uVar4 = uVar4 & ~uVar7 | uVar7 & uVar3;
          uVar3 = uVar3 & ~uVar7 | uVar5;
        }
        uVar7 = uVar7 >> 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      piVar1 = *(int **)((int)this + 0xc);
      if ((uVar3 != *(uint *)((int)piVar1 + 0x15d)) || (uVar4 != *(uint *)((int)piVar1 + 0x161))) {
        (**(code **)(*piVar1 + 0x130))(uVar3,uVar4);
        *(uint *)(*(int *)((int)this + 0xc) + 0x15d) = uVar3;
        *(uint *)(*(int *)((int)this + 0xc) + 0x161) = uVar4;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

