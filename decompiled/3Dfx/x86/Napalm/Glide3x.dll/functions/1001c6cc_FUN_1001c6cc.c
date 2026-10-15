/*
 * FUN_1001c6cc at 1001c6cc
 * undefined __fastcall FUN_1001c6cc(int param_1)
 * Address ranges: 1001c6cc-1001c714
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c6cc(int param_1)

{
  uint uVar1;
  int local_8;
  
  uVar1 = 0;
  do {
    local_8 = *(int *)(param_1 + 0x1f8 + uVar1 * 4);
    FUN_1003dfd1((void *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3688) + 0x1640),&local_8);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  FUN_10041677(2,param_1 + 0x1f8);
  return;
}

