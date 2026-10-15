/*
 * FUN_10019897 at 10019897
 * undefined __fastcall FUN_10019897(int param_1)
 * Address ranges: 10019897-100198b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10019897(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1004fa1b(*(void **)(param_1 + 4),*(int *)(param_1 + 0x10),*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

