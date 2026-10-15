/*
 * FUN_180064298 at 180064298
 * ulonglong __cdecl FUN_180064298(ulonglong param_1)
 * Address ranges: 180064298-1800642b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180064298(ulonglong param_1)

{
  if (((uint)param_1 - 0x61 & 0xffff) < 0x1a) {
    param_1 = (ulonglong)(((uint)param_1 & 0xffff) + 0xffe0);
  }
  return param_1;
}

