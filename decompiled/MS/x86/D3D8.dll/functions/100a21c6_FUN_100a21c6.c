/*
 * FUN_100a21c6 at 100a21c6
 * undefined __thiscall FUN_100a21c6(void * this, undefined4 param_1)
 * Address ranges: 100a21c6-100a228f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a21c6(void *this,undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_100bf1bc & 1) == 0) {
    DAT_100bf1bc = DAT_100bf1bc | 1;
    local_18[1] = (undefined *)0x1;
    local_18[0] = (undefined *)0x0;
    local_18[2] = &DAT_100ba130;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_100bf0f8;
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
    puVar3 = &DAT_100bf10c;
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
    puVar3 = &DAT_100bf120;
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
    puVar3 = &DAT_100bf134;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_100ba144,0);
  return;
}

