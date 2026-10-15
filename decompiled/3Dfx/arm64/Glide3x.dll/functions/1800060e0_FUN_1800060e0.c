/*
 * FUN_1800060e0 at 1800060e0
 * undefined __cdecl FUN_1800060e0(undefined8 * param_1)
 * Address ranges: 1800060e0-180006143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800060e0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1800656e8;
  thunk_FUN_180063700((LPVOID)param_1[0x28]);
  thunk_FUN_180063700((LPVOID)param_1[0x26]);
  FUN_1800393b8(param_1);
  thunk_FUN_180063700((LPVOID)param_1[0x13]);
  thunk_FUN_180063700((LPVOID)param_1[0x11]);
  thunk_FUN_180063700((LPVOID)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  thunk_FUN_180063700((LPVOID)0x0);
  return;
}

