/*
 * FUN_100e5480 at 100e5480
 * undefined FUN_100e5480(void)
 * Address ranges: 100e5480-100e5497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100e5480(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x6cc);
  param_2[1] = *(undefined8 *)(param_1 + 0x6d4);
  *param_2 = uVar1;
  return 0;
}

