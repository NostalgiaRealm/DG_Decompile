/*
 * FUN_100024d0 at 100024d0
 * undefined FUN_100024d0(void)
 * Address ranges: 100024d0-1000250f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100024d0(void)

{
  undefined8 uVar1;
  
  if (((*(char *)(DAT_100be0c0 + 0x786) == '\0') || (*(int *)(DAT_100be0c0 + 0x7d4) == 0)) ||
     (*(int *)(DAT_100be0c0 + 0x7d8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

