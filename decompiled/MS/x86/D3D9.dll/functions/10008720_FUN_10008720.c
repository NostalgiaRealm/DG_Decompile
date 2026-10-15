/*
 * FUN_10008720 at 10008720
 * int __thiscall FUN_10008720(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 10008720-10008782
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10008720(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_1;
  uVar3 = FUN_1000887d(this,uVar1,0);
  iVar4 = uVar3 * 0x10;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar2) != uVar1)) ||
     (*(int *)(iVar4 + 4 + iVar2) != 0)) {
    FUN_1000879d(this,uVar3,uVar1,0,param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar4 + 0xc + iVar2) = *param_2;
  }
  return *(int *)((int)this + 4) + iVar4 + 8;
}

