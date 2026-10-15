/*
 * FUN_10035170 at 10035170
 * undefined FUN_10035170(void)
 * Address ranges: 10035170-1003519b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10035170(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x20) == 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10;
  }
  return bVar1;
}

