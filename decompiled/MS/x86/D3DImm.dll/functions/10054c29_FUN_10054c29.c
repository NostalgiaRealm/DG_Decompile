/*
 * FUN_10054c29 at 10054c29
 * undefined __fastcall FUN_10054c29(int param_1)
 * Address ranges: 10054c29-10054c44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10054c29(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

