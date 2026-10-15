/*
 * FUN_1003cbc0 at 1003cbc0
 * undefined FUN_1003cbc0(void)
 * Address ranges: 1003cbc0-1003cc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1003cbc0(int param_1,uint param_2,undefined1 param_3)

{
  if ((param_2 & 0xf0) == 0x80) {
    param_3 = FUN_10072550(param_3,*(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x90) >> 0x12 & 3);
  }
  return param_3;
}

