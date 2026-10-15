/*
 * FUN_1003c5ba at 1003c5ba
 * int __thiscall FUN_1003c5ba(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1003c5ba-1003c62b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003c5ba(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar3 = FUN_10038aea(this,uVar1,uVar4);
  iVar5 = uVar3 * 0x10;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar5 + iVar2) != uVar1)) ||
     (*(uint *)(iVar5 + 4 + iVar2) != uVar4)) {
    FUN_10038a18(this,uVar3,uVar1,uVar4,param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar5 + 0xc + iVar2) = *param_2;
  }
  return *(int *)((int)this + 4) + iVar5 + 8;
}

