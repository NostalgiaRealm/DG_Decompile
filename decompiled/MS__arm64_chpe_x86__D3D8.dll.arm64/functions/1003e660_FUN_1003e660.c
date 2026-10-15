/*
 * FUN_1003e660 at 1003e660
 * undefined FUN_1003e660(void)
 * Address ranges: 1003e660-1003e67f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e660(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xda44) != 0xa000) {
    uVar1 = param_2;
  }
  *(undefined1 *)(param_1 + 0x80) = uVar1;
  return;
}

