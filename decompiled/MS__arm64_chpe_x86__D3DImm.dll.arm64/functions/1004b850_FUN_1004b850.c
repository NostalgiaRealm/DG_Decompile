/*
 * FUN_1004b850 at 1004b850
 * undefined FUN_1004b850(void)
 * Address ranges: 1004b850-1004b893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004b850(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10081da0(0x6000);
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = 0x80;
  *(undefined1 *)(param_1 + 3) = param_2;
  return param_1;
}

