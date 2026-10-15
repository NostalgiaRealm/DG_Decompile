/*
 * FUN_10054040 at 10054040
 * undefined FUN_10054040(void)
 * Address ranges: 10054040-10054077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054040(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b1890,0,local_10);
  return local_10[0];
}

