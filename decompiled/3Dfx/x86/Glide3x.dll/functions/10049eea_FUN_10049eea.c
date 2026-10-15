/*
 * FUN_10049eea at 10049eea
 * longlong __stdcall FUN_10049eea(uint * param_1)
 * Address ranges: 10049eea-10049f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_10049eea(uint *param_1)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)(param_1[9] * 3) * 0x10;
  return (ulonglong)(param_1[4] * 3) * 0x10000000 +
         CONCAT44((int)((ulonglong)lVar1 >> 0x20) << 0x1c | (uint)lVar1 >> 4,
                  (((((param_1[6] - 1) * 0x10 | param_1[5] - 1) << 3 | param_1[3]) << 3 | param_1[2]
                   ) << 3 | param_1[1]) << 8 | *param_1) + (ulonglong)(param_1[0xc] * 3) * 0x8000000
         + (ulonglong)(param_1[0xb] * 5) * 0x8000000 + (ulonglong)(param_1[8] * 5) * 0x4000000 +
         (ulonglong)(param_1[10] * 9) * 0x400000 + (ulonglong)(param_1[7] * 7) * 0x400000;
}

