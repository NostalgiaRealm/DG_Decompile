/*
 * FUN_1002b624 at 1002b624
 * int * __fastcall FUN_1002b624(int param_1)
 * Address ranges: 1002b624-1002b65e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1002b624(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar3 = *piVar1;
  puVar2 = (undefined4 *)(iVar3 * 0x20 + param_1);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar2 + -8;
    FUN_1002b730(puVar2);
  }
  FUN_10060c0c(piVar1);
  return piVar1;
}

