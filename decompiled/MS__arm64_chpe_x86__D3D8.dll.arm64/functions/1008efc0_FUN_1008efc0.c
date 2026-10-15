/*
 * FUN_1008efc0 at 1008efc0
 * undefined FUN_1008efc0(void)
 * Address ranges: 1008efc0-1008efdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008efc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
  }
  return uVar1;
}

