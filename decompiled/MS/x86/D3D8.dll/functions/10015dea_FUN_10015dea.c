/*
 * FUN_10015dea at 10015dea
 * int __thiscall FUN_10015dea(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 10015dea-10015e4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10015dea(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar3 = FUN_10009287(this,uVar1,0);
  iVar4 = uVar3 * 0x78;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar2) != uVar1)) ||
     (*(int *)(iVar4 + 4 + iVar2) != 0)) {
    FUN_100160e7(this,uVar3,uVar1,0,param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar2 + 0xc + iVar4);
    for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar4 + 8;
}

