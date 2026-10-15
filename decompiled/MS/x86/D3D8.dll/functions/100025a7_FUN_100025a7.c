/*
 * FUN_100025a7 at 100025a7
 * undefined4 __fastcall FUN_100025a7(int param_1)
 * Address ranges: 100025a7-100025dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100025a7(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((param_1 == 0x31545844) || (param_1 == 0x32545844)) ||
     ((param_1 != 0x32595559 &&
      (((param_1 == 0x33545844 || (param_1 == 0x34545844)) || (param_1 == 0x35545844)))))) {
    uVar1 = 4;
  }
  return uVar1;
}

