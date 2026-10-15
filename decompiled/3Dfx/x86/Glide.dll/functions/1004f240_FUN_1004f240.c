/*
 * FUN_1004f240 at 1004f240
 * undefined __fastcall FUN_1004f240(int param_1)
 * Address ranges: 1004f240-1004f25b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004f240(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

