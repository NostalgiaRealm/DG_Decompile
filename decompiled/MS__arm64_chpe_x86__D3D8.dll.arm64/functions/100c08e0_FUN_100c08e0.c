/*
 * FUN_100c08e0 at 100c08e0
 * undefined FUN_100c08e0(void)
 * Address ranges: 100c08e0-100c093f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100c08e0(int param_1,undefined4 *param_2)

{
  *param_2 = 100;
  param_2[5] = *(undefined4 *)(param_1 + -0x30);
  param_2[3] = *(undefined4 *)(param_1 + -0x28);
  param_2[4] = *(undefined4 *)(param_1 + -0x58);
  param_2[1] = 6;
  param_2[2] = *(undefined4 *)(param_1 + -0x34);
  return 0;
}

