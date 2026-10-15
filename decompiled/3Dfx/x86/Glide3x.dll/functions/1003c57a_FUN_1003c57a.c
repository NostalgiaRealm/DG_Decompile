/*
 * FUN_1003c57a at 1003c57a
 * int __thiscall FUN_1003c57a(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1003c57a-1003c5ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003c57a(void *this,uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar5 = (int)uVar1 >> 0x1f;
  uVar3 = FUN_1003c7ef(this,uVar1,uVar5);
  iVar4 = uVar3 * 0x20;
  if (((uVar3 == *(uint *)((int)this + 8)) ||
      (iVar2 = *(int *)((int)this + 4), *(uint *)(iVar4 + iVar2) != uVar1)) ||
     (*(uint *)(iVar4 + 4 + iVar2) != uVar5)) {
    FUN_1003c714(this,uVar3,uVar1,uVar5,param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(iVar2 + 0x10 + iVar4);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
  }
  return *(int *)((int)this + 4) + iVar4 + 8;
}

