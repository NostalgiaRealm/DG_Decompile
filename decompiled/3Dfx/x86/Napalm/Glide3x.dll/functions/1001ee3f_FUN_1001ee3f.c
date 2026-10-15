/*
 * FUN_1001ee3f at 1001ee3f
 * undefined __fastcall FUN_1001ee3f(int param_1)
 * Address ranges: 1001ee3f-1001ee7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001ee3f(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x208),0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x20c),0);
  return;
}

