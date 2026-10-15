/*
 * FUN_10002200 at 10002200
 * undefined FUN_10002200(void)
 * Address ranges: 10002200-10002263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10002200(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x24);
  param_2[1] = *(undefined4 *)(param_1 + -0x20);
  param_2[2] = 1;
  param_2[3] = (uint)*(ushort *)(param_1 + -0x40);
  param_2[4] = *(undefined4 *)(&DAT_101604a0 + *(int *)(param_1 + -0x14) * 4);
  return param_2;
}

