/*
 * FUN_10003360 at 10003360
 * undefined FUN_10003360(void)
 * Address ranges: 10003360-100033cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003360(int param_1)

{
  if (param_1 < 0x33545844) {
    if (param_1 == 0x31545844) {
      return 4;
    }
    if (param_1 == 0x32545844) {
      return 4;
    }
  }
  else if (((param_1 < 0x33545845) || (param_1 == 0x34545844)) || (param_1 == 0x35545844)) {
    return 4;
  }
  return 1;
}

