/*
 * FUN_100022a0 at 100022a0
 * undefined FUN_100022a0(void)
 * Address ranges: 100022a0-10002307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100022a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x28);
  param_2[1] = *(undefined4 *)(param_1 + -0x24);
  param_2[2] = *(undefined4 *)(param_1 + -0x20);
  param_2[3] = (uint)*(ushort *)(param_1 + -0x90);
  param_2[4] = *(undefined4 *)(&DAT_101604a0 + *(int *)(param_1 + -0x18) * 4);
  return param_2;
}

