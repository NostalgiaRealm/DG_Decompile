/*
 * FUN_10052000 at 10052000
 * undefined FUN_10052000(void)
 * Address ranges: 10052000-10052037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052000(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_1003d588(*(int *)(param_1 + 4) + 0x44,&DAT_100b1830,0,local_10);
  return local_10[0];
}

