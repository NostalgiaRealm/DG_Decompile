/*
 * FUN_10005800 at 10005800
 * undefined __stdcall FUN_10005800(int * param_1)
 * Address ranges: 10005800-1000581e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005800(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  (**(code **)(*param_1 + 0x1c))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}

