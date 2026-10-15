/*
 * FUN_180002928 at 180002928
 * undefined8 __fastcall FUN_180002928(int param_1)
 * Address ranges: 180002928-180002973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180002928(int param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((((param_1 != 0x59565955) && (param_1 != 0x32595559)) && (param_1 != 0x31545844)) &&
     (((param_1 != 0x32545844 && (param_1 != 0x33545844)) &&
      ((param_1 != 0x34545844 && (param_1 != 0x35545844)))))) {
    uVar1 = param_1 + 0xceb6abbf;
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 & 0xfeffffff) != 0) {
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}

