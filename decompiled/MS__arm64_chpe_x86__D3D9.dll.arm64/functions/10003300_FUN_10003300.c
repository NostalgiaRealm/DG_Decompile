/*
 * FUN_10003300 at 10003300
 * undefined FUN_10003300(void)
 * Address ranges: 10003300-1000340b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003300(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x75) {
    switch(param_1) {
    case 0x14:
      return 0x18;
    case 0x15:
    case 0x16:
    case 0x1f:
    case 0x22:
    case 0x23:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x43:
    case 0x47:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x70:
    case 0x72:
      goto switchD_10003328_caseD_20;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1d:
    case 0x1e:
    case 0x28:
    case 0x33:
    case 0x3c:
    case 0x3d:
    case 0x46:
    case 0x49:
    case 0x50:
    case 0x51:
    case 0x6f:
      return 0x10;
    case 0x1b:
    case 0x1c:
    case 0x29:
    case 0x32:
    case 0x34:
      return 8;
    default:
      return 0xffffffff;
    case 0x24:
    case 0x71:
    case 0x73:
      return 0x40;
    case 0x74:
      return 0x80;
    }
  }
  if (param_1 < 0x34324644) {
    if (param_1 < 0x32545844) {
      if (param_1 == 0x31495441) {
        return 0;
      }
      if (param_1 == 0x31545844) {
        return 0;
      }
      iVar1 = 0x32495441;
    }
    else {
      if (param_1 < 0x32545845) {
        return 0;
      }
      if (param_1 == 0x32595559) {
        return 0;
      }
      iVar1 = 0x33545844;
    }
    if (param_1 == iVar1) {
      return 0;
    }
    return 0xffffffff;
  }
  if (param_1 < 0x34324645) {
switchD_10003328_caseD_20:
    return 0x20;
  }
  if (param_1 < 0x4c4c554e) {
    if (param_1 == 0x34545844) {
      return 0;
    }
    if (param_1 == 0x35545844) {
      return 0;
    }
    if (param_1 == 0x36314644) {
      return 0x10;
    }
    return 0xffffffff;
  }
  if (param_1 < 0x4c4c554f) {
    return 8;
  }
  if (param_1 == 0x59565955) {
    return 0;
  }
  if (param_1 == 0x5a544e49) {
    return 0x20;
  }
  return 0xffffffff;
}

