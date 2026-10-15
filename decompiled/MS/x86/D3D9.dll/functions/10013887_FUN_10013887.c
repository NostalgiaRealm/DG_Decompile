/*
 * FUN_10013887 at 10013887
 * int __fastcall FUN_10013887(int param_1)
 * Address ranges: 10013887-100138c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10013887(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = FUN_10012477(*(int *)(param_1 + 4),*(uint *)(param_1 + 8),*(int *)(param_1 + 0x4c));
  iVar1 = iVar1 * (iVar2 + 1);
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = FUN_10012477(*(int *)(param_1 + 4),*(uint *)(param_1 + 8),*(int *)(param_1 + 0x50));
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

