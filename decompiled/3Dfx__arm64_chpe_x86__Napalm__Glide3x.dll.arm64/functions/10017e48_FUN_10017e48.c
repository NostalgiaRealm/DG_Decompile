/*
 * FUN_10017e48 at 10017e48
 * undefined FUN_10017e48(void)
 * Address ranges: 10017e48-10017f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10017e48(int param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(int *)(param_2 + 5) = *(int *)(param_1 + 0x2d68) - *(int *)(param_1 + 0x2d98);
  *(int *)(param_2 + 1) = *(int *)(param_1 + 0x2d48) - *(int *)(param_1 + 0x2d78);
  param_2[3] = *(longlong *)(param_1 + 0x2d58) - *(longlong *)(param_1 + 0x2d88);
  *(int *)(param_2 + 4) = *(int *)(param_1 + 0x2d60) - *(int *)(param_1 + 0x2d90);
  *(int *)((int)param_2 + 0x24) = *(int *)(param_1 + 0x2d64) - *(int *)(param_1 + 0x2d94);
  return param_2;
}

