/*
 * FUN_1002a622 at 1002a622
 * undefined __fastcall FUN_1002a622(int param_1)
 * Address ranges: 1002a622-1002a67d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a622(int param_1)

{
  uint uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x4bc) + 8))(*(int **)(param_1 + 0x4bc));
  FUN_1004138e(*(void **)(*(int *)(param_1 + 0x138) + 0x3180),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3184),*(int **)(param_1 + 0x4c0));
  FUN_10029086(param_1);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar1 * 0x104) != 0) {
      FUN_1002d7a9((int *)(param_1 + 0x13c + uVar1 * 0x104));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return;
}

