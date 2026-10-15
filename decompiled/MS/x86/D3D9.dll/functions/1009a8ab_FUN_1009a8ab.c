/*
 * FUN_1009a8ab at 1009a8ab
 * undefined4 __stdcall FUN_1009a8ab(int param_1, uint param_2, uint * param_3)
 * Address ranges: 1009a8ab-1009a8d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a8ab(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x591c)) {
    uVar1 = FUN_10013b4d(*(void **)(*(int *)(param_1 + -0x5920) + param_2 * 4),param_3);
  }
  return uVar1;
}

