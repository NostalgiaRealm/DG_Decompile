/*
 * FUN_14001ef50 at 14001ef50
 * undefined8 __cdecl FUN_14001ef50(uint param_1, uint param_2)
 * Address ranges: 14001ef50-14001ef9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14001ef50(uint param_1,uint param_2)

{
  if (param_1 == 0xfffffff9) {
    if (0x400 < param_2) {
      return 0;
    }
  }
  else if (param_1 - 1 < 0xfffffff7 || param_1 == 0xfffffff9) {
    if (0x80000000 < param_1) {
      return 0;
    }
    if (0x7fffffff < param_2 - 1) {
      return 0;
    }
  }
  return 1;
}

