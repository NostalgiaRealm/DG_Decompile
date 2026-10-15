/*
 * FUN_100034b0 at 100034b0
 * undefined FUN_100034b0(void)
 * Address ranges: 100034b0-100035ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100034b0(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x6f) {
    if (0x3d < param_1 - 0x14U) {
      return 0xffffffff;
    }
    if ((0x3aac9f01c031cfffU >> ((ulonglong)(param_1 - 0x14U) & 0x3f) & 1) != 0) {
      return 0;
    }
    return 0xffffffff;
  }
  if (param_1 < 0x75) {
    return 0;
  }
  if (param_1 < 0x34324644) {
    if (param_1 < 0x32545844) {
      if ((param_1 == 0x31495441) || (param_1 == 0x31545844)) {
        return 8;
      }
      iVar1 = 0x32495441;
    }
    else {
      if (param_1 < 0x32545845) {
        return 0x10;
      }
      if (param_1 == 0x32595559) {
        return 4;
      }
      iVar1 = 0x33545844;
    }
    if (param_1 == iVar1) {
      return 0x10;
    }
    return 0xffffffff;
  }
  if (param_1 < 0x34324645) {
    return 0;
  }
  if (param_1 < 0x4c4c554e) {
    if (param_1 == 0x34545844) {
      return 0x10;
    }
    if (param_1 == 0x35545844) {
      return 0x10;
    }
    iVar1 = 0x36314644;
  }
  else {
    if (param_1 < 0x4c4c554f) {
      return 0;
    }
    if (param_1 == 0x59565955) {
      return 4;
    }
    iVar1 = 0x5a544e49;
  }
  if (param_1 == iVar1) {
    return 0;
  }
  return 0xffffffff;
}

