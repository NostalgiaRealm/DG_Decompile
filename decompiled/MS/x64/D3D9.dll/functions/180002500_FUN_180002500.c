/*
 * FUN_180002500 at 180002500
 * undefined4 __fastcall FUN_180002500(int param_1)
 * Address ranges: 180002500-1800026bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180002500(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (0x31495441 < param_1) {
    if (param_1 < 0x34545845) {
      if (((((param_1 == 0x34545844) || (param_1 == 0x31545844)) || (param_1 == 0x32495441)) ||
          ((param_1 == 0x32545844 || (param_1 == 0x32595559)))) || (param_1 == 0x33545844)) {
        return 0;
      }
      bVar2 = param_1 == 0x34324644;
    }
    else {
      if (param_1 == 0x35545844) {
        return 0;
      }
      if (param_1 == 0x36314644) {
        return 0x10;
      }
      if (param_1 == 0x4c4c554e) {
        return 8;
      }
      if (param_1 == 0x59565955) {
        return 0;
      }
      bVar2 = param_1 == 0x5a544e49;
    }
    if (bVar2) {
      return 0x20;
    }
    return 0xffffffff;
  }
  if (param_1 == 0x31495441) {
    return 0;
  }
  if (param_1 < 0x3d) {
    if (param_1 == 0x3c) {
      return 0x10;
    }
    if (0x1e < param_1) {
      if (param_1 == 0x1f) {
        return 0x20;
      }
      if (param_1 == 0x22) {
        return 0x20;
      }
      if (param_1 == 0x23) {
        return 0x20;
      }
      if (param_1 != 0x24) {
        if (param_1 == 0x28) {
          return 0x10;
        }
        if ((param_1 != 0x29) && (param_1 != 0x32)) {
          if (param_1 == 0x33) {
            return 0x10;
          }
          if (param_1 != 0x34) {
            return 0xffffffff;
          }
        }
        return 8;
      }
      return 0x40;
    }
    if (param_1 == 0x1e) {
      return 0x10;
    }
    if (param_1 < 0x1a) {
      if (param_1 == 0x19) {
        return 0x10;
      }
      if (param_1 == 0x14) {
        return 0x18;
      }
      if (param_1 == 0x15) {
        return 0x20;
      }
      iVar1 = param_1 + -0x16;
      goto LAB_180002540;
    }
    if (param_1 == 0x1a) {
      return 0x10;
    }
    if (param_1 == 0x1b) {
      return 8;
    }
    iVar1 = param_1 + -0x1c;
    if (iVar1 == 0) {
      return 8;
    }
  }
  else {
    if (0x6f < param_1) {
      if (param_1 == 0x70) {
        return 0x20;
      }
      if (param_1 != 0x71) {
        if (param_1 == 0x72) {
          return 0x20;
        }
        if (param_1 != 0x73) {
          if (param_1 == 0x74) {
            return 0x80;
          }
          return 0xffffffff;
        }
      }
      return 0x40;
    }
    if (param_1 == 0x6f) {
      return 0x10;
    }
    if (param_1 < 0x48) {
      if (param_1 == 0x47) {
        return 0x20;
      }
      if (param_1 == 0x3d) {
        return 0x10;
      }
      if (param_1 == 0x3e) {
        return 0x20;
      }
      if (param_1 == 0x3f) {
        return 0x20;
      }
      if (param_1 == 0x40) {
        return 0x20;
      }
      if (param_1 == 0x43) {
        return 0x20;
      }
      bVar2 = param_1 == 0x46;
      goto LAB_18000254e;
    }
    if (param_1 == 0x49) {
      return 0x10;
    }
    if (param_1 == 0x4b) {
      return 0x20;
    }
    if (param_1 == 0x4d) {
      return 0x20;
    }
    iVar1 = param_1 + -0x4f;
LAB_180002540:
    if (iVar1 == 0) {
      return 0x20;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      return 0x10;
    }
  }
  bVar2 = iVar1 == 1;
LAB_18000254e:
  if (bVar2) {
    return 0x10;
  }
  return 0xffffffff;
}

