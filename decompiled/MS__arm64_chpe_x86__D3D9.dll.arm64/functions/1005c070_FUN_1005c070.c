/*
 * FUN_1005c070 at 1005c070
 * undefined FUN_1005c070(void)
 * Address ranges: 1005c070-1005c0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c070(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
  iVar2 = *(int *)(iVar1 + 0x634) + -1;
  *(int *)(iVar1 + 0x634) = iVar2;
  if ((iVar2 == 0) && (*(int *)(iVar1 + 0x630) <= *(int *)(iVar1 + 0x624))) {
    FUN_101138b0(iVar1 + 4,0);
    return;
  }
  return;
}

