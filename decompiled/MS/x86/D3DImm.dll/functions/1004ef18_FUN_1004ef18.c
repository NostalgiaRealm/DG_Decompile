/*
 * FUN_1004ef18 at 1004ef18
 * undefined __stdcall FUN_1004ef18(int param_1)
 * Address ranges: 1004ef18-1004ef7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ef18(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xd8c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xd88);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xd88) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xd94);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xd94) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xd90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xd90) = 0;
  }
  return;
}

