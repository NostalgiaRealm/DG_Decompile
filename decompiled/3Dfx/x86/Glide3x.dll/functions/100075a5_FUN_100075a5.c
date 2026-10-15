/*
 * FUN_100075a5 at 100075a5
 * undefined __fastcall FUN_100075a5(int param_1)
 * Address ranges: 100075a5-100075da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100075a5(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x10c);
  puVar3 = *(undefined4 **)(param_1 + 0x1d0);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x15c);
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1d0) + 0x50);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 0xa0;
  return;
}

