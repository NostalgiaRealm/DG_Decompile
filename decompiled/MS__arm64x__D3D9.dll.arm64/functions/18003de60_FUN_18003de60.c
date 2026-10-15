/*
 * FUN_18003de60 at 18003de60
 * undefined FUN_18003de60(void)
 * Address ranges: 18003de60-18003de9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003de60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  iVar1 = *(int *)(lVar2 + 0x684) + -1;
  *(int *)(lVar2 + 0x684) = iVar1;
  if ((iVar1 == 0) && (*(int *)(lVar2 + 0x680) <= *(int *)(lVar2 + 0x678))) {
    FUN_1800e8548(lVar2 + 8,0);
    return;
  }
  return;
}

