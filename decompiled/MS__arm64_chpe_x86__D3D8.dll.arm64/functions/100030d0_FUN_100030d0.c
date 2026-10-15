/*
 * FUN_100030d0 at 100030d0
 * undefined FUN_100030d0(void)
 * Address ranges: 100030d0-1000317b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100030d0(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x51) {
    switch(param_1) {
    case 0x14:
      return 0x18;
    case 0x15:
    case 0x16:
    case 0x1f:
    case 0x22:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x43:
    case 0x47:
    case 0x4b:
    case 0x4d:
    case 0x4f:
      return 0x20;
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
      return 0x10;
    case 0x1b:
    case 0x1c:
    case 0x29:
    case 0x32:
    case 0x34:
      return 8;
    default:
      return 0xffffffff;
    }
  }
  if (param_1 < 0x33545844) {
    if (param_1 == 0x31545844) {
      return 0;
    }
    if (param_1 == 0x32545844) {
      return 0;
    }
    iVar1 = 0x32595559;
  }
  else {
    if (param_1 < 0x33545845) {
      return 0;
    }
    if (param_1 == 0x34545844) {
      return 0;
    }
    if (param_1 == 0x35545844) {
      return 0;
    }
    iVar1 = 0x59565955;
  }
  if (param_1 == iVar1) {
    return 0;
  }
  return 0xffffffff;
}

