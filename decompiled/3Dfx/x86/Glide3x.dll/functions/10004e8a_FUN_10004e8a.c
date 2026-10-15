/*
 * FUN_10004e8a at 10004e8a
 * undefined __thiscall FUN_10004e8a(void * this, uint param_1, uint param_2)
 * Address ranges: 10004e8a-10004f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004e8a(void *this,uint param_1,uint param_2)

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
    bVar2 = FUN_10004df8(this,1);
    if (bVar2) {
      this_00 = *(void **)((int)this + 0xc);
      uVar3 = FUN_10008b77(this_00,param_1);
      uVar4 = FUN_10008b77(this_00,param_2);
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
      if ((uVar3 != *(uint *)((int)piVar1 + 0x13a)) || (uVar4 != *(uint *)((int)piVar1 + 0x13e))) {
        (**(code **)(*piVar1 + 0x13c))(uVar3,uVar4);
        *(uint *)(*(int *)((int)this + 0xc) + 0x13a) = uVar3;
        *(uint *)(*(int *)((int)this + 0xc) + 0x13e) = uVar4;
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

