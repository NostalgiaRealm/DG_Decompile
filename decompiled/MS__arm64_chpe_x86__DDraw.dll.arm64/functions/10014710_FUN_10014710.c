/*
 * FUN_10014710 at 10014710
 * undefined FUN_10014710(void)
 * Address ranges: 10014710-1001472f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014710(int param_1)

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

