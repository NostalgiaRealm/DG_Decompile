/*
 * FUN_180002974 at 180002974
 * longlong __fastcall FUN_180002974(int param_1)
 * Address ranges: 180002974-1800029a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180002974(int param_1)

{
  uint uVar1;
  uint7 uVar2;
  
  uVar1 = param_1 - 0x46;
  uVar2 = (uint7)(uint3)(uVar1 >> 8);
  if ((((10 < uVar1) || ((0x6abU >> (uVar1 & 0x1f) & 1) == 0)) && (param_1 != 0x36314644)) &&
     ((param_1 != 0x34324644 && (param_1 != 0x5a544e49)))) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}

