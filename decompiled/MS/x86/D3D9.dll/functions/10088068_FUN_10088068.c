/*
 * FUN_10088068 at 10088068
 * undefined __fastcall FUN_10088068(int param_1)
 * Address ranges: 10088068-1008809a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10088068(int param_1)

{
  FUN_100cef50(*(int *)(param_1 + -0x80) + 0x1880 + *(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0)
  ;
  FUN_1008eefb(*(void **)(param_1 + 0xc),*(int **)(param_1 + 0x24),*(HMONITOR *)(param_1 + 0x14),
               *(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44));
  return;
}

