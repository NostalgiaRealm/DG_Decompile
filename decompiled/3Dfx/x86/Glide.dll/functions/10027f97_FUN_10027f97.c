/*
 * FUN_10027f97 at 10027f97
 * undefined __fastcall FUN_10027f97(int param_1)
 * Address ranges: 10027f97-10028010
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027f97(int param_1)

{
  FUN_10027659(param_1);
  FUN_1003ba29(*(void **)(param_1 + 0xa4),*(int **)(param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_1003c73a(*(void **)(*(int *)(param_1 + 0xa8) + 0x15e0),*(int **)(param_1 + 0xd4),1,(int *)0x0,
               0,0);
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  if (*(int **)(param_1 + 0xd0) != (int *)0xffffffff) {
    FUN_1003c73a(*(void **)(*(int *)(param_1 + 0xa8) + 0x15d8),*(int **)(param_1 + 0xd0),1,
                 (int *)0x0,0,0);
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  }
  return;
}

