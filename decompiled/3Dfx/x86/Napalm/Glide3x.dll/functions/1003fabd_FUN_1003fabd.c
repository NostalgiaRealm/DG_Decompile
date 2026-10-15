/*
 * FUN_1003fabd at 1003fabd
 * int __thiscall FUN_1003fabd(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1003fabd-1003fb21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003fabd(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar3 = FUN_1003fdff(this,uVar1,0);
  iVar4 = uVar3 * 0x28;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar2) != uVar1)) ||
     (*(int *)(iVar4 + 4 + iVar2) != 0)) {
    FUN_1003fd26(this,uVar3,uVar1,0,param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar2 + 0x10 + iVar4);
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar4 + 8;
}

