/*
 * FUN_10044f83 at 10044f83
 * undefined __thiscall FUN_10044f83(void * this, undefined4 param_1)
 * Address ranges: 10044f83-1004504c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044f83(void *this,undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_100598c4 & 1) == 0) {
    DAT_100598c4 = DAT_100598c4 | 1;
    local_18[1] = (undefined *)0x1;
    local_18[0] = (undefined *)0x0;
    local_18[2] = &DAT_10059700;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_10059778;
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
    puVar3 = &DAT_1005978c;
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
    puVar3 = &DAT_100597a0;
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
    puVar3 = &DAT_100597b4;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_10059714,0);
  return;
}

