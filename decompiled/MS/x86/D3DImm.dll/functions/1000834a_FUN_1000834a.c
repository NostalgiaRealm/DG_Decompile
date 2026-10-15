/*
 * FUN_1000834a at 1000834a
 * int __thiscall FUN_1000834a(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1000834a-100083b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1000834a(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar3 = FUN_100087ac(this,uVar1,0);
  iVar5 = uVar3 * 0x80;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar5 + iVar2) != uVar1)) ||
     (*(int *)(iVar5 + 4 + iVar2) != 0)) {
    FUN_100086d0(this,uVar3,uVar1,0,param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar2 + 0xc + iVar5);
    for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return *(int *)((int)this + 4) + iVar5 + 8;
}

