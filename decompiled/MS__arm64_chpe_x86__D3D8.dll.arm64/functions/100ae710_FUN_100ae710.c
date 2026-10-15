/*
 * FUN_100ae710 at 100ae710
 * undefined FUN_100ae710(void)
 * Address ranges: 100ae710-100ae727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ae710(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

