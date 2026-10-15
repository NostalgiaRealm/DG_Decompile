/*
 * FUN_1002b717 at 1002b717
 * undefined __fastcall FUN_1002b717(undefined4 * param_1)
 * Address ranges: 1002b717-1002b753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002b717(undefined4 *param_1)

{
  HCURSOR hCursor;
  
  hCursor = DAT_100dea94;
  DAT_100dea90 = param_1;
  *param_1 = &PTR_FUN_100d51b8;
  if (hCursor != (HCURSOR)0x0) {
    DestroyCursor(hCursor);
    DAT_100dea94 = (HCURSOR)0x0;
  }
  if (param_1[8] != 0) {
    FUN_100cfd6c((LPVOID)param_1[8]);
  }
  return;
}

