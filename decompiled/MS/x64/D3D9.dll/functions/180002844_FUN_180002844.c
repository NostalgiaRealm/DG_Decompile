/*
 * FUN_180002844 at 180002844
 * undefined8 __fastcall FUN_180002844(int param_1)
 * Address ranges: 180002844-18000289c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180002844(int param_1)

{
  if ((((param_1 != 0x31495441) && (param_1 != 0x31545844)) && (param_1 != 0x32495441)) &&
     (param_1 != 0x32545844)) {
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

