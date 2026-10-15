/*
 * FUN_10050ac6 at 10050ac6
 * undefined __thiscall FUN_10050ac6(void * this, int param_1)
 * Address ranges: 10050ac6-10050af9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10050ac6(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = param_1 + 1;
  uVar1 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    do {
      puVar4 = (undefined4 *)(uVar3 * 0x28 + *(int *)((int)this + 4));
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + -10;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = *(uint *)((int)this + 8);
    } while (uVar3 < uVar1);
  }
  *(uint *)((int)this + 8) = uVar1 - 1;
  return;
}

