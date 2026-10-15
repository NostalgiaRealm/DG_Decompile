/*
 * FUN_100c49d0 at 100c49d0
 * undefined __thiscall FUN_100c49d0(void * this, undefined4 param_1)
 * Address ranges: 100c49d0-100c4a9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c49d0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_100e3bd8 & 1) == 0) {
    DAT_100e3bd8 = DAT_100e3bd8 | 1;
    local_18[2] = (undefined *)0x0;
    local_18[0] = (undefined *)0x2;
    local_18[1] = (undefined *)0x2;
    local_8 = 0;
    iVar2 = 5;
    ppuVar3 = local_18;
    puVar4 = &DAT_100e3b68;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_100dea28;
    ppuVar3 = local_18;
    puVar4 = &DAT_100e3b7c;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x3;
    local_18[1] = (undefined *)0x1;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_100e3b90;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x3;
    local_18[1] = (undefined *)0x2;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_100e3ba4;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_100de968,0);
  return;
}

