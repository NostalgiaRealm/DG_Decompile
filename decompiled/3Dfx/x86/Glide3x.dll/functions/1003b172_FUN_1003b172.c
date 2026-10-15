/*
 * FUN_1003b172 at 1003b172
 * undefined __thiscall FUN_1003b172(void * this, uint * param_1)
 * Address ranges: 1003b172-1003b1c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003b172(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = FUN_1003b5cf(this,uVar1,0);
  uVar3 = *(uint *)((int)this + 8);
  if (((uVar2 != uVar3) && (*(uint *)(*(int *)((int)this + 4) + uVar2 * 0x10) == uVar1)) &&
     (*(int *)(*(int *)((int)this + 4) + 4 + uVar2 * 0x10) == 0)) {
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

