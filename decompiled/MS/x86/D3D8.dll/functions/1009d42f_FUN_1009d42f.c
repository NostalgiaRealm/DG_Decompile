/*
 * FUN_1009d42f at 1009d42f
 * undefined __fastcall FUN_1009d42f(int param_1)
 * Address ranges: 1009d42f-1009d45e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009d42f(int param_1)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_1009e3fc(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x28),*(int *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x70),*(uint *)(param_1 + 0x74)
                 ,*(int **)(param_1 + 0x10),*(uint *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

