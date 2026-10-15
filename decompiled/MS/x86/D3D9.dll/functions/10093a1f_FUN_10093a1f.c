/*
 * FUN_10093a1f at 10093a1f
 * undefined __stdcall FUN_10093a1f(undefined4 param_1, int param_2, int param_3)
 * Address ranges: 10093a1f-10093a49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10093a1f(undefined4 param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  if ((local_c.x != param_2) || (local_c.y != param_3)) {
    SetCursorPos(param_2,param_3);
  }
  return;
}

