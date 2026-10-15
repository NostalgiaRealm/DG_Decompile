/*
 * FUN_10067e40 at 10067e40
 * undefined FUN_10067e40(void)
 * Address ranges: 10067e40-10067e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10067e40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  (*(code *)PTR_FUN_1009d0b0)(puVar1);
  param_1[4] = *puVar1;
  return param_1;
}

