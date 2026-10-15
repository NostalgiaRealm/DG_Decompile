/*
 * FUN_1008ef50 at 1008ef50
 * undefined FUN_1008ef50(void)
 * Address ranges: 1008ef50-1008ef67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008ef50(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xdc) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

