/*
 * FUN_180006df8 at 180006df8
 * undefined __cdecl FUN_180006df8(undefined8 * param_1)
 * Address ranges: 180006df8-180006e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006df8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_180062638;
  thunk_FUN_180060a18((LPVOID)param_1[0x28]);
  thunk_FUN_180060a18((LPVOID)param_1[0x26]);
  FUN_180009cd8(param_1);
  thunk_FUN_180060a18((LPVOID)param_1[0x13]);
  thunk_FUN_180060a18((LPVOID)param_1[0x11]);
  thunk_FUN_180060a18((LPVOID)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  thunk_FUN_180060a18((LPVOID)0x0);
  return;
}

