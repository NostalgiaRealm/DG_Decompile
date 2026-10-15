/*
 * FUN_100021b0 at 100021b0
 * undefined FUN_100021b0(void)
 * Address ranges: 100021b0-10002213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100021b0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x24);
  param_2[1] = *(undefined4 *)(param_1 + -0x20);
  param_2[2] = 1;
  param_2[3] = (uint)*(ushort *)(param_1 + -0x40);
  param_2[4] = *(undefined4 *)(&DAT_1012ada0 + *(int *)(param_1 + -0x14) * 4);
  return param_2;
}

