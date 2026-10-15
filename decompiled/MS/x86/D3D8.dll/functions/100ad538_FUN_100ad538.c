/*
 * FUN_100ad538 at 100ad538
 * undefined4 __cdecl FUN_100ad538(undefined4 param_1)
 * Address ranges: 100ad538-100ad563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100ad538(undefined4 param_1)

{
  if (DAT_100ba188 < DAT_100ba184) {
    *(undefined4 *)(DAT_100ba180 + DAT_100ba188 * 4) = param_1;
    DAT_100ba188 = DAT_100ba188 + 1;
    return 0;
  }
  return 0xffffffff;
}

