/*
 * FUN_100388a0 at 100388a0
 * undefined FUN_100388a0(void)
 * Address ranges: 100388a0-100388c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100388a0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
  *(ulonglong *)(&DAT_100be348 + iVar1) = *(longlong *)(&DAT_100be348 + iVar1) + (ulonglong)param_2;
  return;
}

