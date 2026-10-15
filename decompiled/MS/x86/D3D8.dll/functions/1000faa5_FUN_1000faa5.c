/*
 * FUN_1000faa5 at 1000faa5
 * int __fastcall FUN_1000faa5(int param_1)
 * Address ranges: 1000faa5-1000fade
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000faa5(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = FUN_1000e6ee(*(int *)(param_1 + 4),*(uint *)(param_1 + 8),*(int *)(param_1 + 0x4c));
  iVar1 = iVar1 * (iVar2 + 1);
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = FUN_1000e6ee(*(int *)(param_1 + 4),*(uint *)(param_1 + 8),*(int *)(param_1 + 0x50));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

