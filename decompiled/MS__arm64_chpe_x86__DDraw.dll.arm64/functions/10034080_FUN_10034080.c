/*
 * FUN_10034080 at 10034080
 * undefined FUN_10034080(void)
 * Address ranges: 10034080-1003408f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10034080(int param_1)

{
  return *(uint *)(param_1 + 0x30) >> 3 & 1;
}

