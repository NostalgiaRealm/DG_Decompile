/*
 * FUN_1007bf1e at 1007bf1e
 * undefined __fastcall FUN_1007bf1e(int param_1)
 * Address ranges: 1007bf1e-1007bf53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007bf1e(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 8))(*(int **)(param_1 + 0x38));
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

