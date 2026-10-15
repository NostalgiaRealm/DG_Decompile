/*
 * FUN_18019f158 at 18019f158
 * undefined FUN_18019f158(void)
 * Address ranges: 18019f158-18019f20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18019f158(undefined8 *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1801baed8();
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022cbd8;
  lVar2 = *(longlong *)(param_2 + 0x1cf10);
  param_1[10] = lVar2;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  *(uint *)(param_1 + 0xd) = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = lVar1;
  param_1[0xe] = lVar1 + (ulonglong)param_3 * 0x18c0 + 0x6b0;
  param_1[0xf] = 0;
  lVar1 = *(longlong *)(param_2 + 0x1cf10);
  *(uint *)(param_1 + 0x15) = param_3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = lVar1;
  param_1[0x16] = lVar1 + (ulonglong)param_3 * 0x18c0 + 0x6b0;
  param_1[0x17] = 0;
  param_1[0xb] = lVar2 + (ulonglong)param_3 * 0x18c0 + 0x6b0;
  return param_1;
}

