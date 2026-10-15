/*
 * FUN_10053c90 at 10053c90
 * undefined FUN_10053c90(void)
 * Address ranges: 10053c90-10053cc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053c90(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b1870,0,local_10);
  return local_10[0];
}

