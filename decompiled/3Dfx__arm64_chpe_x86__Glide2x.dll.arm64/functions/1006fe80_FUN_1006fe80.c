/*
 * FUN_1006fe80 at 1006fe80
 * undefined FUN_1006fe80(void)
 * Address ranges: 1006fe80-1006fef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1006fe80(uint param_1)

{
  if (param_1 < 0x10040) {
    switch(param_1) {
    case 0x40:
      goto LAB_1006feb4;
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
LAB_1006feb4:
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

