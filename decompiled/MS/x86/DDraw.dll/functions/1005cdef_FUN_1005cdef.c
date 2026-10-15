/*
 * FUN_1005cdef at 1005cdef
 * undefined __fastcall FUN_1005cdef(int param_1)
 * Address ranges: 1005cdef-1005ce0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005cdef(int param_1)

{
  if (*(int *)(param_1 + -0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

