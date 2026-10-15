/*
 * FUN_1004d4ef at 1004d4ef
 * int __thiscall FUN_1004d4ef(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1004d4ef-1004d560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004d4ef(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *param_1;
  uVar6 = (int)uVar1 >> 0x1f;
  uVar3 = FUN_1004d70c(this,uVar1,uVar6);
  iVar4 = uVar3 * 0x28;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar2) != uVar1)) ||
     (*(uint *)(iVar4 + 4 + iVar2) != uVar6)) {
    FUN_1004d633(this,uVar3,uVar1,uVar6,param_1,param_2);
  }
  else {
    puVar7 = (undefined4 *)(iVar2 + 0x10 + iVar4);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar4 + 8;
}

