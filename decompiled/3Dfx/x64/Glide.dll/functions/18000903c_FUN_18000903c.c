/*
 * FUN_18000903c at 18000903c
 * byte __fastcall FUN_18000903c(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 18000903c-18000908b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18000903c(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_18005d8a0(local_28,param_2,'\0');
  FUN_18005d9d0((longlong)local_28);
  bVar1 = FUN_180007d5c(param_1,local_28,param_3);
  FUN_18005d920(local_28);
  return bVar1;
}

