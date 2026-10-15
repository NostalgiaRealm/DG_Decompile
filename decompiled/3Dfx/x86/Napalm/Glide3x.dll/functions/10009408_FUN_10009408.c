/*
 * FUN_10009408 at 10009408
 * float10 __stdcall FUN_10009408(uint param_1)
 * Address ranges: 10009408-10009470
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1000943d) */

float10 FUN_10009408(uint param_1)

{
  return (float10)(1.0000153 -
                  1.0000153 /
                  ((float)(1 << ((byte)(param_1 >> 0x14) & 0xf)) *
                  (float)(param_1 & 0xfffff | 0x100000) * 9.536743e-07));
}

