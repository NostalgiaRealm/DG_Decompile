/*
 * FUN_10041a78 at 10041a78
 * undefined FUN_10041a78(void)
 * Address ranges: 10041a78-10041abf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10041a78(int param_1,uint param_2,undefined1 param_3)

{
  if ((param_2 & 0xf0) == 0x80) {
    param_3 = FUN_10077bf0(param_3,*(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x90) >> 0x12 & 3);
  }
  return param_3;
}

