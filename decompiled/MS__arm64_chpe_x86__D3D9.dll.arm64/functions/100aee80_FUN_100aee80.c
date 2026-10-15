/*
 * FUN_100aee80 at 100aee80
 * undefined FUN_100aee80(void)
 * Address ranges: 100aee80-100aee9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100aee80(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x148);
  }
  return uVar1;
}

