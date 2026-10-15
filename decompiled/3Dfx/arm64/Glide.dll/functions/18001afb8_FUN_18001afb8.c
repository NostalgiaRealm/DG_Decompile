/*
 * FUN_18001afb8 at 18001afb8
 * undefined __cdecl FUN_18001afb8(longlong param_1)
 * Address ranges: 18001afb8-18001afef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001afb8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  iVar1 = *(int *)(lVar2 + 0x684) + -1;
  *(int *)(lVar2 + 0x684) = iVar1;
  if ((iVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_18004baf0(lVar2 + 8,0);
    return;
  }
  return;
}

