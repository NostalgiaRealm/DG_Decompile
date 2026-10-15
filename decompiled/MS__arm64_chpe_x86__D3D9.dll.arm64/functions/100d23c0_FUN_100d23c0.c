/*
 * FUN_100d23c0 at 100d23c0
 * undefined FUN_100d23c0(void)
 * Address ranges: 100d23c0-100d23e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_100d23c0(int param_1)

{
  undefined2 uVar1;
  
  if ((*(uint *)(param_1 + -0x24) >> 10 & 1) == 0) {
    uVar1 = *(undefined2 *)(param_1 + -0x48);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

