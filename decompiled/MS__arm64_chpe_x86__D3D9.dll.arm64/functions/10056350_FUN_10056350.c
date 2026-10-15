/*
 * FUN_10056350 at 10056350
 * undefined FUN_10056350(void)
 * Address ranges: 10056350-1005637f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_10056350(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(int *)(param_1 + 0xf6bc) + 0x13);
  *(undefined2 *)(param_2 + 1) = 0x101;
  return param_2;
}

