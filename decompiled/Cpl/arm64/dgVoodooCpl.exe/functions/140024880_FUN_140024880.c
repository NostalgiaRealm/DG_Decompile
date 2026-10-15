/*
 * FUN_140024880 at 140024880
 * undefined __cdecl FUN_140024880(LPSTR param_1, LPCSTR param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140024880-1400248af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140024880(LPSTR param_1,LPCSTR param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_30 = param_3;
  uStack_28 = param_4;
  local_20 = param_5;
  uStack_18 = param_6;
  local_10 = param_7;
  uStack_8 = param_8;
  wvsprintfA(param_1,param_2,(va_list)&local_30);
  return;
}

