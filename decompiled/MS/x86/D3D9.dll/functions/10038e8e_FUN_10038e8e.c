/*
 * FUN_10038e8e at 10038e8e
 * undefined __fastcall FUN_10038e8e(int param_1)
 * Address ranges: 10038e8e-10038ee0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10038e8e(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_100bdcba(*(void **)(param_1 + 0xc4),*(int **)(param_1 + 0xb4 + uVar1 * 4));
    *(undefined4 *)(param_1 + 0xb4 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  FUN_100b9fca(*(void **)(*(int *)(param_1 + 0xcc) + 0x15d8),*(int **)(param_1 + 0xc0),3,(int *)0x0,
               0,0);
  return;
}

