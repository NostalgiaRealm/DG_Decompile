/*
 * FUN_10002949 at 10002949
 * undefined __stdcall FUN_10002949(void)
 * Address ranges: 10002949-1000297d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002949(void)

{
  if (DAT_1006c214 == '\0') {
    thunk_FUN_10060be1(DAT_1006c2a0);
    DAT_1006c2a0 = (LPVOID)0x0;
    DAT_1006c2a4 = 0;
    DAT_1006c2a8 = 0;
    thunk_FUN_10060be1((LPVOID)0x0);
    DAT_1006c214 = '\x01';
  }
  return;
}

