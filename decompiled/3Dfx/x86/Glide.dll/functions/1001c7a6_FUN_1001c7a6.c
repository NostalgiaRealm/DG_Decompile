/*
 * FUN_1001c7a6 at 1001c7a6
 * undefined4 __stdcall FUN_1001c7a6(int param_1)
 * Address ranges: 1001c7a6-1001c7cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001c7a6(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else if (param_1 == 2) {
    uVar1 = 2;
  }
  return uVar1;
}

