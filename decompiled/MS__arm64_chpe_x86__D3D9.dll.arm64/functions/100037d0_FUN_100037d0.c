/*
 * FUN_100037d0 at 100037d0
 * undefined FUN_100037d0(void)
 * Address ranges: 100037d0-10003807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100037d0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_10160630)[uVar1]) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x43);
  return 0;
}

