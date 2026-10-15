/*
 * FUN_100359d5 at 100359d5
 * undefined4 __stdcall FUN_100359d5(undefined4 param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 100359d5-100359f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100359d5(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_4 != 0) && ((param_2 == 0 || (param_2 == 1)))) {
    uVar1 = 0;
  }
  return uVar1;
}

