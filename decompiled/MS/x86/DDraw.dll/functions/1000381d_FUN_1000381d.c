/*
 * FUN_1000381d at 1000381d
 * undefined __fastcall FUN_1000381d(undefined4 * param_1)
 * Address ranges: 1000381d-10003859
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000381d(undefined4 *param_1)

{
  HCURSOR hCursor;
  
  hCursor = DAT_1006c22c;
  DAT_1006c224 = param_1;
  *param_1 = &PTR_FUN_100626cc;
  if (hCursor != (HCURSOR)0x0) {
    DestroyCursor(hCursor);
    DAT_1006c22c = (HCURSOR)0x0;
  }
  if (param_1[8] != 0) {
    FUN_10060be1((LPVOID)param_1[8]);
  }
  return;
}

