/*
 * FUN_1003efb0 at 1003efb0
 * undefined FUN_1003efb0(void)
 * Address ranges: 1003efb0-1003efdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003efb0(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x20) == 0;
  if (bVar1) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10;
  }
  return bVar1;
}

