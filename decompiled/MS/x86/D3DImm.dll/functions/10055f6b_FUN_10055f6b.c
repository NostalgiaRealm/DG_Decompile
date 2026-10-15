/*
 * FUN_10055f6b at 10055f6b
 * undefined __thiscall FUN_10055f6b(void * this, uint * param_1)
 * Address ranges: 10055f6b-10055fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10055f6b(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *param_1;
  uVar2 = FUN_10056245(this,uVar1,(int)uVar1 >> 0x1f);
  uVar3 = *(uint *)((int)this + 8);
  if (uVar2 != uVar3) {
    if ((*(uint *)(uVar2 * 0x20 + *(int *)((int)this + 4)) == uVar1) &&
       (*(uint *)(uVar2 * 0x20 + 4 + *(int *)((int)this + 4)) == (int)uVar1 >> 0x1f)) {
      while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
        puVar5 = (undefined4 *)(uVar2 * 0x20 + *(int *)((int)this + 4));
        puVar6 = puVar5 + -8;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
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

