/*
 * FUN_100850c0 at 100850c0
 * undefined FUN_100850c0(void)
 * Address ranges: 100850c0-10085137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100850c0(uint param_1)

{
  if (param_1 < 0x10040) {
    switch(param_1) {
    case 0x40:
      goto LAB_100850f4;
    case 0x41:
      return 0x41;
    case 0x50:
      return 0x50;
    case 0x51:
      return 0x51;
    }
  }
  else {
    if (param_1 < 0x10041) {
LAB_100850f4:
      return 0x40;
    }
    if ((param_1 - 0x10050 & 0xfffeffff) == 0) {
      return 0x50;
    }
    if ((param_1 - 0x10051 & 0xfffeffff) == 0) {
      return 0x51;
    }
  }
  return 0;
}

