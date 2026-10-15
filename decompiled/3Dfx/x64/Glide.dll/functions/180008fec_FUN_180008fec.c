/*
 * FUN_180008fec at 180008fec
 * byte __fastcall FUN_180008fec(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 180008fec-18000903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180008fec(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 local_28 [4];
  
  FUN_18005d820(local_28,param_2,'\0');
  FUN_18005d9d0((longlong)local_28);
  bVar1 = FUN_180007d5c(param_1,local_28,param_3);
  FUN_18005d920(local_28);
  return bVar1;
}

