/*
 * FUN_1800ac418 at 1800ac418
 * undefined FUN_1800ac418(void)
 * Address ranges: 1800ac418-1800ac473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ac418(undefined8 param_1,int param_2,int param_3)

{
  int local_20;
  int local_1c;
  
  (*__imp_USER32_dll_GetCursorPos)(&local_20);
  if ((local_20 != param_2) || (local_1c != param_3)) {
    (*__imp_USER32_dll_SetCursorPos)(param_2,param_3);
  }
  return;
}

