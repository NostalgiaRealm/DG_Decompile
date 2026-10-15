/*
 * FUN_180107018 at 180107018
 * undefined FUN_180107018(void)
 * Address ranges: 180107018-1801070fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180107018(int param_1)

{
  if ((param_1 - 0x14U < 0x3e) &&
     ((0x3aac9f01c031cfffU >> ((ulonglong)(param_1 - 0x14U) & 0x3f) & 1) != 0)) {
    return 0;
  }
  if (param_1 - 0x6fU < 6) {
    return 0;
  }
  if ((param_1 != 0x31495441) && (param_1 != 0x31545844)) {
    if ((param_1 != 0x32495441) && (param_1 != 0x32545844)) {
      if (param_1 == 0x32595559) {
        return 4;
      }
      if (param_1 != 0x33545844) {
        if (param_1 != 0x34324644) {
          if (param_1 == 0x34545844) {
            return 0x10;
          }
          if (param_1 == 0x35545844) {
            return 0x10;
          }
          if (param_1 != 0x4c4c554e) {
            if (param_1 == 0x59565955) {
              return 4;
            }
            if (param_1 != 0x5a544e49 && param_1 != 0x36314644) {
              return 0xffffffff;
            }
          }
        }
        return 0;
      }
    }
    return 0x10;
  }
  return 8;
}

