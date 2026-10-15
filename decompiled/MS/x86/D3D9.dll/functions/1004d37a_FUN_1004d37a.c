/*
 * FUN_1004d37a at 1004d37a
 * undefined __thiscall FUN_1004d37a(void * this, uint * param_1)
 * Address ranges: 1004d37a-1004d3dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004d37a(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = FUN_1000887d(this,uVar1,(int)uVar1 >> 0x1f);
  uVar3 = *(uint *)((int)this + 8);
  if (((uVar2 != uVar3) && (*(uint *)(*(int *)((int)this + 4) + uVar2 * 0x10) == uVar1)) &&
     (*(uint *)(*(int *)((int)this + 4) + 4 + uVar2 * 0x10) == (int)uVar1 >> 0x1f)) {
    while (uVar2 = uVar2 + 1, uVar2 < uVar3) {
      puVar4 = (undefined4 *)(uVar2 * 0x10 + *(int *)((int)this + 4));
      puVar4[-4] = *puVar4;
      puVar4[-3] = puVar4[1];
      puVar4[-2] = puVar4[2];
      puVar4[-1] = puVar4[3];
      uVar3 = *(uint *)((int)this + 8);
    }
    *(uint *)((int)this + 8) = uVar3 - 1;
  }
  return;
}

