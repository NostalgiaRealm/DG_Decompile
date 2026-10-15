/*
 * FUN_180018a30 at 180018a30
 * undefined8 __cdecl FUN_180018a30(undefined8 param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 180018a30-180018a6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180018a30(undefined8 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  
  if (((8 < param_3) || (8 < (byte)(&DAT_180063bb8)[(int)param_3] || 8 < param_2)) ||
     (uVar1 = 1, (8 < (byte)(&DAT_180063bb8)[(int)param_2] || 0xf < param_5) || 6 < param_4)) {
    uVar1 = 0;
  }
  return uVar1;
}

