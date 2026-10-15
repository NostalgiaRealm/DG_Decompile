/*
 * FUN_10053e80 at 10053e80
 * undefined FUN_10053e80(void)
 * Address ranges: 10053e80-10053eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053e80(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_100456a0(*(int *)(param_1 + 4) + 0x2c,&DAT_100b1880,0,local_10);
  return local_10[0];
}

