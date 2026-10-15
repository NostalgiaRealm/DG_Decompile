/*
 * FUN_1000604e at 1000604e
 * undefined __stdcall FUN_1000604e(int * param_1)
 * Address ranges: 1000604e-1000606c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000604e(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  (**(code **)(*param_1 + 0x1c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

