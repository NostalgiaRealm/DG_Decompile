/*
 * FUN_140024290 at 140024290
 * undefined __fastcall FUN_140024290(LPSTR param_1, LPCSTR param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 140024290-1400242b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024290(LPSTR param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  wvsprintfA(param_1,param_2,(va_list)&local_res18);
  return;
}

