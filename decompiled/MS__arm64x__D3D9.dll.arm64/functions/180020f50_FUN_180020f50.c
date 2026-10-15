/*
 * FUN_180020f50 at 180020f50
 * undefined FUN_180020f50(void)
 * Address ranges: 180020f50-180020fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020f50(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_180229ed8;
  if (param_1[0xb] != 0) {
    (*__imp_GDI32_dll_DeleteObject)();
    param_1[0xb] = 0;
    param_1[0x10] = 0;
  }
  (**(code **)(*(longlong *)param_1[2] + 0x20))();
  *param_1 = &PTR_thunk_EXT_FUN_00242ff2_1802339d8;
  thunk_FUN_180102fc0(param_1[3]);
  return;
}

