/*
 * FUN_1006672f at 1006672f
 * undefined __fastcall FUN_1006672f(int param_1)
 * Address ranges: 1006672f-10066873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006672f(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_100bf1ac & 1) == 0) {
    DAT_100bf1ac = DAT_100bf1ac | 1;
    local_18[1] = (undefined *)0x0;
    local_18[2] = (undefined *)0x0;
    local_8 = 0;
    local_18[0] = (undefined *)0x2;
    iVar2 = 5;
    ppuVar3 = local_18;
    puVar4 = &DAT_100bf028;
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
    puVar4 = &DAT_100bf03c;
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
    puVar4 = &DAT_100bf050;
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
    puVar4 = &DAT_100bf064;
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
    puVar4 = &DAT_100bf078;
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
    puVar4 = &DAT_100bf08c;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_100b9fc0;
    ppuVar3 = local_18;
    puVar4 = &DAT_100bf0a0;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    _DAT_100bf0c4 = 5;
    _DAT_100bf0bc = 0;
    _DAT_100bf0b4 = 1;
    _DAT_100bf0b8 = 1;
    _DAT_100bf0c0 = 2;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1cf00) + 0x50c) + 4))
            (*(undefined4 *)(param_1 + 0x14),1,&DAT_100ba00c,0);
  return;
}

