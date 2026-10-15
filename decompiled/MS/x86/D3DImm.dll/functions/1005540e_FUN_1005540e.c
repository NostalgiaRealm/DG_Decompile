/*
 * FUN_1005540e at 1005540e
 * undefined __fastcall FUN_1005540e(int param_1)
 * Address ranges: 1005540e-1005543d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005540e(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_10058fe6(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

