/*
 * FUN_1002c58c at 1002c58c
 * undefined4 __stdcall FUN_1002c58c(uint param_1, int param_2)
 * Address ranges: 1002c58c-1002c5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002c58c(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x18000;
  if ((uVar1 == 0x10000) ||
     ((uVar1 == 0x8000 && (uVar1 = param_2, (*(uint *)(param_2 + 0x154) & 0x10000) != 0)))) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

