/*
 * FUN_1001abe6 at 1001abe6
 * undefined __fastcall FUN_1001abe6(int param_1)
 * Address ranges: 1001abe6-1001ac3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001abe6(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd0) * 0x16c0 + 0x6c0;
  *(int *)(param_1 + 0xd4) = iVar1;
  local_8 = *(int *)(param_1 + 0xb4);
  FUN_10054293((void *)(iVar1 + 0x1640),&local_8);
  FUN_1005c76c(*(LPVOID *)(param_1 + 0xb4));
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

