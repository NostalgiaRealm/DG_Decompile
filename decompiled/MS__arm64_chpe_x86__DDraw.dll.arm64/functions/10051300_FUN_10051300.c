/*
 * FUN_10051300 at 10051300
 * undefined FUN_10051300(void)
 * Address ranges: 10051300-10051337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10051300(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_1003d588(*(int *)(param_1 + 4) + 0x44,&DAT_100b1a30,0,local_10);
  return local_10[0];
}

