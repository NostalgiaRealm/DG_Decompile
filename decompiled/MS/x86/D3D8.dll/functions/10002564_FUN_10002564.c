/*
 * FUN_10002564 at 10002564
 * undefined4 __fastcall FUN_10002564(int param_1)
 * Address ranges: 10002564-100025a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002564(int param_1)

{
  if ((param_1 != 0x31545844) && (param_1 != 0x32545844)) {
    if (param_1 == 0x32595559) {
      return 2;
    }
    if (((param_1 != 0x33545844) && (param_1 != 0x34545844)) && (param_1 != 0x35545844)) {
      if (param_1 != 0x59565955) {
        return 1;
      }
      return 2;
    }
  }
  return 4;
}

