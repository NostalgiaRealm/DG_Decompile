/*
 * FUN_1801e9df8 at 1801e9df8
 * undefined FUN_1801e9df8(void)
 * Address ranges: 1801e9df8-1801e9e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e9df8(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 - 0x14U & 0xfffffffd) == 0) {
    uVar1 = 4;
  }
  else if ((param_1 - 0x15U & 0xfffffffd) == 0) {
    uVar1 = 3;
  }
  else if (param_1 == 0x18) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

