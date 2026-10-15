/*
 * FUN_10004f46 at 10004f46
 * undefined __thiscall FUN_10004f46(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10004f46-10005014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004f46(void *this,int param_1,uint param_2,uint param_3)

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
    bVar2 = FUN_10004df8(this,2);
    if (bVar2) {
      this_00 = *(void **)((int)this + 0xc);
      uVar3 = FUN_10008b77(this_00,param_2);
      uVar4 = FUN_10008b77(this_00,param_3);
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
      iVar7 = param_1 * 0x55;
      if ((uVar3 != *(uint *)(iVar7 + 0x1ae + (int)piVar1)) ||
         (uVar4 != *(uint *)(iVar7 + 0x1b2 + (int)piVar1))) {
        (**(code **)(*piVar1 + 0x144))(param_1,uVar3,uVar4);
        *(uint *)(iVar7 + 0x1ae + *(int *)((int)this + 0xc)) = uVar3;
        *(uint *)(iVar7 + 0x1b2 + *(int *)((int)this + 0xc)) = param_3;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

