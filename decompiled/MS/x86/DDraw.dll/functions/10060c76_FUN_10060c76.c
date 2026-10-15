/*
 * FUN_10060c76 at 10060c76
 * undefined4 __cdecl FUN_10060c76(undefined4 param_1)
 * Address ranges: 10060c76-10060ca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10060c76(undefined4 param_1)

{
  if (DAT_1006c1e8 < DAT_1006c1e4) {
    *(undefined4 *)(DAT_1006c1e0 + DAT_1006c1e8 * 4) = param_1;
    DAT_1006c1e8 = DAT_1006c1e8 + 1;
    return 0;
  }
  return 0xffffffff;
}

