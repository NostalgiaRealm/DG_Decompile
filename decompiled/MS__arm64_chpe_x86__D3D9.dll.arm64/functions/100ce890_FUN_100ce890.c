/*
 * FUN_100ce890 at 100ce890
 * undefined FUN_100ce890(void)
 * Address ranges: 100ce890-100ce8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_100ce890(int param_1,undefined8 *param_2,int param_3)

{
  param_1 = param_1 + param_3 * 0xc18;
  *param_2 = *(undefined8 *)(param_1 + 0x10ca8);
  param_2[1] = *(undefined8 *)(param_1 + 0x10cb0);
  return param_2;
}

