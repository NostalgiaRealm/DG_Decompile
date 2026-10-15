/*
 * FUN_10038790 at 10038790
 * undefined FUN_10038790(void)
 * Address ranges: 10038790-1003879f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10038790(int param_1)

{
  return *(uint *)(param_1 + 0x104) >> 0xb & 1;
}

