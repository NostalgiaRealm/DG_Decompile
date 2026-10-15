/*
 * FUN_1001a0ab at 1001a0ab
 * float10 __stdcall FUN_1001a0ab(uint param_1)
 * Address ranges: 1001a0ab-1001a105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1001a0ab(uint param_1)

{
  return (float10)(1.0000153 -
                  1.0000153 /
                  ((float)(param_1 & 0xfff | 0x1000) * 0.00024414062 *
                  (float)(1 << (sbyte)((param_1 & 0xffff) >> 0xc))));
}

