/*
 * FUN_10019d20 at 10019d20
 * float10 __stdcall FUN_10019d20(uint param_1)
 * Address ranges: 10019d20-10019d7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_10019d20(uint param_1)

{
  return (float10)(1.0000153 -
                  1.0000153 /
                  ((float)(param_1 & 0xfff | 0x1000) * 0.00024414062 *
                  (float)(1 << (sbyte)((param_1 & 0xffff) >> 0xc))));
}

