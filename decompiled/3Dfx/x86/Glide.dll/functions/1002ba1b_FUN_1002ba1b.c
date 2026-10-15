/*
 * FUN_1002ba1b at 1002ba1b
 * undefined __fastcall FUN_1002ba1b(int param_1)
 * Address ranges: 1002ba1b-1002ba4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ba1b(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x54),0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x58),0);
  return;
}

