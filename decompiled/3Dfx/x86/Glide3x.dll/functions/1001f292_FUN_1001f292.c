/*
 * FUN_1001f292 at 1001f292
 * undefined __fastcall FUN_1001f292(int param_1)
 * Address ranges: 1001f292-1001f2d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001f292(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3308) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x208),0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x3308) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x20c),0);
  return;
}

