/*
 * FUN_180035f2c at 180035f2c
 * byte __fastcall FUN_180035f2c(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 180035f2c-180035f7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180035f2c(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_1800607a0(local_28,param_2,'\0');
  FUN_1800608d0((longlong)local_28);
  bVar1 = FUN_180034c4c(param_1,local_28,param_3);
  FUN_180060820(local_28);
  return bVar1;
}

