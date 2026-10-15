/*
 * FUN_10027c0d at 10027c0d
 * undefined __fastcall FUN_10027c0d(int param_1)
 * Address ranges: 10027c0d-10027c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027c0d(int param_1)

{
  FUN_100272cf(param_1);
  FUN_1003b699(*(void **)(param_1 + 0xa4),*(int **)(param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_1003c3aa(*(void **)(*(int *)(param_1 + 0xa8) + 0x15e0),*(int **)(param_1 + 0xd4),1,(int *)0x0,
               0,0);
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  if (*(int **)(param_1 + 0xd0) != (int *)0xffffffff) {
    FUN_1003c3aa(*(void **)(*(int *)(param_1 + 0xa8) + 0x15d8),*(int **)(param_1 + 0xd0),1,
                 (int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

