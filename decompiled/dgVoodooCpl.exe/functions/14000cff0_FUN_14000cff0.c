/*
 * FUN_14000cff0 at 14000cff0
 * undefined __fastcall FUN_14000cff0(undefined8 * param_1)
 * Address ranges: 14000cff0-14000d1a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000cff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1400285d8;
  param_1[0xd] = &PTR_FUN_140028598;
  param_1[0xe] = &PTR_FUN_1400286a0;
  param_1[0xf] = &PTR_LAB_1400285c0;
  param_1[0x10] = &PTR_FUN_140028680;
  FUN_140024260((LPVOID)param_1[0x367]);
  FUN_14000f590(param_1 + 0x24f);
  param_1[0x23d] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x240]);
  FUN_14000f590(param_1 + 0x208);
  param_1[0x1f5] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x1f8]);
  FUN_14000f590(param_1 + 0x1e1);
  param_1[0x1d0] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x1d3]);
  FUN_140024260((LPVOID)param_1[0x1ac]);
  FUN_14000f590(param_1 + 0x192);
  param_1[0x180] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x183]);
  FUN_140024260((LPVOID)param_1[0x159]);
  FUN_14000f590(param_1 + 0x140);
  param_1[0x12e] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x131]);
  FUN_140024260((LPVOID)param_1[0x107]);
  FUN_14000f590(param_1 + 0xee);
  param_1[0xdc] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0xdf]);
  FUN_14000f590(param_1 + 200);
  param_1[0xb5] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0xb8]);
  FUN_14000f590(param_1 + 0xa2);
  param_1[0x93] = &PTR_FUN_140028860;
  DestroyWindow((HWND)param_1[0x96]);
  if ((HMENU)param_1[0x4d] != (HMENU)0x0) {
    DestroyMenu((HMENU)param_1[0x4d]);
  }
  FUN_14000f590(param_1 + 0x17);
  *param_1 = &PTR_FUN_140028860;
                    /* WARNING: Could not recover jumptable at 0x00014000d19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DestroyWindow((HWND)param_1[3]);
  return;
}

