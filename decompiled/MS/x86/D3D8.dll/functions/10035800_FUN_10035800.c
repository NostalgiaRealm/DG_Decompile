/*
 * FUN_10035800 at 10035800
 * undefined __fastcall FUN_10035800(int param_1)
 * Address ranges: 10035800-1003583e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10035800(int param_1)

{
  if (*(int **)(param_1 + 0xdbe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdbe4) + 4))
              (*(undefined4 *)(param_1 + 0xdbf8),*(undefined4 *)(param_1 + 0xdc08),0);
  }
  if (*(int **)(param_1 + 0xdbf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdbf4) + 4))
              (*(undefined4 *)(param_1 + 0xdc18),*(undefined4 *)(param_1 + 0xdc1c),0);
  }
  return;
}

