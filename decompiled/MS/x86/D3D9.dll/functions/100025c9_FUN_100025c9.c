/*
 * FUN_100025c9 at 100025c9
 * undefined4 __fastcall FUN_100025c9(int param_1)
 * Address ranges: 100025c9-10002620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100025c9(int param_1)

{
  if (param_1 < 0x3259555a) {
    if (param_1 == 0x32595559) {
      return 2;
    }
    if (((param_1 != 0x31495441) && (param_1 != 0x31545844)) &&
       ((param_1 != 0x32495441 && (param_1 != 0x32545844)))) {
      return 1;
    }
  }
  else if (((param_1 != 0x33545844) && (param_1 != 0x34545844)) && (param_1 != 0x35545844)) {
    if (param_1 == 0x59565955) {
      return 2;
    }
    return 1;
  }
  return 4;
}

