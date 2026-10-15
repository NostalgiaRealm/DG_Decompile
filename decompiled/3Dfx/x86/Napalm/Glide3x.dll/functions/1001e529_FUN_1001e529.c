/*
 * FUN_1001e529 at 1001e529
 * undefined4 __thiscall FUN_1001e529(void * this, uint * param_1)
 * Address ranges: 1001e529-1001e5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001e529(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = 0;
  uVar6 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar7 = *(int *)this;
    uVar8 = *(uint *)((int)this + 8);
    do {
      uVar5 = uVar8 + uVar6 >> 1;
      iVar4 = uVar5 * 0x20;
      uVar3 = *(uint *)(iVar7 + 4 + iVar4);
      if ((uVar3 < uVar1) ||
         ((uVar9 = uVar5, uVar3 <= uVar1 && (*(uint *)(iVar7 + iVar4) <= uVar2)))) {
        uVar6 = *(uint *)(iVar7 + 4 + iVar4);
        if ((uVar1 < uVar6) || ((uVar1 <= uVar6 && (uVar2 <= *(uint *)(iVar7 + iVar4))))) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
    } while (uVar9 != uVar6);
  }
  iVar7 = uVar5 * 0x20;
  if (((uVar5 == *(uint *)((int)this + 8)) || (*(uint *)(iVar7 + *(int *)this) != uVar2)) ||
     (*(uint *)(iVar7 + 4 + *(int *)this) != uVar1)) {
    FUN_1001e7cf(this,uVar5,uVar2,uVar1,param_1);
  }
  return *(undefined4 *)(iVar7 + 0x18 + *(int *)this);
}

