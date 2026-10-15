/*
 * FUN_180008cac at 180008cac
 * byte __fastcall FUN_180008cac(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 180008cac-180008cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180008cac(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_18005d380(local_28,param_2,'\0');
  FUN_18005d530((longlong)local_28);
  bVar1 = FUN_180007a1c(param_1,local_28,param_3);
  FUN_18005d480(local_28);
  return bVar1;
}

