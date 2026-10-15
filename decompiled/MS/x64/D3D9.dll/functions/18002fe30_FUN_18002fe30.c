/*
 * FUN_18002fe30 at 18002fe30
 * undefined __fastcall FUN_18002fe30(undefined8 * param_1)
 * Address ranges: 18002fe30-18002fe7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fe30(undefined8 *param_1)

{
  DAT_180111f50 = param_1;
  *param_1 = &PTR_FUN_1801015b0;
  if (DAT_180111f58 != (HCURSOR)0x0) {
    DestroyCursor(DAT_180111f58);
    DAT_180111f58 = (HCURSOR)0x0;
  }
  if ((LPVOID)param_1[7] != (LPVOID)0x0) {
    FUN_1800fbcf0((LPVOID)param_1[7]);
  }
  return;
}

