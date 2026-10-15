/*
 * FUN_100031e0 at 100031e0
 * undefined FUN_100031e0(void)
 * Address ranges: 100031e0-1000329f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100031e0(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_1;
  if ((int)uVar1 < 0x3c) {
    if (0x34 < uVar1) {
      return 0xffffffff;
    }
    if ((0x1c0304fff00000U >> (param_1 & 0x3f) & 1) == 0) {
      return 0xffffffff;
    }
  }
  else {
    if (0x50 < (int)uVar1) {
      if ((int)uVar1 < 0x33545844) {
        if (uVar1 == 0x31545844) {
          return 8;
        }
        if (uVar1 == 0x32545844) {
          return 0x10;
        }
        uVar2 = 0x32595559;
      }
      else {
        if ((((int)uVar1 < 0x33545845) || (uVar1 == 0x34545844)) || (uVar1 == 0x35545844)) {
          return 0x10;
        }
        uVar2 = 0x59565955;
      }
      if (uVar1 == uVar2) {
        return 4;
      }
      return 0xffffffff;
    }
    if (0x14 < uVar1 - 0x3c) {
      return 0xffffffff;
    }
    if ((0x1aacbfU >> (ulonglong)(uVar1 - 0x3c & 0x1f) & 1) == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

