/*
 * FUN_100306a0 at 100306a0
 * undefined FUN_100306a0(void)
 * Address ranges: 100306a0-100306df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100306a0(void)

{
  undefined8 uVar1;
  
  if (((*(char *)(DAT_1013ceec + 0x786) == '\0') || (*(int *)(DAT_1013ceec + 0x7d4) == 0)) ||
     (*(int *)(DAT_1013ceec + 0x7d8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

