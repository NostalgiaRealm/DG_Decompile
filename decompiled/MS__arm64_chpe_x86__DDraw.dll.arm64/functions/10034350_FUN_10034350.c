/*
 * FUN_10034350 at 10034350
 * undefined FUN_10034350(void)
 * Address ranges: 10034350-100343e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10034350(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_100b246c;
  param_1[4] = &PTR_FUN_100b2418;
  puVar1 = (undefined8 *)(param_1 + 0x59);
  param_1[0xe] = &PTR_FUN_100b23f4;
  param_1[0x55] = &PTR_FUN_100b23f0;
  FUN_100914d0(*(undefined4 *)puVar1);
  *puVar1 = 0;
  param_1[0x5b] = 0;
  FUN_100914d0(param_1[0x5c]);
  FUN_100914d0(*(undefined4 *)puVar1);
  FUN_100013a0(param_1 + 0x56);
  FUN_100379a0(param_1);
  return;
}

