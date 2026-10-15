/*
 * FUN_180048140 at 180048140
 * undefined8 __fastcall FUN_180048140(int param_1)
 * Address ranges: 180048140-1800482bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180048140(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x25) {
    if (param_1 == 0x24) {
      return 4;
    }
    if (param_1 < 0x13) {
      if (param_1 == 0x12) {
        return 8;
      }
      if (param_1 < 10) {
        if (param_1 == 9) {
          return 8;
        }
        if (((param_1 != 1) && (param_1 != 2)) && ((param_1 != 3 && (param_1 != 4)))) {
          if (((param_1 != 5) && (param_1 != 6)) && ((param_1 != 7 && (param_1 != 8)))) {
            return 0;
          }
          return 0xc;
        }
        return 0x10;
      }
      if (param_1 == 10) {
        return 8;
      }
      if (param_1 == 0xb) {
        return 8;
      }
      if (param_1 == 0xc) {
        return 8;
      }
      if (param_1 != 0xd) {
        if (param_1 == 0xe) {
          return 8;
        }
        if (param_1 == 0xf) {
          return 8;
        }
        if (param_1 == 0x10) {
          return 8;
        }
        if (param_1 != 0x11) {
          return 0;
        }
        return 8;
      }
      return 8;
    }
    if (0x1b < param_1) {
      iVar1 = param_1 + -0x1c;
      goto LAB_1800481ed;
    }
    if (param_1 == 0x1b) {
      return 4;
    }
    if (param_1 == 0x13) {
      return 8;
    }
    if (param_1 == 0x14) {
      return 8;
    }
    if (param_1 == 0x15) {
      return 8;
    }
    iVar1 = param_1 + -0x16;
    if (iVar1 == 0) {
      return 8;
    }
  }
  else {
    if (0x36 < param_1) {
      if (param_1 < 0x40) {
        if (param_1 != 0x3f) {
          if (param_1 == 0x37) {
            return 2;
          }
          if (param_1 == 0x38) {
            return 2;
          }
          if (param_1 == 0x39) {
            return 2;
          }
          if (param_1 == 0x3a) {
            return 2;
          }
          if (param_1 == 0x3b) {
            return 2;
          }
          if (((param_1 != 0x3c) && (param_1 != 0x3d)) && (param_1 != 0x3e)) {
            return 0;
          }
        }
        return 1;
      }
      if (param_1 == 0x40) {
        return 1;
      }
      if (param_1 == 0x41) {
        return 1;
      }
      if (param_1 == 0x57) {
        return 4;
      }
      if (param_1 == 0x58) {
        return 4;
      }
      iVar1 = param_1 + -0x5a;
      goto LAB_180048299;
    }
    if (param_1 == 0x36) {
      return 2;
    }
    if (0x2d < param_1) {
      if (param_1 == 0x2e) {
        return 4;
      }
      if (param_1 == 0x2f) {
        return 4;
      }
      if (param_1 == 0x30) {
        return 2;
      }
      if (param_1 == 0x31) {
        return 2;
      }
      if (param_1 == 0x32) {
        return 2;
      }
      if (param_1 == 0x33) {
        return 2;
      }
      if (param_1 == 0x34) {
        return 2;
      }
      if (param_1 == 0x35) {
        return 2;
      }
      return 0;
    }
    if (param_1 == 0x2d) {
      return 4;
    }
    iVar1 = param_1 + -0x25;
LAB_1800481ed:
    if (iVar1 == 0) {
      return 4;
    }
    if (iVar1 == 1) {
      return 4;
    }
    if (iVar1 == 2) {
      return 4;
    }
    iVar1 = iVar1 + -3;
    if (iVar1 == 0) {
      return 4;
    }
  }
  iVar1 = iVar1 + -1;
LAB_180048299:
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  return 4;
}

