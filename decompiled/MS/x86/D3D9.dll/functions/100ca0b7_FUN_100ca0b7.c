/*
 * FUN_100ca0b7 at 100ca0b7
 * undefined4 __thiscall FUN_100ca0b7(void * this, uint * param_1)
 * Address ranges: 100ca0b7-100ca1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100ca0b7(void *this,uint *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar6 = *param_1;
  uVar10 = param_1[2] + uVar6;
  uVar9 = param_1[3] + param_1[1] + ((int)uVar6 >> 0x1f) + (uint)CARRY4(param_1[2],uVar6);
  uVar6 = 0;
  uVar7 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar11 = *(int *)this;
    uVar5 = *(uint *)((int)this + 8);
    do {
      uVar7 = uVar5 + uVar6 >> 1;
      iVar3 = uVar7 * 0x20;
      uVar1 = *(uint *)(iVar11 + 4 + iVar3);
      if ((uVar1 < uVar9) ||
         ((uVar8 = uVar7, uVar1 <= uVar9 && (*(uint *)(iVar11 + iVar3) <= uVar10)))) {
        uVar6 = *(uint *)(iVar11 + 4 + iVar3);
        if ((uVar9 < uVar6) || ((uVar9 <= uVar6 && (uVar10 <= *(uint *)(iVar11 + iVar3))))) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar5;
        uVar8 = uVar6;
      }
      bVar12 = uVar7 != uVar6;
      uVar5 = uVar7;
      uVar7 = uVar8;
    } while (bVar12);
  }
  iVar11 = uVar7 * 0x20;
  if (((uVar7 == *(uint *)((int)this + 8)) ||
      (iVar3 = *(int *)this, *(uint *)(iVar11 + iVar3) != uVar10)) ||
     (*(uint *)(iVar11 + 4 + iVar3) != uVar9)) {
    FUN_100ca1d6(this,uVar7,uVar10,uVar9,param_1);
  }
  else {
    iVar4 = FUN_100cfea1((byte *)param_1,(byte *)(iVar3 + 8 + iVar11),0x10);
    if (iVar4 != 0) {
      piVar2 = *(int **)(iVar11 + 0x18 + iVar3);
      FUN_100c1038(*(void **)((int)this + 0xc),(uint)piVar2,(undefined *)0x0,'\x01');
      (**(code **)(*piVar2 + 8))(piVar2);
      FUN_100ca26c(this,uVar7,uVar10,uVar9,param_1);
    }
  }
  return *(undefined4 *)(iVar11 + 0x18 + *(int *)this);
}

