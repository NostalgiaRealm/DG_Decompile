/*
 * FUN_1004d7d0 at 1004d7d0
 * undefined FUN_1004d7d0(void)
 * Address ranges: 1004d7d0-1004d80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d7d0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x6c) >> 9 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x68) >> 0xc & 1) == 0) {
      uVar1 = 3;
      if ((*(uint *)(param_1 + 0x68) & 0x20000) == 0) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

