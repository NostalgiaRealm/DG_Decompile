/*
 * FUN_1002b691 at 1002b691
 * undefined __fastcall FUN_1002b691(int param_1)
 * Address ranges: 1002b691-1002b6c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b691(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x54),0);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)(param_1 + 0x58),0);
  return;
}

