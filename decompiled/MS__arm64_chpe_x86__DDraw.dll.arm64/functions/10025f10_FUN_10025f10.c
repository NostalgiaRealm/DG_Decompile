/*
 * FUN_10025f10 at 10025f10
 * undefined FUN_10025f10(void)
 * Address ranges: 10025f10-10025f2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025f10(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  }
  return uVar1;
}

