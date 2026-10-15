/*
 * FUN_1001b096 at 1001b096
 * undefined __cdecl FUN_1001b096(int * param_1)
 * Address ranges: 1001b096-1001b0d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1001b096(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPRECT lprcDst;
  
  piVar1 = (int *)*param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[6];
  (**(code **)(*piVar1 + 8))(iVar2,(RECT *)(param_1 + 2));
  if ((char)iVar3 == '\0') {
    lprcDst = (LPRECT)(piVar1[0x26] + 0x10 + iVar2 * 0x20);
    UnionRect(lprcDst,lprcDst,(RECT *)(param_1 + 2));
  }
  return;
}

