/*
 * FUN_1001b4e8 at 1001b4e8
 * undefined __fastcall FUN_1001b4e8(int param_1)
 * Address ranges: 1001b4e8-1001b561
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b4e8(int param_1)

{
  FUN_1001abaa(param_1);
  FUN_1003e17e(*(void **)(param_1 + 0xa4),*(int **)(param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_1003ee8f(*(void **)(*(int *)(param_1 + 0xa8) + 0x15e0),*(int **)(param_1 + 0xd4),1,(int *)0x0,
               0,0);
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  if (*(int **)(param_1 + 0xd0) != (int *)0xffffffff) {
    FUN_1003ee8f(*(void **)(*(int *)(param_1 + 0xa8) + 0x15d8),*(int **)(param_1 + 0xd0),1,
                 (int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

