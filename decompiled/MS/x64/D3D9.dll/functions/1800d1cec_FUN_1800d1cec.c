/*
 * FUN_1800d1cec at 1800d1cec
 * byte __fastcall FUN_1800d1cec(longlong param_1, LPCWSTR param_2, undefined4 param_3)
 * Address ranges: 1800d1cec-1800d1d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800d1cec(longlong param_1,LPCWSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_1800fb6a0(local_28,param_2,'\0');
  FUN_1800fb7d0((longlong)local_28);
  bVar1 = FUN_1800d0a0c(param_1,local_28,param_3);
  FUN_1800fb720(local_28);
  return bVar1;
}

