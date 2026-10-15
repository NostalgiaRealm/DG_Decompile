/*
 * FUN_14000ecf8 at 14000ecf8
 * BOOL __cdecl FUN_14000ecf8(undefined8 * param_1)
 * Address ranges: 14000ecf8-14000ee87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BOOL FUN_14000ecf8(undefined8 *param_1)

{
  BOOL BVar1;
  
  *param_1 = &PTR_FUN_1400286b0;
  param_1[0xd] = &PTR_FUN_140028670;
  param_1[0xe] = &PTR_FUN_140028778;
  param_1[0xf] = &PTR_LAB_140028698;
  param_1[0x10] = &PTR_FUN_140028758;
  thunk_FUN_140024830((LPVOID)param_1[0x367]);
  FUN_140010d30(param_1 + 0x24f);
  param_1[0x23d] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x240]);
  FUN_140010d30(param_1 + 0x208);
  param_1[0x1f5] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x1f8]);
  FUN_140010d30(param_1 + 0x1e1);
  param_1[0x1d0] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x1d3]);
  thunk_FUN_140024830((LPVOID)param_1[0x1ac]);
  FUN_140010d30(param_1 + 0x192);
  param_1[0x180] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x183]);
  thunk_FUN_140024830((LPVOID)param_1[0x159]);
  FUN_140010d30(param_1 + 0x140);
  param_1[0x12e] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x131]);
  thunk_FUN_140024830((LPVOID)param_1[0x107]);
  FUN_140010d30(param_1 + 0xee);
  param_1[0xdc] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0xdf]);
  FUN_140010d30(param_1 + 200);
  param_1[0xb5] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0xb8]);
  FUN_140010d30(param_1 + 0xa2);
  param_1[0x93] = &PTR_FUN_140028960;
  DestroyWindow((HWND)param_1[0x96]);
  if ((HMENU)param_1[0x4d] != (HMENU)0x0) {
    DestroyMenu((HMENU)param_1[0x4d]);
  }
  FUN_140010d30(param_1 + 0x17);
  *param_1 = &PTR_FUN_140028960;
  BVar1 = DestroyWindow((HWND)param_1[3]);
  return BVar1;
}

