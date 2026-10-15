/*
 * FUN_10038a1d at 10038a1d
 * undefined __thiscall FUN_10038a1d(void * this, uint * param_1)
 * Address ranges: 10038a1d-10038a71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10038a1d(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = FUN_10038e7a(this,uVar1,0);
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

