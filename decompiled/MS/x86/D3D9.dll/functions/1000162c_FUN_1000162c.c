/*
 * FUN_1000162c at 1000162c
 * int * __fastcall FUN_1000162c(int param_1)
 * Address ranges: 1000162c-10001666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1000162c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar3 = *piVar1;
  puVar2 = (undefined4 *)(iVar3 * 0x20 + param_1);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar2 + -8;
    FUN_10001667(puVar2);
  }
  FUN_100cfd97(piVar1);
  return piVar1;
}

