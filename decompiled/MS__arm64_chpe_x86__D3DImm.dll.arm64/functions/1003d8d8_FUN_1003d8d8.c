/*
 * FUN_1003d8d8 at 1003d8d8
 * undefined FUN_1003d8d8(void)
 * Address ranges: 1003d8d8-1003d91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_1003d8d8(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10079948(param_3,4,param_5);
  *(undefined1 *)(param_2 + 1) = param_4;
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  return param_2;
}

