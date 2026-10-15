/*
 * FUN_1004d790 at 1004d790
 * undefined FUN_1004d790(void)
 * Address ranges: 1004d790-1004d7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004d790(int param_1)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0x6c) & 0x20010) == 0) || ((*(uint *)(param_1 + 0x68) >> 0xc & 1) == 0))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

