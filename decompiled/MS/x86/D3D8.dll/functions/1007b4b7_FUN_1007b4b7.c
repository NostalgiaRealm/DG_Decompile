/*
 * FUN_1007b4b7 at 1007b4b7
 * undefined __stdcall FUN_1007b4b7(undefined4 param_1, int param_2, int param_3)
 * Address ranges: 1007b4b7-1007b4e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007b4b7(undefined4 param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  if ((local_c.x != param_2) || (local_c.y != param_3)) {
    SetCursorPos(param_2,param_3);
  }
  return;
}

