/*
 * FUN_100bfa07 at 100bfa07
 * undefined __fastcall FUN_100bfa07(int param_1)
 * Address ranges: 100bfa07-100bfa36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100bfa07(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_100c09c4(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

