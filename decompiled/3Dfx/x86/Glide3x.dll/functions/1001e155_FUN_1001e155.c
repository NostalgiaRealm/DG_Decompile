/*
 * FUN_1001e155 at 1001e155
 * undefined __fastcall FUN_1001e155(int param_1)
 * Address ranges: 1001e155-1001e1b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001e155(int param_1)

{
  uint uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x8cc) + 8))(*(int **)(param_1 + 0x8cc));
  FUN_10043e76(*(void **)(*(int *)(param_1 + 0x138) + 0x3300),
               *(int *)(*(int *)(param_1 + 0x138) + 0x3304),*(int **)(param_1 + 0x8d0));
  FUN_1001cb79(param_1);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x1e8 + uVar1 * 0x104) != 0) {
      FUN_100210ec((int *)(param_1 + 0x13c + uVar1 * 0x104));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

