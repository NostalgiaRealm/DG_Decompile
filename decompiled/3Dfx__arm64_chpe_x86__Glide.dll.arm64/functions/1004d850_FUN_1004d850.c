/*
 * FUN_1004d850 at 1004d850
 * undefined FUN_1004d850(void)
 * Address ranges: 1004d850-1004d897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1004d850(int param_1,uint param_2,undefined1 param_3)

{
  if ((param_2 & 0xf0) == 0x80) {
    param_3 = FUN_1006ed30(param_3,*(uint *)(param_1 + (param_2 & 0xf) * 4 + 0x90) >> 0x12 & 3);
  }
  return param_3;
}

