/*
 * FUN_10052c30 at 10052c30
 * undefined FUN_10052c30(void)
 * Address ranges: 10052c30-10052c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052c30(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_1003d588(*(int *)(param_1 + 4) + 0x44,&DAT_100b17e0,0,local_10);
  return local_10[0];
}

