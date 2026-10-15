/*
 * FUN_180008cfc at 180008cfc
 * byte __fastcall FUN_180008cfc(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 180008cfc-180008d4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180008cfc(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_18005d400(local_28,param_2,'\0');
  FUN_18005d530((longlong)local_28);
  bVar1 = FUN_180007a1c(param_1,local_28,param_3);
  FUN_18005d480(local_28);
  return bVar1;
}

