/*
 * FUN_10049658 at 10049658
 * undefined4 __thiscall FUN_10049658(void * this, int param_1, uint param_2, int param_3)
 * Address ranges: 10049658-100496c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10049658(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_3 != 1) + 2;
  uVar2 = FUN_10048c8d(this,param_1);
  if ((uVar2 != 0xffffffff) && (iVar3 = uVar2 * 0xc, param_2 < *(uint *)(iVar3 + 0xd4 + (int)this)))
  {
    iVar1 = *(int *)(iVar3 + 0xd0 + (int)this);
    if ((*(int *)(iVar1 + param_2 * 8) == 0) || (*(int *)(iVar1 + 4 + param_2 * 8) != iVar4)) {
      FUN_10049071(this,param_1,param_2,iVar4);
    }
    return *(undefined4 *)(*(int *)(iVar3 + 0xd0 + (int)this) + param_2 * 8);
  }
  return 0;
}

