/*
 * FUN_10003448 at 10003448
 * undefined FUN_10003448(void)
 * Address ranges: 10003448-1000347f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003448(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_1012aec0)[uVar1]) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2a);
  return 0;
}

