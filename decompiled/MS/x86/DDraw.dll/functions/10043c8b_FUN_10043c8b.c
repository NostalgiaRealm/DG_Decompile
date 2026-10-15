/*
 * FUN_10043c8b at 10043c8b
 * undefined __fastcall FUN_10043c8b(int param_1)
 * Address ranges: 10043c8b-10043cb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10043c8b(int param_1)

{
  if (*(int **)(param_1 + 0x3a8) != (int *)0x0) {
    FUN_100461da(*(int **)(param_1 + 0x3a8));
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    FUN_10044254(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

