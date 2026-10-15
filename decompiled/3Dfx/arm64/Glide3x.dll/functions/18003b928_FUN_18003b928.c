/*
 * FUN_18003b928 at 18003b928
 * uint __cdecl FUN_18003b928(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 18003b928-18003b96f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003b928(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 auStack_30 [4];
  
  FUN_180038ce0(auStack_30,param_2);
  uVar1 = FUN_18003a580(param_1,auStack_30,param_3);
  FUN_180038d40(auStack_30);
  return uVar1;
}

