/*
 * FUN_100517d0 at 100517d0
 * undefined FUN_100517d0(void)
 * Address ranges: 100517d0-10051847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100517d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1015eb74;
  FUN_10051018(param_1[3],param_1[1],param_1[2]);
  FUN_101322d0(param_1[0x1a]);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015eb6c;
  param_1[4] = &PTR_FUN_1015ee4c;
  return;
}

