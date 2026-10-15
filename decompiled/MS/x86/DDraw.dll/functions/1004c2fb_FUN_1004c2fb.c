/*
 * FUN_1004c2fb at 1004c2fb
 * undefined __thiscall FUN_1004c2fb(void * this, undefined4 param_1)
 * Address ranges: 1004c2fb-1004c3c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c2fb(void *this,undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_10070bb8 & 1) == 0) {
    DAT_10070bb8 = DAT_10070bb8 | 1;
    local_18[1] = (undefined *)0x1;
    local_18[0] = (undefined *)0x0;
    local_18[2] = &DAT_1006c1a0;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_10070b00;
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
    puVar3 = &DAT_10070b14;
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
    puVar3 = &DAT_10070b28;
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
    puVar3 = &DAT_10070b3c;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_1006c1b4,0);
  return;
}

