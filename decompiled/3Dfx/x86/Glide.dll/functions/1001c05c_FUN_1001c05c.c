/*
 * FUN_1001c05c at 1001c05c
 * undefined4 __fastcall FUN_1001c05c(int param_1, char param_2)
 * Address ranges: 1001c05c-1001c091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001c05c(int param_1,char param_2)

{
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    if (param_2 != '\0') {
      return 0;
    }
  }
  else {
    if ((param_1 == 4) || (param_1 == 5)) {
      if (param_2 != '\0') {
        return 0;
      }
      return 0x20;
    }
    if (param_1 != 0xf) {
      return 0;
    }
    if (param_2 == '\0') {
      return 0;
    }
  }
  return 0x10;
}

