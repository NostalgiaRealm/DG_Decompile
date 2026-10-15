/*
 * FUN_10070300 at 10070300
 * undefined FUN_10070300(void)
 * Address ranges: 10070300-10070377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10070300(uint param_1)

{
  if (param_1 < 0x10040) {
    switch(param_1) {
    case 0x40:
      goto LAB_10070334;
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
LAB_10070334:
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

