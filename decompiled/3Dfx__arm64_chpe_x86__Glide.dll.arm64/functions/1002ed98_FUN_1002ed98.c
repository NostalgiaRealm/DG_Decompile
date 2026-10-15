/*
 * FUN_1002ed98 at 1002ed98
 * undefined FUN_1002ed98(void)
 * Address ranges: 1002ed98-1002ee73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1002ed98(int param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(int *)(param_2 + 5) = *(int *)(param_1 + 0x2b80) - *(int *)(param_1 + 0x2bb0);
  *(int *)(param_2 + 1) = *(int *)(param_1 + 0x2b60) - *(int *)(param_1 + 0x2b90);
  param_2[3] = *(longlong *)(param_1 + 0x2b70) - *(longlong *)(param_1 + 0x2ba0);
  *(int *)(param_2 + 4) = *(int *)(param_1 + 0x2b78) - *(int *)(param_1 + 0x2ba8);
  *(int *)((int)param_2 + 0x24) = *(int *)(param_1 + 0x2b7c) - *(int *)(param_1 + 0x2bac);
  return param_2;
}

