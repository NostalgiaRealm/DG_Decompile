/*
 * FUN_1003dee6 at 1003dee6
 * int * __fastcall FUN_1003dee6(int param_1)
 * Address ranges: 1003dee6-1003df1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1003dee6(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar2 = *piVar1;
  iVar3 = iVar2 * 0x1c + param_1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar3 = iVar3 + -0x1c;
    FUN_1003d7ac(iVar3);
  }
  FUN_10060c0c(piVar1);
  return piVar1;
}

