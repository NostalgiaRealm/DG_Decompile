/*
 * FUN_1003ba68 at 1003ba68
 * undefined __fastcall FUN_1003ba68(int param_1)
 * Address ranges: 1003ba68-1003ba97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003ba68(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1004cb7c(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

