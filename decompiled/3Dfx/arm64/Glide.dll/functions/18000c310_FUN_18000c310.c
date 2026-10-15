/*
 * FUN_18000c310 at 18000c310
 * uint __cdecl FUN_18000c310(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 18000c310-18000c333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000c310(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined **local_10;
  undefined8 uStack_8;
  
  local_10 = &PTR_LAB_180063ad0;
  uStack_8 = param_2;
  uVar1 = FUN_18000aea0(param_1,&local_10,param_3);
  return uVar1;
}

