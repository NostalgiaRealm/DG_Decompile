/*
 * FUN_100544d0 at 100544d0
 * undefined FUN_100544d0(void)
 * Address ranges: 100544d0-10054507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100544d0(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b18a0,0,local_10);
  return local_10[0];
}

