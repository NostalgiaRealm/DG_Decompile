/*
 * FUN_18000c290 at 18000c290
 * uint __cdecl FUN_18000c290(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 18000c290-18000c30f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000c290(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  uint uVar1;
  undefined **local_30;
  HANDLE local_28;
  undefined1 local_20;
  
  local_30 = &PTR_FUN_180062a40;
  local_20 = 1;
  local_28 = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  uVar1 = FUN_18000aea0(param_1,&local_30,param_3);
  FUN_180009660(&local_30);
  return uVar1;
}

