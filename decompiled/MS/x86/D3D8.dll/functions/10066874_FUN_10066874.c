/*
 * FUN_10066874 at 10066874
 * undefined __fastcall FUN_10066874(int param_1)
 * Address ranges: 10066874-100668c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10066874(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x1cf00) + *(int *)(param_1 + 0x14) * 0x16c0 + 0x6c0;
  *(int *)(param_1 + 0x1cf04) = iVar1;
  local_8 = *(int *)(param_1 + 0x1d028);
  FUN_1009c891((void *)(iVar1 + 0x1640),&local_8);
  FUN_100ad48c(*(LPVOID *)(param_1 + 0x1d028));
  *(undefined4 *)(param_1 + 0x1d028) = 0;
  return;
}

