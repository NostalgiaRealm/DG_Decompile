/*
 * FUN_10081cca at 10081cca
 * undefined4 __stdcall FUN_10081cca(int param_1, int param_2)
 * Address ranges: 10081cca-10081ce9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10081cca(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != 0) {
    uVar1 = FUN_1000e164((void *)(param_1 + -0x48),param_2);
  }
  return uVar1;
}

