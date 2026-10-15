/*
 * FUN_100a0230 at 100a0230
 * undefined FUN_100a0230(void)
 * Address ranges: 100a0230-100a0253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100a0230(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x1bd) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x138);
  }
  return uVar1;
}

