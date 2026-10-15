/*
 * FUN_1002f1b2 at 1002f1b2
 * undefined __fastcall FUN_1002f1b2(int param_1)
 * Address ranges: 1002f1b2-1002f204
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002f1b2(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_1009b6e2(*(void **)(param_1 + 0xc4),*(int **)(param_1 + 0xb4 + uVar1 * 4));
    *(undefined4 *)(param_1 + 0xb4 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  FUN_10097999(*(void **)(*(int *)(param_1 + 0xcc) + 0x15d8),*(int **)(param_1 + 0xc0),3,(int *)0x0,
               0,0);
  return;
}

