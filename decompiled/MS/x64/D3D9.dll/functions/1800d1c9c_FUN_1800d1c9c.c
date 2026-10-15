/*
 * FUN_1800d1c9c at 1800d1c9c
 * byte __fastcall FUN_1800d1c9c(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 1800d1c9c-1800d1ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800d1c9c(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_1800fb620(local_28,param_2,'\0');
  FUN_1800fb7d0((longlong)local_28);
  bVar1 = FUN_1800d0a0c(param_1,local_28,param_3);
  FUN_1800fb720(local_28);
  return bVar1;
}

