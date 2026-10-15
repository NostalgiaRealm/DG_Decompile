/*
 * FUN_100ae4c0 at 100ae4c0
 * undefined FUN_100ae4c0(void)
 * Address ranges: 100ae4c0-100ae4cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ae4c0(int param_1)

{
  return *(uint *)(param_1 + 0x30) >> 3 & 1;
}

