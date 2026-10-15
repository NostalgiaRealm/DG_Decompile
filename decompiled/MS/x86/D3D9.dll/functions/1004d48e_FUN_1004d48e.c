/*
 * FUN_1004d48e at 1004d48e
 * undefined __thiscall FUN_1004d48e(void * this, uint * param_1)
 * Address ranges: 1004d48e-1004d4ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004d48e(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar2 = FUN_1004d70c(this,uVar1,(int)uVar1 >> 0x1f);
  uVar3 = *(uint *)((int)this + 8);
  if (uVar2 != uVar3) {
    if ((*(uint *)(uVar2 * 0x28 + *(int *)((int)this + 4)) == uVar1) &&
       (*(uint *)(uVar2 * 0x28 + 4 + *(int *)((int)this + 4)) == (int)uVar1 >> 0x1f)) {
      while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
        puVar5 = (undefined4 *)(uVar2 * 0x28 + *(int *)((int)this + 4));
        puVar6 = puVar5 + -10;
        for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar3 = *(uint *)((int)this + 8);
      }
      *(uint *)((int)this + 8) = uVar3 - 1;
    }
  }
  return;
}

