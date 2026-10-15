/*
 * FUN_10017968 at 10017968
 * undefined FUN_10017968(void)
 * Address ranges: 10017968-10017a43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10017968(int param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)((int)param_2 + 0xc) = 0;
  *(undefined4 *)((int)param_2 + 0x14) = 0;
  *(undefined4 *)((int)param_2 + 0x2c) = 0;
  *(int *)(param_2 + 5) = *(int *)(param_1 + 0x2c20) - *(int *)(param_1 + 0x2c50);
  *(int *)(param_2 + 1) = *(int *)(param_1 + 0x2c00) - *(int *)(param_1 + 0x2c30);
  param_2[3] = *(longlong *)(param_1 + 0x2c10) - *(longlong *)(param_1 + 0x2c40);
  *(int *)(param_2 + 4) = *(int *)(param_1 + 0x2c18) - *(int *)(param_1 + 0x2c48);
  *(int *)((int)param_2 + 0x24) = *(int *)(param_1 + 0x2c1c) - *(int *)(param_1 + 0x2c4c);
  return param_2;
}

