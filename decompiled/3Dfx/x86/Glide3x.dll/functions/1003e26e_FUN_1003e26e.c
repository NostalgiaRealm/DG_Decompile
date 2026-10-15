/*
 * FUN_1003e26e at 1003e26e
 * undefined __stdcall FUN_1003e26e(uint param_1, int param_2)
 * Address ranges: 1003e26e-1003e29c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e26e(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      piVar1 = *(int **)(param_2 + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(param_2 + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_1);
  }
  return;
}

