/*
 * FUN_10052d50 at 10052d50
 * undefined FUN_10052d50(void)
 * Address ranges: 10052d50-10052d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052d50(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b18d0,0,local_10);
  return local_10[0];
}

