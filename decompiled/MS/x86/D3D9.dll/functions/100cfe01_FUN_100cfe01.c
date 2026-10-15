/*
 * FUN_100cfe01 at 100cfe01
 * undefined4 __cdecl FUN_100cfe01(undefined4 param_1)
 * Address ranges: 100cfe01-100cfe2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100cfe01(undefined4 param_1)

{
  if (DAT_100dea48 < DAT_100dea44) {
    *(undefined4 *)(DAT_100dea40 + DAT_100dea48 * 4) = param_1;
    DAT_100dea48 = DAT_100dea48 + 1;
    return 0;
  }
  return 0xffffffff;
}

