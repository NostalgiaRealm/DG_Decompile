/*
 * FUN_100535b0 at 100535b0
 * undefined FUN_100535b0(void)
 * Address ranges: 100535b0-100535e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100535b0(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b1860,0,local_10);
  return local_10[0];
}

