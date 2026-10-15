/*
 * FUN_1009e38e at 1009e38e
 * undefined4 __stdcall FUN_1009e38e(int param_1, int param_2)
 * Address ranges: 1009e38e-1009e3ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e38e(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_10011e88((void *)(param_1 + -0x48),param_2);
  }
  return uVar1;
}

