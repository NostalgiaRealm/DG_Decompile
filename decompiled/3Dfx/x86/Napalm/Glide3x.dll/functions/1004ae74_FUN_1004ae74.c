/*
 * FUN_1004ae74 at 1004ae74
 * undefined __thiscall FUN_1004ae74(void * this, undefined4 param_1)
 * Address ranges: 1004ae74-1004af3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ae74(void *this,undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_1005fbd4 & 1) == 0) {
    DAT_1005fbd4 = DAT_1005fbd4 | 1;
    local_18[1] = (undefined *)0x1;
    local_18[0] = (undefined *)0x0;
    local_18[2] = &DAT_1005f9a8;
    local_8 = 0;
    ppuVar2 = local_18;
    puVar3 = &DAT_1005faa8;
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
    puVar3 = &DAT_1005fabc;
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
    puVar3 = &DAT_1005fad0;
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
    puVar3 = &DAT_1005fae4;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *ppuVar2;
      ppuVar2 = ppuVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_1005f9bc,0);
  return;
}

