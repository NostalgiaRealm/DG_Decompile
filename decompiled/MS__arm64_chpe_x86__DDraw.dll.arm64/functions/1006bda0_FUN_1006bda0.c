/*
 * FUN_1006bda0 at 1006bda0
 * undefined FUN_1006bda0(void)
 * Address ranges: 1006bda0-1006bdff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1006bda0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  (*(code *)PTR_FUN_100ba114)(puVar1);
  param_1[4] = *puVar1;
  return param_1;
}

