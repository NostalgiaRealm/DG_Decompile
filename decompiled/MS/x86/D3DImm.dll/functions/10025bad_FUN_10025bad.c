/*
 * FUN_10025bad at 10025bad
 * undefined __thiscall FUN_10025bad(void * this, uint param_1)
 * Address ranges: 10025bad-10025c40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025bad(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = param_1 + 0xf;
  iVar2 = *(int *)(*(int *)this + 4);
  *(uint *)(*(int *)this + 4) = param_1;
  piVar4 = *(int **)this;
  param_1 = 0;
  uVar6 = iVar1 + piVar4[2];
  if (*(int *)(*piVar4 + 8) != 0) {
    do {
      uVar5 = (uint)*(byte *)(param_1 + 0x9c + *piVar4);
      *(undefined4 **)(*(int *)(*(int *)this + 4) + param_1 * 8) =
           (undefined4 *)(uVar6 & 0xfffffff0);
      *(uint *)((*(int **)this)[1] + 4 + param_1 * 8) =
           (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8);
      uVar5 = (uint)*(byte *)(**(int **)this + 0x16 + uVar5 * 8);
      puVar3 = FUN_10024895(*(int *)((int)this + 4),uVar5,*(undefined4 **)(iVar2 + param_1 * 8),
                            *(uint *)(iVar2 + 4 + param_1 * 8),(undefined4 *)(uVar6 & 0xfffffff0),
                            uVar5);
      piVar4 = *(int **)this;
      uVar6 = (int)puVar3 + 0xf;
      param_1 = param_1 + 1;
    } while (param_1 < *(uint *)(*piVar4 + 8));
  }
  return;
}

