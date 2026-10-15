/*
 * FUN_1002817c at 1002817c
 * undefined4 __thiscall FUN_1002817c(void * this, uint * param_1)
 * Address ranges: 1002817c-10028248
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002817c(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = 0;
  uVar7 = param_1[6] + param_1[4];
  uVar8 = uVar7 + param_1[2];
  uVar9 = uVar8 + *param_1;
  uVar8 = param_1[7] + param_1[5] + param_1[3] + param_1[1] + (uint)CARRY4(param_1[6],param_1[4]) +
          (uint)CARRY4(uVar7,param_1[2]) + (uint)CARRY4(uVar8,*param_1);
  uVar7 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar6 = *(int *)this;
    uVar3 = *(uint *)((int)this + 8);
    do {
      uVar7 = uVar3 + uVar5 >> 1;
      iVar2 = uVar7 * 0x30;
      uVar1 = *(uint *)(iVar6 + 4 + iVar2);
      if ((uVar1 < uVar8) ||
         ((uVar4 = uVar7, uVar1 <= uVar8 && (*(uint *)(iVar6 + iVar2) <= uVar9)))) {
        uVar5 = *(uint *)(iVar6 + 4 + iVar2);
        if ((uVar8 < uVar5) || ((uVar8 <= uVar5 && (uVar9 <= *(uint *)(iVar6 + iVar2))))) break;
        uVar7 = uVar7 + 1;
        uVar4 = uVar3;
        uVar5 = uVar7;
      }
      uVar3 = uVar4;
    } while (uVar4 != uVar5);
  }
  iVar6 = uVar7 * 0x30;
  if (((uVar7 == *(uint *)((int)this + 8)) || (*(uint *)(iVar6 + *(int *)this) != uVar9)) ||
     (*(uint *)(iVar6 + 4 + *(int *)this) != uVar8)) {
    FUN_10028249(this,uVar7,uVar9,uVar8,param_1);
  }
  return *(undefined4 *)(iVar6 + 0x28 + *(int *)this);
}

