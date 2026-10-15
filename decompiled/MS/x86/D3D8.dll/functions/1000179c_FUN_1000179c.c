/*
 * FUN_1000179c at 1000179c
 * int * __fastcall FUN_1000179c(int param_1)
 * Address ranges: 1000179c-100017d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1000179c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar3 = *piVar1;
  puVar2 = (undefined4 *)(iVar3 * 0x20 + param_1);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar2 + -8;
    FUN_100017d7(puVar2);
  }
  FUN_100ad4b7(piVar1);
  return piVar1;
}

