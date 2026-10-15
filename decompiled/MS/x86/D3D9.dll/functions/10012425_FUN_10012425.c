/*
 * FUN_10012425 at 10012425
 * undefined __fastcall FUN_10012425(int param_1)
 * Address ranges: 10012425-1001244f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012425(int param_1)

{
  FUN_1002dc5a(*(undefined4 **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_100cfe2d(*(LPVOID *)(*(int *)(param_1 + 0x24) + -4));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

