/*
 * FUN_10071180 at 10071180
 * undefined FUN_10071180(void)
 * Address ranges: 10071180-100711df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_10071180(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 3;
  *param_1 = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  (*(code *)PTR_FUN_100a80b0)(puVar1);
  param_1[4] = *puVar1;
  return param_1;
}

