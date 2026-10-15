/*
 * FUN_18000b400 at 18000b400
 * uint __cdecl FUN_18000b400(longlong param_1, undefined8 param_2, undefined4 param_3)
 * Address ranges: 18000b400-18000b423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18000b400(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined **local_10;
  undefined8 uStack_8;
  
  local_10 = &PTR_LAB_180062ad0;
  uStack_8 = param_2;
  uVar1 = FUN_180009f90(param_1,&local_10,param_3);
  return uVar1;
}

