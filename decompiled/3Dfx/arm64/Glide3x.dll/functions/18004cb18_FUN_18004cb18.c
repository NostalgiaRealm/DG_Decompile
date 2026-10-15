/*
 * FUN_18004cb18 at 18004cb18
 * undefined8 __cdecl FUN_18004cb18(int param_1)
 * Address ranges: 18004cb18-18004cbbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004cb18(int param_1)

{
  if (0x18 < param_1 - 0x17U) {
    if (param_1 - 0x30U < 0xc) {
      return 2;
    }
    if ((param_1 - 0xfU < 8) || (param_1 - 9U < 6)) {
      return 8;
    }
    if (param_1 - 0x3cU < 6) {
      return 1;
    }
    if ((6 < param_1 - 0x57U) || ((0x7bU >> (ulonglong)(param_1 - 0x57U & 0x1f) & 1) == 0)) {
      if (param_1 - 1U < 4) {
        return 0x10;
      }
      if (3 < param_1 - 5U) {
        return 0;
      }
      return 0xc;
    }
  }
  return 4;
}

