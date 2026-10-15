/*
 * FUN_100294ca at 100294ca
 * undefined __fastcall FUN_100294ca(uint param_1)
 * Address ranges: 100294ca-1002959b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100294ca(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar3 = (int *)(param_1 + 0x14);
  piVar1 = (int *)(param_1 + 4);
  if (*piVar3 != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*piVar3,param_1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x18),param_1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x1c),param_1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x20),param_1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x24),param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x28),param_1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x2c),param_1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x30),param_1);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_100cdfce((void *)(*piVar1 + 0x60),*(int *)(param_1 + 0x34),param_1);
  }
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x38);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}

