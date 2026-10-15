/*
 * FUN_180223620 at 180223620
 * undefined FUN_180223620(void)
 * Address ranges: 180223620-18022363b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180223620(ulonglong param_1)

{
  if (((uint)param_1 - 0x61 & 0xffff) < 0x1a) {
    param_1 = (ulonglong)(((uint)param_1 & 0xffff) + 0xffe0);
  }
  return param_1;
}

