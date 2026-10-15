/*
 * FUN_100ef9e8 at 100ef9e8
 * undefined FUN_100ef9e8(void)
 * Address ranges: 100ef9e8-100efa5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ef9e8(uint param_1)

{
  if (param_1 < 0x10040) {
    switch(param_1) {
    case 0x40:
      goto LAB_100efa1c;
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
LAB_100efa1c:
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

