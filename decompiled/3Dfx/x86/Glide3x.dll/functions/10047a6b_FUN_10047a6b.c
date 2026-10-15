/*
 * FUN_10047a6b at 10047a6b
 * undefined __thiscall FUN_10047a6b(void * this, undefined4 param_1)
 * Address ranges: 10047a6b-10047b34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10047a6b(void *this,undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_1005b9f4 & 1) == 0) {
    DAT_1005b9f4 = DAT_1005b9f4 | 1;
    local_18[1] = (undefined *)0x1;
    local_18[0] = (undefined *)0x0;
    local_18[2] = &DAT_1005b7d0;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_1005b8c8;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_18[1] = (undefined *)0x1;
    local_18[2] = (undefined *)0x0;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_1005b8dc;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_18[1] = (undefined *)0x2;
    local_18[2] = (undefined *)0x0;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_1005b8f0;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_18[0] = (undefined *)0x4;
    local_18[1] = (undefined *)0x0;
    local_18[2] = (undefined *)0x0;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_1005b904;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_1005b7e4,0);
  return;
}

