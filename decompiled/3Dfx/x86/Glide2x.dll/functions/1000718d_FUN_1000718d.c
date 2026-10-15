/*
 * FUN_1000718d at 1000718d
 * int * __fastcall FUN_1000718d(int param_1)
 * Address ranges: 1000718d-100071c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1000718d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -4);
  iVar2 = *piVar1;
  iVar3 = iVar2 * 0x1c + param_1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    iVar3 = iVar3 + -0x1c;
    FUN_10006a53(iVar3);
  }
  FUN_1004f651(piVar1);
  return piVar1;
}

