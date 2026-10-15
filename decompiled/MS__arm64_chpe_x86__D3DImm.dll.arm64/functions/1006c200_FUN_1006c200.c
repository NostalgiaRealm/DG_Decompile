/*
 * FUN_1006c200 at 1006c200
 * undefined FUN_1006c200(void)
 * Address ranges: 1006c200-1006c237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006c200(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_10068d20(*(int *)(param_1 + 4) + 4,&DAT_1009c530,0,local_10);
  return local_10[0];
}

