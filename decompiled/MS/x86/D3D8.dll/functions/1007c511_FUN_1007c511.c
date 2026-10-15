/*
 * FUN_1007c511 at 1007c511
 * undefined4 __stdcall FUN_1007c511(int param_1, undefined4 * param_2)
 * Address ranges: 1007c511-1007c54c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c511(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760868;
  if (*(char *)(param_1 + -0x23) == '\0') {
    uVar1 = 0;
    if (*(int *)(param_1 + 100) == 0) {
      *param_2 = 0;
      uVar1 = (**(code **)(**(int **)(param_1 + -0x58cc) + 0x80))(param_2);
    }
    else {
      *param_2 = 1;
    }
  }
  return uVar1;
}

