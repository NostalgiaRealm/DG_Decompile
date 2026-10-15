/*
 * FUN_1004b8e0 at 1004b8e0
 * undefined FUN_1004b8e0(void)
 * Address ranges: 1004b8e0-1004b947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b8e0(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &DAT_1009c940;
  param_1[0x5f6] = &PTR_FUN_1009c93c;
  puVar1 = (undefined8 *)(param_1 + 0x5f7);
  FUN_10081dc0(*(undefined4 *)puVar1);
  *puVar1 = 0;
  param_1[0x5f9] = 0;
  FUN_10001410(puVar1);
  FUN_10050b80(param_1);
  return;
}

