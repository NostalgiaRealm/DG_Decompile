/*
 * FUN_1004ada9 at 1004ada9
 * undefined __thiscall FUN_1004ada9(void * this, undefined4 param_1)
 * Address ranges: 1004ada9-1004ae73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ada9(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_1005fbd0 & 1) == 0) {
    DAT_1005fbd0 = DAT_1005fbd0 | 1;
    local_18[2] = (undefined *)0x0;
    local_18[0] = (undefined *)0x2;
    local_18[1] = (undefined *)0x2;
    local_8 = 0;
    iVar2 = 5;
    ppuVar3 = local_18;
    puVar4 = &DAT_1005faf8;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_1005f9d0;
    ppuVar3 = local_18;
    puVar4 = &DAT_1005fb0c;
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
    puVar4 = &DAT_1005fb20;
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
    puVar4 = &DAT_1005fb34;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_1005f90c,0);
  return;
}

