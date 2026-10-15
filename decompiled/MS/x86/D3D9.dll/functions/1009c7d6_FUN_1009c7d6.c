/*
 * FUN_1009c7d6 at 1009c7d6
 * undefined4 __stdcall FUN_1009c7d6(int param_1, int param_2)
 * Address ranges: 1009c7d6-1009c7f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009c7d6(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_10011e88((void *)(param_1 + -0x2c),param_2);
  }
  return uVar1;
}

