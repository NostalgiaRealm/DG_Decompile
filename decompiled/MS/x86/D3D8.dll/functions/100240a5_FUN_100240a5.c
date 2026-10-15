/*
 * FUN_100240a5 at 100240a5
 * undefined __fastcall FUN_100240a5(undefined4 * param_1)
 * Address ranges: 100240a5-100240e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100240a5(undefined4 *param_1)

{
  HCURSOR hCursor;
  
  hCursor = DAT_100ba2d4;
  DAT_100ba2d0 = param_1;
  *param_1 = &PTR_FUN_100b1d08;
  if (hCursor != (HCURSOR)0x0) {
    DestroyCursor(hCursor);
    DAT_100ba2d4 = (HCURSOR)0x0;
  }
  if (param_1[8] != 0) {
    FUN_100ad48c((LPVOID)param_1[8]);
  }
  return;
}

