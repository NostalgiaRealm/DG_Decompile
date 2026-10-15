/*
 * FUN_1000245c at 1000245c
 * undefined4 __fastcall FUN_1000245c(int param_1)
 * Address ranges: 1000245c-10002557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000245c(int param_1)

{
  bool bVar1;
  undefined4 uStack_4;
  
  if (param_1 < 0x31545845) {
    if (param_1 == 0x31545844) {
      return 8;
    }
    if (param_1 < 0x34) {
      if (param_1 == 0x33) {
        return 0;
      }
      if (param_1 < 0x1d) {
        if (param_1 == 0x1c) {
          return 0;
        }
        switch(param_1) {
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          return 0;
        default:
          return 0xffffffff;
        }
      }
      if (param_1 == 0x1d) {
        return 0;
      }
      if (param_1 == 0x1e) {
        return 0;
      }
      if (param_1 == 0x1f) {
        return 0;
      }
      if (param_1 == 0x22) {
        return 0;
      }
      if (param_1 == 0x28) {
        return 0;
      }
      if (param_1 == 0x29) {
        return 0;
      }
      bVar1 = param_1 == 0x32;
    }
    else {
      if (0x43 < param_1) {
        if (param_1 == 0x46) {
          return 0;
        }
        if (param_1 == 0x47) {
          return 0;
        }
        if (param_1 == 0x49) {
          return 0;
        }
        if (param_1 == 0x4b) {
          return 0;
        }
        if (param_1 == 0x4d) {
          return 0;
        }
        if (param_1 == 0x4f) {
          return 0;
        }
        if (param_1 == 0x50) {
          return 0;
        }
        return 0xffffffff;
      }
      if (param_1 == 0x43) {
        return 0;
      }
      if (param_1 == 0x34) {
        return 0;
      }
      if (param_1 == 0x3c) {
        return 0;
      }
      if (param_1 == 0x3d) {
        return 0;
      }
      if (param_1 == 0x3e) {
        return 0;
      }
      if (param_1 == 0x3f) {
        return 0;
      }
      if (param_1 == 0x40) {
        return 0;
      }
      bVar1 = param_1 == 0x41;
    }
    if (bVar1) {
      return 0;
    }
    return 0xffffffff;
  }
  if (param_1 == 0x32545844) {
LAB_10002552:
    uStack_4 = 0x10;
  }
  else {
    if (param_1 != 0x32595559) {
      if (((param_1 == 0x33545844) || (param_1 == 0x34545844)) || (param_1 == 0x35545844))
      goto LAB_10002552;
      if (param_1 != 0x59565955) {
        return 0xffffffff;
      }
    }
    uStack_4 = 4;
  }
  return uStack_4;
}

