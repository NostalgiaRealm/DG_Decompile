/*
 * FUN_1000f862 at 1000f862
 * undefined __fastcall FUN_1000f862(int param_1)
 * Address ranges: 1000f862-1000f9a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f862(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_10070ba8 & 1) == 0) {
    DAT_10070ba8 = DAT_10070ba8 | 1;
    local_18[1] = (undefined *)0x0;
    local_18[2] = (undefined *)0x0;
    local_8 = 0;
    local_18[0] = (undefined *)0x2;
    iVar2 = 5;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a30;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_8 = 5;
    local_18[1] = (undefined *)0x0;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a44;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_8 = 5;
    local_18[1] = (undefined *)0x1;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a58;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_8 = 5;
    local_18[1] = (undefined *)0x2;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a6c;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_18[1] = (undefined *)0x3;
    local_8 = 5;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a80;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_18[0] = (undefined *)0x3;
    local_8 = 5;
    local_18[1] = (undefined *)0x4;
    local_18[2] = (undefined *)0x0;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070a94;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_1006c030;
    ppuVar3 = local_18;
    puVar4 = &DAT_10070aa8;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    _DAT_10070acc = 5;
    _DAT_10070ac4 = 0;
    _DAT_10070abc = 1;
    _DAT_10070ac0 = 1;
    _DAT_10070ac8 = 2;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xcf00) + 0x50c) + 4))
            (*(undefined4 *)(param_1 + 0x14),1,&DAT_1006c07c,0);
  return;
}

