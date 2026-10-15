/*
 * FUN_10052800 at 10052800
 * undefined FUN_10052800(void)
 * Address ranges: 10052800-10052837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052800(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_1003d588(*(int *)(param_1 + 4) + 0x44,&DAT_100b1850,0,local_10);
  return local_10[0];
}

