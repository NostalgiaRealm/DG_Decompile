/*
 * FUN_1006eaf4 at 1006eaf4
 * undefined __cdecl FUN_1006eaf4(int * param_1)
 * Address ranges: 1006eaf4-1006eb36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1006eaf4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPRECT lprcDst;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[6];
  (**(code **)(*piVar1 + 0xc))(iVar2,(RECT *)(param_1 + 2));
  if ((char)iVar3 == '\0') {
    lprcDst = (LPRECT)(piVar1[0x26] + 0x10 + iVar2 * 0x20);
    UnionRect(lprcDst,lprcDst,(RECT *)(param_1 + 2));
  }
  return;
}

