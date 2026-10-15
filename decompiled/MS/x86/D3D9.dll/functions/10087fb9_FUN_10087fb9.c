/*
 * FUN_10087fb9 at 10087fb9
 * undefined __fastcall FUN_10087fb9(int param_1)
 * Address ranges: 10087fb9-10087fe8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10087fb9(int param_1)

{
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_100b8c84(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_10081bba((void *)(param_1 + 0x48),1,1);
  return;
}

