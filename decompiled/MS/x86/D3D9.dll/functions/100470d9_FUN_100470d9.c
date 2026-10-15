/*
 * FUN_100470d9 at 100470d9
 * undefined __thiscall FUN_100470d9(void * this, uint param_1)
 * Address ranges: 100470d9-10047185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100470d9(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(int *)this + 4);
  *(uint *)(*(int *)this + 4) = param_1;
  piVar4 = *(int **)this;
  iVar6 = param_1 + 0xf;
  param_1 = 0;
  uVar3 = iVar6 + piVar4[2];
  if (*(int *)(*piVar4 + 8) != 0) {
    do {
      iVar6 = param_1 * 0xc;
      uVar5 = (uint)*(byte *)(param_1 + 0x214 + *piVar4);
      *(undefined4 **)(iVar6 + *(int *)(*(int *)this + 4)) = (undefined4 *)(uVar3 & 0xfffffff0);
      *(uint *)(iVar6 + 4 + (*(int **)this)[1]) = (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8)
      ;
      *(undefined4 *)(iVar6 + 8 + *(int *)(*(int *)this + 4)) = *(undefined4 *)(iVar1 + 8 + iVar6);
      uVar5 = (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8);
      puVar2 = FUN_10045dc1(*(int *)((int)this + 4),uVar5,*(undefined4 **)(iVar1 + iVar6),
                            *(uint *)(iVar1 + 4 + iVar6),(undefined4 *)(uVar3 & 0xfffffff0),uVar5);
      uVar3 = (int)puVar2 + 0xf;
      param_1 = param_1 + 1;
      piVar4 = *(int **)this;
    } while (param_1 < *(uint *)(*piVar4 + 8));
  }
  return;
}

