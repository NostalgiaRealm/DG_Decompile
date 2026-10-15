/*
 * FUN_10003020 at 10003020
 * undefined FUN_10003020(void)
 * Address ranges: 10003020-1000326b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003020(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x2a;
  if (param_1 < 0x6f) {
    switch(param_1) {
    case 0x14:
    case 0x16:
      uVar1 = 5;
      break;
    case 0x15:
      uVar1 = 6;
      break;
    case 0x17:
      uVar1 = 1;
      break;
    case 0x18:
      uVar1 = 2;
      break;
    case 0x19:
      uVar1 = 3;
      break;
    case 0x1a:
      uVar1 = 4;
      break;
    case 0x1c:
      uVar1 = 8;
      break;
    case 0x22:
      uVar1 = 0x18;
      break;
    case 0x23:
      uVar1 = 0x15;
      break;
    case 0x24:
      uVar1 = 0x16;
      break;
    case 0x29:
      uVar1 = 0;
      break;
    case 0x32:
      goto switchD_100031a4_caseD_32;
    case 0x33:
      uVar1 = 9;
      break;
    case 0x3c:
      uVar1 = 10;
      break;
    case 0x3d:
      uVar1 = 0xb;
      break;
    case 0x3e:
      uVar1 = 0xc;
      break;
    case 0x3f:
      uVar1 = 0xd;
      break;
    case 0x40:
      uVar1 = 0x19;
      break;
    case 0x46:
    case 0x50:
      uVar1 = 0x22;
      break;
    case 0x47:
      uVar1 = 0x26;
      break;
    case 0x4b:
      uVar1 = 0x24;
      break;
    case 0x4d:
      uVar1 = 0x23;
      break;
    case 0x4f:
      uVar1 = 0x25;
      break;
    case 0x51:
      uVar1 = 0x17;
    }
  }
  else {
    switch(param_1) {
    case 0x6f:
      uVar1 = 0x1a;
      break;
    case 0x70:
      uVar1 = 0x1b;
      break;
    case 0x71:
      uVar1 = 0x1c;
      break;
    case 0x72:
      uVar1 = 0x1d;
      break;
    case 0x73:
      uVar1 = 0x1e;
      break;
    case 0x74:
      uVar1 = 0x1f;
      break;
    default:
      if (param_1 < 0x34324644) {
        if (param_1 < 0x32545844) {
          if (param_1 == 0x31495441) {
            return 0x20;
          }
          if (param_1 != 0x31545844) {
            if (param_1 != 0x32495441) {
              return 0x2a;
            }
            return 0x21;
          }
          return 0xe;
        }
        if (param_1 < 0x32545845) {
          return 0xf;
        }
        if (param_1 != 0x32595559) {
          if (param_1 != 0x33545844) {
            return 0x2a;
          }
          return 0x10;
        }
        return 0x14;
      }
      if (param_1 < 0x34324645) {
        return 0x28;
      }
      if (param_1 < 0x4c4c554e) {
        if (param_1 == 0x34545844) {
          return 0x11;
        }
        if (param_1 != 0x35545844) {
          if (param_1 != 0x36314644) {
            return 0x2a;
          }
          return 0x27;
        }
        return 0x12;
      }
      if (0x4c4c554e < param_1) {
        if (param_1 == 0x59565955) {
          return 0x13;
        }
        if (param_1 != 0x5a544e49) {
          return 0x2a;
        }
        return 0x29;
      }
switchD_100031a4_caseD_32:
      uVar1 = 7;
    }
  }
  return uVar1;
}

