/*
 * FUN_10040198 at 10040198
 * undefined __stdcall FUN_10040198(int param_1)
 * Address ranges: 10040198-100401ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040198(int param_1)

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

