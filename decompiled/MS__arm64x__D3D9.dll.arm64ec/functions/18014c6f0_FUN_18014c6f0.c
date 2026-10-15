/*
 * FUN_18014c6f0 at 18014c6f0
 * undefined FUN_18014c6f0(void)
 * Address ranges: 18014c6f0-18014c72b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014c6f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  iVar1 = *(int *)(lVar2 + 0x684) + -1;
  *(int *)(lVar2 + 0x684) = iVar1;
  if ((iVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_180207560(lVar2 + 8,0);
    return;
  }
  return;
}

