/*
 * FUN_140015ca4 at 140015ca4
 * byte __fastcall FUN_140015ca4(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 140015ca4-140015cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_140015ca4(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_140023f20(local_28,param_2,'\0');
  FUN_1400240d0((longlong)local_28);
  bVar1 = FUN_140014a14(param_1,local_28,param_3);
  FUN_140024020(local_28);
  return bVar1;
}

