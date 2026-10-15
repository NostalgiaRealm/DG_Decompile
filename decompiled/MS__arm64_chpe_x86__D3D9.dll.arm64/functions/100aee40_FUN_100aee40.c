/*
 * FUN_100aee40 at 100aee40
 * undefined FUN_100aee40(void)
 * Address ranges: 100aee40-100aee57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100aee40(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xdc) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

