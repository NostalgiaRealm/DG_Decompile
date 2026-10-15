/*
 * FUN_18000e700 at 18000e700
 * undefined __cdecl FUN_18000e700(longlong param_1)
 * Address ranges: 18000e700-18000e737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e700(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
  iVar1 = *(int *)(lVar2 + 0x684) + -1;
  *(int *)(lVar2 + 0x684) = iVar1;
  if ((iVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_18004e830(lVar2 + 8,0);
    return;
  }
  return;
}

