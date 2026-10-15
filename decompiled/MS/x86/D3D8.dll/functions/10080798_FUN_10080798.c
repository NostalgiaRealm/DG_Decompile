/*
 * FUN_10080798 at 10080798
 * int __thiscall FUN_10080798(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 10080798-10080805
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10080798(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = FUN_1002e9f5(this,uVar1,uVar2);
  iVar5 = uVar4 * 0x18;
  if (((uVar4 == *(uint *)((int)this + 8)) ||
      (iVar3 = *(int *)((int)this + 4), *(uint *)(iVar5 + iVar3) != uVar1)) ||
     (*(uint *)(iVar5 + 4 + iVar3) != uVar2)) {
    FUN_10080a54(this,uVar4,uVar1,uVar2,param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar5 + 0x10 + iVar3) = *param_2;
  }
  return *(int *)((int)this + 4) + iVar5 + 8;
}

