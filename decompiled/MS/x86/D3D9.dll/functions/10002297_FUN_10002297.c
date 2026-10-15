/*
 * FUN_10002297 at 10002297
 * undefined4 __fastcall FUN_10002297(int param_1)
 * Address ranges: 10002297-1000241e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002297(int param_1)

{
  bool bVar1;
  
  if (0x31495441 < param_1) {
    if (param_1 < 0x34545845) {
      if (param_1 == 0x34545844) {
        return 0;
      }
      if (param_1 == 0x31545844) {
        return 0;
      }
      if (param_1 == 0x32495441) {
        return 0;
      }
      if (param_1 == 0x32545844) {
        return 0;
      }
      if (param_1 == 0x32595559) {
        return 0;
      }
      if (param_1 == 0x33545844) {
        return 0;
      }
      bVar1 = param_1 == 0x34324644;
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
      bVar1 = param_1 == 0x5a544e49;
    }
    if (!bVar1) {
      return 0xffffffff;
    }
switchD_100022c7_caseD_15:
    return 0x20;
  }
  if (param_1 == 0x31495441) {
    return 0;
  }
  if (0x3c < param_1) {
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
      bVar1 = param_1 == 0x46;
    }
    else {
      if (param_1 == 0x49) {
        return 0x10;
      }
      if (param_1 == 0x4b) {
        return 0x20;
      }
      if (param_1 == 0x4d) {
        return 0x20;
      }
      if (param_1 == 0x4f) {
        return 0x20;
      }
      if (param_1 == 0x50) {
        return 0x10;
      }
      bVar1 = param_1 == 0x51;
    }
    if (bVar1) {
      return 0x10;
    }
    return 0xffffffff;
  }
  if (param_1 == 0x3c) {
    return 0x10;
  }
  if (0x1e < param_1) {
    if (param_1 < 0x29) {
      if (param_1 == 0x28) {
        return 0x10;
      }
      if (param_1 == 0x1f) {
        return 0x20;
      }
      if (param_1 == 0x22) {
        return 0x20;
      }
      if (param_1 == 0x23) {
        return 0x20;
      }
      if (param_1 == 0x24) {
        return 0x40;
      }
      return 0xffffffff;
    }
    if ((param_1 != 0x29) && (param_1 != 0x32)) {
      if (param_1 == 0x33) {
        return 0x10;
      }
      if (param_1 != 0x34) {
        return 0xffffffff;
      }
    }
switchD_100022c7_caseD_1b:
    return 8;
  }
  if (param_1 == 0x1e) {
    return 0x10;
  }
  switch(param_1) {
  case 0x14:
    return 0x18;
  case 0x15:
  case 0x16:
    goto switchD_100022c7_caseD_15;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1d:
    return 0x10;
  case 0x1b:
  case 0x1c:
    goto switchD_100022c7_caseD_1b;
  default:
    return 0xffffffff;
  }
}

