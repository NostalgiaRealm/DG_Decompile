/*
 * FUN_10096da5 at 10096da5
 * undefined __thiscall FUN_10096da5(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10096da5-10096e28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10096da5(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x214 + local_8);
      iVar4 = local_8 * 0xc;
      iVar5 = *(char *)(param_1 + 0x14 + uVar3 * 8) * 4;
      iVar1 = *(int *)((int)this + iVar5 + 26000);
      iVar2 = *(int *)((int)this + iVar5 + 0x65d0);
      *(int *)(param_4 + 4 + iVar4) = iVar2;
      *(uint *)(param_4 + iVar4) =
           iVar2 * param_3 + (uint)*(byte *)(param_1 + 0x17 + uVar3 * 8) * 4 +
           *(int *)((int)this + iVar5 + 0x6610) + *(int *)(iVar1 + 4);
      *(uint *)(param_4 + 8 + iVar4) = *(uint *)(param_2 + iVar5) & 0x3fffffff;
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 8));
  }
  return;
}

