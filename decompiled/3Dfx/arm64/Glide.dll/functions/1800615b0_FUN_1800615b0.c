/*
 * FUN_1800615b0 at 1800615b0
 * ulonglong __cdecl FUN_1800615b0(ulonglong param_1)
 * Address ranges: 1800615b0-1800615cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800615b0(ulonglong param_1)

{
  if (((uint)param_1 - 0x61 & 0xffff) < 0x1a) {
    param_1 = (ulonglong)(((uint)param_1 & 0xffff) + 0xffe0);
  }
  return param_1;
}

