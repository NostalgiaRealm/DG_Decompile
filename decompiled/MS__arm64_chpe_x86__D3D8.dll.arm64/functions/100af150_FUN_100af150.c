/*
 * FUN_100af150 at 100af150
 * undefined FUN_100af150(void)
 * Address ranges: 100af150-100af1cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100af150(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_100014d0(param_1,param_2);
  *(undefined8 *)(param_1 + 0x1d) = 0;
  puVar1 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x1c;
  }
  param_1[0x1f] = puVar1;
  *param_1 = &DAT_1012a2b4;
  param_1[0x18] = &PTR_FUN_10129290;
  param_1[0x1c] = &PTR_FUN_1012a274;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  return param_1;
}

