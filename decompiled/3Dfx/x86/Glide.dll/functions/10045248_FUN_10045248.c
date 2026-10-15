/*
 * FUN_10045248 at 10045248
 * undefined __thiscall FUN_10045248(void * this, undefined4 param_1)
 * Address ranges: 10045248-10045312
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045248(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *local_18 [4];
  undefined4 local_8;
  
  if ((DAT_100598f0 & 1) == 0) {
    DAT_100598f0 = DAT_100598f0 | 1;
    local_18[2] = (undefined *)0x0;
    local_18[0] = (undefined *)0x2;
    local_18[1] = (undefined *)0x2;
    local_8 = 0;
    iVar2 = 5;
    ppuVar3 = local_18;
    puVar4 = &DAT_100597f8;
    for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_8 = 5;
    local_18[0] = (undefined *)0x0;
    local_18[1] = (undefined *)0x1;
    local_18[2] = &DAT_10059728;
    ppuVar3 = local_18;
    puVar4 = &DAT_1005980c;
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
    puVar4 = &DAT_10059820;
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
    puVar4 = &DAT_10059834;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  (**(code **)(*(int *)((int)this + 0x50c) + 4))(param_1,1,&DAT_10059664,0);
  return;
}

