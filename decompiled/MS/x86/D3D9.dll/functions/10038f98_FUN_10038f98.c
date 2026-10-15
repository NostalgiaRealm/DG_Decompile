/*
 * FUN_10038f98 at 10038f98
 * undefined __fastcall FUN_10038f98(int param_1)
 * Address ranges: 10038f98-10038ff0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10038f98(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 200) * 0x16c0 + 0x6c0;
  *(int *)(param_1 + 0xcc) = iVar1;
  local_8 = *(int *)(param_1 + 0xac);
  FUN_100bee69((void *)(iVar1 + 0x1640),&local_8);
  FUN_100cfd6c(*(LPVOID *)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}

