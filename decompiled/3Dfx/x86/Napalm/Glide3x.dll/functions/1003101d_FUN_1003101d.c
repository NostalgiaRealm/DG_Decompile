/*
 * FUN_1003101d at 1003101d
 * int * __fastcall FUN_1003101d(int param_1)
 * Address ranges: 1003101d-10031053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1003101d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar2 = *piVar1;
  iVar3 = iVar2 * 0x1c + param_1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar3 = iVar3 + -0x1c;
    FUN_100308e3(iVar3);
  }
  FUN_100556b1(piVar1);
  return piVar1;
}

