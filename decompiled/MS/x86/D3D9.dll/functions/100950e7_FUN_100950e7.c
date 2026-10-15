/*
 * FUN_100950e7 at 100950e7
 * undefined4 __stdcall FUN_100950e7(int param_1, undefined4 * param_2)
 * Address ranges: 100950e7-10095125
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100950e7(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760868;
  if (*(char *)(param_1 + -0x17) == '\0') {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x5bd0) == 0) {
      *param_2 = 0;
      uVar1 = (**(code **)(**(int **)(param_1 + -0x66a0) + 0x80))(param_2);
    }
    else {
      *param_2 = 1;
    }
  }
  return uVar1;
}

