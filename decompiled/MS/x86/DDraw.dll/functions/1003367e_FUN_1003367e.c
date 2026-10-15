/*
 * FUN_1003367e at 1003367e
 * undefined __thiscall FUN_1003367e(void * this, int param_1)
 * Address ranges: 1003367e-100336f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003367e(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)((int)this + 0x108);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x108) != 0)) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x108) + 0x14);
    puVar6 = (undefined4 *)(iVar1 + 0x14);
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_1002598e(*(void **)(iVar1 + 0xc),iVar1);
    FUN_1002958e(iVar1);
  }
  if ((*(uint *)(param_1 + 0x154) & 0x10000) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 400);
    uVar3 = *(undefined4 *)(param_1 + 0x194);
    *(uint *)((int)this + 0x154) = *(uint *)((int)this + 0x154) | 0x10000;
    *(undefined4 *)((int)this + 400) = uVar2;
    *(undefined4 *)((int)this + 0x194) = uVar3;
  }
  return;
}

