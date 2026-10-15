/*
 * FUN_180035edc at 180035edc
 * byte __fastcall FUN_180035edc(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 180035edc-180035f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180035edc(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_180060720(local_28,param_2,'\0');
  FUN_1800608d0((longlong)local_28);
  bVar1 = FUN_180034c4c(param_1,local_28,param_3);
  FUN_180060820(local_28);
  return bVar1;
}

