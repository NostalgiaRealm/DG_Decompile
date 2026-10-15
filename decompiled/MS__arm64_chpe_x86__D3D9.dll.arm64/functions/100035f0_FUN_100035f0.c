/*
 * FUN_100035f0 at 100035f0
 * undefined FUN_100035f0(void)
 * Address ranges: 100035f0-1000367b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100035f0(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x32595559) {
    if (param_1 < 0x32495441) {
      if (param_1 == 0x31495441) {
        return 4;
      }
      iVar1 = 0x31545844;
    }
    else {
      if (param_1 < 0x32495442) {
        return 4;
      }
      iVar1 = 0x32545844;
    }
  }
  else {
    if (param_1 < 0x3259555a) {
      return 2;
    }
    if (0x35545843 < param_1) {
      if (param_1 < 0x35545845) {
        return 4;
      }
      if (param_1 == 0x59565955) {
        return 2;
      }
      return 1;
    }
    if (param_1 == 0x33545844) {
      return 4;
    }
    iVar1 = 0x34545844;
  }
  if (param_1 == iVar1) {
    return 4;
  }
  return 1;
}

