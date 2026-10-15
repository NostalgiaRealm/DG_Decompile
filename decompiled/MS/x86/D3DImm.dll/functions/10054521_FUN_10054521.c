/*
 * FUN_10054521 at 10054521
 * undefined4 __thiscall FUN_10054521(void * this, uint * param_1)
 * Address ranges: 10054521-100545c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10054521(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = 0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar9 = *(int *)this;
    uVar7 = *(uint *)((int)this + 8);
    do {
      uVar5 = uVar7 + uVar6 >> 1;
      iVar4 = uVar5 * 0x18;
      uVar3 = *(uint *)(iVar9 + 4 + iVar4);
      if ((uVar3 < uVar2) ||
         ((uVar8 = uVar5, uVar3 <= uVar2 && (*(uint *)(iVar9 + iVar4) <= uVar1)))) {
        uVar6 = *(uint *)(iVar9 + 4 + iVar4);
        if ((uVar2 < uVar6) || ((uVar2 <= uVar6 && (uVar1 <= *(uint *)(iVar9 + iVar4))))) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
    } while (uVar8 != uVar6);
  }
  iVar9 = uVar5 * 0x18;
  if (((uVar5 == *(uint *)((int)this + 8)) || (*(uint *)(iVar9 + *(int *)this) != uVar1)) ||
     (*(uint *)(iVar9 + 4 + *(int *)this) != uVar2)) {
    FUN_100545c3(this,uVar5,uVar1,uVar2,param_1);
  }
  return *(undefined4 *)(iVar9 + 0x10 + *(int *)this);
}

