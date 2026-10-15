/*
 * FUN_10002220 at 10002220
 * undefined4 __fastcall FUN_10002220(int param_1)
 * Address ranges: 10002220-10002343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002220(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1c;
  if (param_1 < 0x33) {
    if (param_1 == 0x32) {
      return 7;
    }
    if (param_1 < 0x19) {
      if (param_1 == 0x18) {
        return 2;
      }
      if (param_1 != 0x14) {
        if (param_1 == 0x15) {
          return 6;
        }
        if (param_1 != 0x16) {
          if (param_1 != 0x17) {
            return 0x1c;
          }
          return 1;
        }
      }
      return 5;
    }
    if (param_1 == 0x19) {
      return 3;
    }
    if (param_1 == 0x1a) {
      return 4;
    }
    if (param_1 == 0x1c) {
      return 8;
    }
    if (param_1 == 0x29) {
      return 0;
    }
  }
  else if (param_1 < 0x50) {
    if (param_1 == 0x4f) {
      return 0x1a;
    }
    if (param_1 < 0x40) {
      if (param_1 == 0x3f) {
        return 0xd;
      }
      if (param_1 == 0x33) {
        return 9;
      }
      if (param_1 == 0x3c) {
        return 10;
      }
      if (param_1 == 0x3d) {
        return 0xb;
      }
      if (param_1 == 0x3e) {
        return 0xc;
      }
    }
    else {
      if (param_1 == 0x46) {
        return 0x17;
      }
      if (param_1 == 0x47) {
        return 0x1b;
      }
      if (param_1 == 0x4b) {
        return 0x19;
      }
      if (param_1 == 0x4d) {
        return 0x18;
      }
    }
  }
  else if (param_1 < 0x33545845) {
    if (param_1 == 0x33545844) {
      return 0x10;
    }
    if (param_1 == 0x50) {
      return 0x17;
    }
    if (param_1 == 0x31545844) {
      return 0xe;
    }
    if (param_1 == 0x32545844) {
      return 0xf;
    }
    if (param_1 == 0x32595559) {
      return 0x14;
    }
  }
  else if (param_1 == 0x34545844) {
    uVar1 = 0x11;
  }
  else {
    if (param_1 == 0x35545844) {
      return 0x12;
    }
    if (param_1 == 0x59565955) {
      return 0x13;
    }
  }
  return uVar1;
}

