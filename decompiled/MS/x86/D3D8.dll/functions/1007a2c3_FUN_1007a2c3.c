/*
 * FUN_1007a2c3 at 1007a2c3
 * undefined4 __stdcall FUN_1007a2c3(int param_1, uint param_2)
 * Address ranges: 1007a2c3-1007a2e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a2c3(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = (&DAT_100ba878)[*(int *)(*(int *)(param_1 + -0x28) + param_2 * 4) * 0x8a];
  }
  return uVar1;
}

