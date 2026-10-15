/*
 * FUN_10052320 at 10052320
 * undefined FUN_10052320(void)
 * Address ranges: 10052320-10052357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052320(int param_1)

{
  undefined4 local_10 [4];
  
  local_10[0] = 0;
  FUN_1003d588(*(int *)(param_1 + 4) + 0x44,&DAT_100b1840,0,local_10);
  return local_10[0];
}

