/*
 * FUN_1004c848 at 1004c848
 * undefined FUN_1004c848(void)
 * Address ranges: 1004c848-1004c89f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c848(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304);
  iVar2 = *(int *)(iVar1 + 0x634) + -1;
  *(int *)(iVar1 + 0x634) = iVar2;
  if ((iVar2 == 0) && (*(int *)(iVar1 + 0x630) <= *(int *)(iVar1 + 0x624))) {
    FUN_100e1060(iVar1 + 4,0);
    return;
  }
  return;
}

