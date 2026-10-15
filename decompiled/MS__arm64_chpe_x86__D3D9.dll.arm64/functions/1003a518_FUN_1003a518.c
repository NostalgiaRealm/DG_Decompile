/*
 * FUN_1003a518 at 1003a518
 * undefined FUN_1003a518(void)
 * Address ranges: 1003a518-1003a557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003a518(void)

{
  undefined8 uVar1;
  
  if (((*(char *)(DAT_10170ad0 + 0x786) == '\0') || (*(int *)(DAT_10170ad0 + 0x7d4) == 0)) ||
     (*(int *)(DAT_10170ad0 + 0x7d8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

