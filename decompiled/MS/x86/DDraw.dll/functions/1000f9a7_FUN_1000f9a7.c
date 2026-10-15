/*
 * FUN_1000f9a7 at 1000f9a7
 * undefined __fastcall FUN_1000f9a7(int param_1)
 * Address ranges: 1000f9a7-1000f9fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f9a7(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xcf00) + *(int *)(param_1 + 0x14) * 0x16c0 + 0x6c0;
  *(int *)(param_1 + 0xcf04) = iVar1;
  local_8 = *(int *)(param_1 + 0xd028);
  FUN_1004ee0b((void *)(iVar1 + 0x1640),&local_8);
  FUN_10060be1(*(LPVOID *)(param_1 + 0xd028));
  *(undefined4 *)(param_1 + 0xd028) = 0;
  return;
}

