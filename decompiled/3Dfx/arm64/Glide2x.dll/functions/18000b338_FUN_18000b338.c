/*
 * FUN_18000b338 at 18000b338
 * uint __cdecl FUN_18000b338(longlong param_1, LPCSTR param_2, undefined4 param_3)
 * Address ranges: 18000b338-18000b37f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000b338(longlong param_1,LPCSTR param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 auStack_30 [4];
  
  FUN_1800086f0(auStack_30,param_2);
  uVar1 = FUN_180009f90(param_1,auStack_30,param_3);
  FUN_180008750(auStack_30);
  return uVar1;
}

