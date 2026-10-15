/*
 * FUN_10090a91 at 10090a91
 * undefined4 __thiscall FUN_10090a91(void * this, uint param_1, uint param_2, int param_3)
 * Address ranges: 10090a91-10090b07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10090a91(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2;
  param_2 = param_1;
  iVar4 = (param_3 != 1) + 2;
  uVar3 = FUN_10007b6a((void *)((int)this + 0x250),(int *)&param_2);
  if ((uVar3 != 0xffffffff) &&
     (param_2 = uVar3 * 0xc, uVar2 < *(uint *)(param_2 + 0xd4 + (int)this))) {
    iVar1 = *(int *)(param_2 + 0xd0 + (int)this);
    if ((*(int *)(iVar1 + uVar2 * 8) == 0) || (*(int *)(iVar1 + 4 + uVar2 * 8) != iVar4)) {
      FUN_10090483(this,param_1,uVar2,iVar4);
    }
    return *(undefined4 *)(*(int *)(param_2 + 0xd0 + (int)this) + uVar2 * 8);
  }
  return 0;
}

