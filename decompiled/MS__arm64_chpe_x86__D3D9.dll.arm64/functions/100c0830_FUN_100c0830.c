/*
 * FUN_100c0830 at 100c0830
 * undefined FUN_100c0830(void)
 * Address ranges: 100c0830-100c0847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100c0830(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

