/*
 * FUN_1004d750 at 1004d750
 * undefined FUN_1004d750(void)
 * Address ranges: 1004d750-1004d77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004d750(int param_1)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_1 + 0x68) >> 0xb & 1) != 0) ||
     (uVar1 = 1, (*(uint *)(param_1 + 0x6c) & 0x20010) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

