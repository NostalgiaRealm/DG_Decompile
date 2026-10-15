/*
 * FUN_10002f00 at 10002f00
 * undefined FUN_10002f00(void)
 * Address ranges: 10002f00-10003077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10002f00(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1c;
  if (param_1 < 0x3c) {
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
    case 0x29:
      uVar1 = 0;
      break;
    case 0x32:
      uVar1 = 7;
      break;
    case 0x33:
      uVar1 = 9;
    }
  }
  else {
    switch(param_1) {
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
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4c:
    case 0x4e:
      break;
    case 0x46:
    case 0x50:
      uVar1 = 0x17;
      break;
    case 0x47:
      uVar1 = 0x1b;
      break;
    case 0x4b:
      uVar1 = 0x19;
      break;
    case 0x4d:
      uVar1 = 0x18;
      break;
    case 0x4f:
      uVar1 = 0x1a;
      break;
    default:
      if (param_1 < 0x33545844) {
        if (param_1 == 0x31545844) {
          uVar1 = 0xe;
        }
        else if (param_1 == 0x32545844) {
          uVar1 = 0xf;
        }
        else if (param_1 == 0x32595559) {
          uVar1 = 0x14;
        }
      }
      else if (param_1 < 0x33545845) {
        uVar1 = 0x10;
      }
      else if (param_1 == 0x34545844) {
        uVar1 = 0x11;
      }
      else if (param_1 == 0x35545844) {
        uVar1 = 0x12;
      }
      else if (param_1 == 0x59565955) {
        uVar1 = 0x13;
      }
    }
  }
  return uVar1;
}

