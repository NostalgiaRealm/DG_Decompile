/*
 * FUN_10009421 at 10009421
 * undefined __fastcall FUN_10009421(int param_1)
 * Address ranges: 10009421-1000943e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10009421(int param_1)

{
  if (*(int *)(param_1 + 0xcf00) != 0) {
    FUN_100477cb(*(int *)(param_1 + 0xcf00));
    *(undefined4 *)(param_1 + 0xcf00) = 0;
  }
  return;
}

