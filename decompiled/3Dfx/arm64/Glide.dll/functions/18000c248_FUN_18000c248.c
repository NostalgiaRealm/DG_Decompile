/*
 * FUN_18000c248 at 18000c248
 * uint __cdecl FUN_18000c248(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 18000c248-18000c28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000c248(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 auStack_30 [4];
  
  FUN_180009600(auStack_30,param_2);
  uVar1 = FUN_18000aea0(param_1,auStack_30,param_3);
  FUN_180009660(auStack_30);
  return uVar1;
}

