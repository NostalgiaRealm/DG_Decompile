/*
 * FUN_1001b7d8 at 1001b7d8
 * undefined __fastcall FUN_1001b7d8(int param_1)
 * Address ranges: 1001b7d8-1001b80a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b7d8(int param_1)

{
  FUN_100600a0(*(int *)(param_1 + -0x80) + 0x1880 + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0)
  ;
  FUN_10021cd7(*(void **)(param_1 + 0xc),*(int **)(param_1 + 0x24),*(HMONITOR *)(param_1 + 0x14),
               *(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44));
  return;
}

