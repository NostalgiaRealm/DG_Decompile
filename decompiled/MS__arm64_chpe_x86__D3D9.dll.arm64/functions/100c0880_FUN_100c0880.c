/*
 * FUN_100c0880 at 100c0880
 * undefined FUN_100c0880(void)
 * Address ranges: 100c0880-100c089f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100c0880(int param_1)

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

