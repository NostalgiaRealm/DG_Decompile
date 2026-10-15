/*
 * FUN_1002d85a at 1002d85a
 * undefined4 __fastcall FUN_1002d85a(int param_1)
 * Address ranges: 1002d85a-1002d87e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002d85a(int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  if (uVar1 == *(uint *)(param_1 + 0x18)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    if (uVar1 == *(uint *)(param_1 + 0x1c)) {
      return uVar1 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

