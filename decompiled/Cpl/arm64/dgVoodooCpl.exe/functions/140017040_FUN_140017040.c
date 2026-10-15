/*
 * FUN_140017040 at 140017040
 * uint __cdecl FUN_140017040(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 140017040-1400170bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_140017040(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  uint uVar1;
  undefined **local_30;
  HANDLE local_28;
  undefined1 local_20;
  
  local_30 = &PTR_FUN_140028808;
  local_20 = 1;
  local_28 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  uVar1 = FUN_140015c30(param_1,&local_30,param_3);
  FUN_14000f2c0(&local_30);
  return uVar1;
}

