/*
 * FUN_1001dc09 at 1001dc09
 * undefined4 __thiscall FUN_1001dc09(void * this, uint * param_1)
 * Address ranges: 1001dc09-1001dcf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001dc09(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = param_1[0x12] + param_1[0x10];
  uVar4 = uVar3 + param_1[0xe];
  uVar5 = uVar4 + param_1[0xc];
  uVar6 = uVar5 + param_1[10];
  uVar7 = uVar6 + param_1[8];
  uVar8 = uVar7 + param_1[6];
  uVar9 = uVar8 + param_1[4];
  uVar10 = uVar9 + param_1[2];
  uVar11 = uVar10 + *param_1;
  uVar5 = param_1[0x13] + param_1[0x11] + (uint)CARRY4(param_1[0x12],param_1[0x10]) + param_1[0xf] +
          (uint)CARRY4(uVar3,param_1[0xe]) + param_1[0xd] + (uint)CARRY4(uVar4,param_1[0xc]) +
          param_1[0xb] + (uint)CARRY4(uVar5,param_1[10]) + param_1[9] +
          (uint)CARRY4(uVar6,param_1[8]) + param_1[7] + (uint)CARRY4(uVar7,param_1[6]) + param_1[5]
          + (uint)CARRY4(uVar8,param_1[4]) + param_1[3] + (uint)CARRY4(uVar9,param_1[2]) +
          param_1[1] + (uint)CARRY4(uVar10,*param_1);
  uVar3 = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar2 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar6 + uVar4 >> 1;
      iVar1 = uVar3 * 0x60;
      uVar7 = *(uint *)(iVar2 + 4 + iVar1);
      if ((uVar7 < uVar5) ||
         ((uVar8 = uVar3, uVar7 <= uVar5 && (*(uint *)(iVar2 + iVar1) <= uVar11)))) {
        uVar4 = *(uint *)(iVar2 + 4 + iVar1);
        if ((uVar5 < uVar4) || ((uVar5 <= uVar4 && (uVar11 <= *(uint *)(iVar2 + iVar1))))) break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3;
        uVar8 = uVar6;
      }
      uVar6 = uVar8;
    } while (uVar8 != uVar4);
  }
  iVar2 = uVar3 * 0x60;
  if (((uVar3 == *(uint *)((int)this + 8)) || (*(uint *)(iVar2 + *(int *)this) != uVar11)) ||
     (*(uint *)(iVar2 + 4 + *(int *)this) != uVar5)) {
    FUN_1001dcf3(this,uVar3,uVar11,uVar5,param_1);
  }
  return *(undefined4 *)(iVar2 + 0x58 + *(int *)this);
}

