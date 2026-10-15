/*
 * FUN_1004d8b0 at 1004d8b0
 * int __thiscall FUN_1004d8b0(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 1004d8b0-1004d918
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004d8b0(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = param_1;
  uVar3 = FUN_1004e15f(this,param_1,0);
  iVar4 = uVar3 * 0x298;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar1 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar1) != uVar2)) ||
     (*(int *)(iVar4 + 4 + iVar1) != 0)) {
    FUN_1004e071(this,uVar3,uVar2,0,&param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar1 + 0xc + iVar4);
    for (iVar5 = 0xa3; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar4 + 0xc;
}

