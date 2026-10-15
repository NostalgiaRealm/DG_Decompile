/*
 * FUN_1006bb90 at 1006bb90
 * undefined FUN_1006bb90(void)
 * Address ranges: 1006bb90-1006bbaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006bb90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x88760005;
  if (*(int *)(*(int *)(param_1 + 4) + 0x60) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

