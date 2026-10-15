/*
 * FUN_100914f0 at 100914f0
 * undefined FUN_100914f0(void)
 * Address ranges: 100914f0-1009152f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100914f0(undefined4 param_1)

{
  undefined8 uVar1;
  
  if (DAT_100be0ac < DAT_100be0a8) {
    *(undefined4 *)(DAT_100be0a4 + DAT_100be0ac * 4) = param_1;
    DAT_100be0ac = DAT_100be0ac + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

