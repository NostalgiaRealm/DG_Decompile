/*
 * FUN_180060760 at 180060760
 * ulonglong __cdecl FUN_180060760(ulonglong param_1)
 * Address ranges: 180060760-18006077b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180060760(ulonglong param_1)

{
  if (((uint)param_1 - 0x61 & 0xffff) < 0x1a) {
    param_1 = (ulonglong)(((uint)param_1 & 0xffff) + 0xffe0);
  }
  return param_1;
}

