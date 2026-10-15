/*
 * FUN_1800b2b30 at 1800b2b30
 * undefined __fastcall FUN_1800b2b30(undefined8 param_1, int param_2, int param_3)
 * Address ranges: 1800b2b30-1800b2b6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b2b30(undefined8 param_1,int param_2,int param_3)

{
  tagPOINT local_18 [2];
  
  GetCursorPos(local_18);
  if ((local_18[0].x != param_2) || (local_18[0].y != param_3)) {
    SetCursorPos(param_2,param_3);
  }
  return;
}

