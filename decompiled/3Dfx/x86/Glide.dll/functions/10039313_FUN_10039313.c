/*
 * FUN_10039313 at 10039313
 * undefined __fastcall FUN_10039313(int param_1)
 * Address ranges: 10039313-10039342
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039313(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1004a424(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

