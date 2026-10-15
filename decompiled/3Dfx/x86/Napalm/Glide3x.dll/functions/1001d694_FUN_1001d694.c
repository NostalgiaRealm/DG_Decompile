/*
 * FUN_1001d694 at 1001d694
 * undefined __fastcall FUN_1001d694(int param_1)
 * Address ranges: 1001d694-1001d70d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001d694(int param_1)

{
  FUN_1001cd53(param_1);
  FUN_10041587(*(void **)(param_1 + 0xa4),*(int **)(param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_10042298(*(void **)(*(int *)(param_1 + 0xa8) + 0x15e0),*(int **)(param_1 + 0xd4),1,(int *)0x0,
               0,0);
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  if (*(int **)(param_1 + 0xd0) != (int *)0xffffffff) {
    FUN_10042298(*(void **)(*(int *)(param_1 + 0xa8) + 0x15d8),*(int **)(param_1 + 0xd0),1,
                 (int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

