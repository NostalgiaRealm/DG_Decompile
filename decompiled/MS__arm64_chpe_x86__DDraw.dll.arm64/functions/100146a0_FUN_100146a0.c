/*
 * FUN_100146a0 at 100146a0
 * undefined FUN_100146a0(void)
 * Address ranges: 100146a0-100146b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100146a0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xdc) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

