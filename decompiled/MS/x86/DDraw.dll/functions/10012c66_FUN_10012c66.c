/*
 * FUN_10012c66 at 10012c66
 * undefined __thiscall FUN_10012c66(void * this, undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 10012c66-10012d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10012c66(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  uVar7 = 0;
  uVar10 = ((param_2[0xc] << 8 | param_2[10]) << 8 | param_2[9]) << 8 | param_2[8] | param_2[5];
  uVar4 = param_2[6] << 0x10 | param_2[4];
  uVar3 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar8 = *(int *)this;
    uVar5 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar5 + uVar7 >> 1;
      iVar2 = uVar3 * 0x50;
      uVar1 = *(uint *)(iVar8 + 4 + iVar2);
      if ((uVar1 < uVar10) ||
         ((uVar6 = uVar3, uVar1 <= uVar10 && (*(uint *)(iVar8 + iVar2) <= uVar4)))) {
        uVar7 = *(uint *)(iVar8 + 4 + iVar2);
        if ((uVar10 < uVar7) || ((uVar10 <= uVar7 && (uVar4 <= *(uint *)(iVar8 + iVar2))))) break;
        uVar3 = uVar3 + 1;
        uVar6 = uVar5;
        uVar7 = uVar3;
      }
      uVar5 = uVar6;
    } while (uVar6 != uVar7);
  }
  iVar8 = uVar3 * 0x50;
  if (((uVar3 == *(uint *)((int)this + 8)) || (*(uint *)(iVar8 + *(int *)this) != uVar4)) ||
     (*(uint *)(iVar8 + 4 + *(int *)this) != uVar10)) {
    FUN_10012fc5(this,uVar3,uVar4,uVar10,param_2);
  }
  puVar9 = (undefined4 *)(iVar8 + *(int *)this + 0x40);
  *param_1 = *puVar9;
  param_1[1] = puVar9[1];
  param_1[2] = puVar9[2];
  return;
}

