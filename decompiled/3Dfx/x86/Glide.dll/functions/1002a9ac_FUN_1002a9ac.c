/*
 * FUN_1002a9ac at 1002a9ac
 * undefined __fastcall FUN_1002a9ac(int param_1)
 * Address ranges: 1002a9ac-1002aa07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a9ac(int param_1)

{
  uint uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x4bc) + 8))(*(int **)(param_1 + 0x4bc));
  FUN_1004171e(*(void **)(*(int *)(param_1 + 0x138) + 0x3180),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3184),*(int **)(param_1 + 0x4c0));
  FUN_10029410(param_1);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar1 * 0x104) != 0) {
      FUN_1002db33((int *)(param_1 + 0x13c + uVar1 * 0x104));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return;
}

