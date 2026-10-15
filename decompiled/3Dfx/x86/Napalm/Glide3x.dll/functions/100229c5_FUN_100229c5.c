/*
 * FUN_100229c5 at 100229c5
 * undefined __fastcall FUN_100229c5(int param_1)
 * Address ranges: 100229c5-10022a20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100229c5(int param_1)

{
  uint uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x8cc) + 8))(*(int **)(param_1 + 0x8cc));
  FUN_1004727f(*(void **)(*(int *)(param_1 + 0x138) + 0x3680),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3684),*(int **)(param_1 + 0x8d0));
  FUN_100213c9(param_1);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar1 * 0x104) != 0) {
      FUN_1002126a((int *)(param_1 + 0x13c + uVar1 * 0x104));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

