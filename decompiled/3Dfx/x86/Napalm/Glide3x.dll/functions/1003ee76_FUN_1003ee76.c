/*
 * FUN_1003ee76 at 1003ee76
 * undefined __fastcall FUN_1003ee76(int param_1)
 * Address ranges: 1003ee76-1003eea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003ee76(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1004ff85(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

