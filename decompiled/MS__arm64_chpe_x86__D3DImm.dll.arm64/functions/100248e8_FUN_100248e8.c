/*
 * FUN_100248e8 at 100248e8
 * undefined FUN_100248e8(void)
 * Address ranges: 100248e8-1002493f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100248e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1d54) + 0x1304);
  iVar2 = *(int *)(iVar1 + 0x634) + -1;
  *(int *)(iVar1 + 0x634) = iVar2;
  if ((iVar2 == 0) && (*(int *)(iVar1 + 0x630) <= *(int *)(iVar1 + 0x624))) {
    FUN_10071e00(iVar1 + 4,0);
    return;
  }
  return;
}

