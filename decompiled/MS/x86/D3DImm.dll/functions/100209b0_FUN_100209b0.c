/*
 * FUN_100209b0 at 100209b0
 * undefined __fastcall FUN_100209b0(int param_1)
 * Address ranges: 100209b0-100209ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100209b0(int param_1)

{
  if (*(int **)(param_1 + 0x1f6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1f6c) + 4))
              (*(undefined4 *)(param_1 + 0x1f80),*(undefined4 *)(param_1 + 0x1f90),0);
  }
  if (*(int **)(param_1 + 0x1f7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1f7c) + 4))
              (*(undefined4 *)(param_1 + 0x1fa0),*(undefined4 *)(param_1 + 0x1fa4),0);
  }
  return;
}

