/*
 * FUN_10037b85 at 10037b85
 * int __thiscall FUN_10037b85(void * this, uint param_1, undefined4 * param_2)
 * Address ranges: 10037b85-10037bed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10037b85(void *this,uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = param_1;
  uVar3 = FUN_100383e6(this,param_1,0);
  iVar4 = uVar3 * 0x2a0;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar1 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar1) != uVar2)) ||
     (*(int *)(iVar4 + 4 + iVar1) != 0)) {
    FUN_100382f8(this,uVar3,uVar2,0,&param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar1 + 0xc + iVar4);
    for (iVar5 = 0xa5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar4 + 0xc;
}

