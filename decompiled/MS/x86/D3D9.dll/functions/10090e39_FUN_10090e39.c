/*
 * FUN_10090e39 at 10090e39
 * undefined4 __stdcall FUN_10090e39(int param_1, uint param_2)
 * Address ranges: 10090e39-10090e5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090e39(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = (&DAT_100df440)[*(int *)(*(int *)(param_1 + -0x28) + param_2 * 4) * 0x8a];
  }
  return uVar1;
}

