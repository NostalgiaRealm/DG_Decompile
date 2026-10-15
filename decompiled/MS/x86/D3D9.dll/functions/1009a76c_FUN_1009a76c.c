/*
 * FUN_1009a76c at 1009a76c
 * undefined4 __stdcall FUN_1009a76c(int param_1, uint * param_2)
 * Address ranges: 1009a76c-1009a794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a76c(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    uVar1 = FUN_10090a86(*(int *)(param_1 + 0x44) + 0x70,0x100d1300,param_2);
  }
  return uVar1;
}

