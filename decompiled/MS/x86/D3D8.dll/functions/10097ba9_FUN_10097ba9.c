/*
 * FUN_10097ba9 at 10097ba9
 * int __thiscall FUN_10097ba9(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 10097ba9-10097c1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10097ba9(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *param_1;
  uVar4 = (int)uVar1 >> 0x1f;
  uVar3 = FUN_10007d2a(this,uVar1,uVar4);
  iVar5 = uVar3 * 0x10;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar5 + iVar2) != uVar1)) ||
     (*(uint *)(iVar5 + 4 + iVar2) != uVar4)) {
    FUN_10061528(this,uVar3,uVar1,uVar4,param_1,param_2);
  }
  else {
    *(undefined4 *)(iVar5 + 0xc + iVar2) = *param_2;
  }
  return *(int *)((int)this + 4) + iVar5 + 8;
}

