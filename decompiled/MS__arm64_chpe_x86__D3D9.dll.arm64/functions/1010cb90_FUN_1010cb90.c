/*
 * FUN_1010cb90 at 1010cb90
 * undefined FUN_1010cb90(void)
 * Address ranges: 1010cb90-1010cbef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1010cb90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  (*(code *)PTR_FUN_1016c0e4)(puVar1);
  param_1[4] = *puVar1;
  return param_1;
}

