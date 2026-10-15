/*
 * FUN_10002344 at 10002344
 * undefined4 __fastcall FUN_10002344(int param_1)
 * Address ranges: 10002344-10002439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002344(int param_1)

{
  if (param_1 < 0x31545845) {
    if (param_1 != 0x31545844) {
      if (0x33 < param_1) {
        if (0x43 < param_1) {
          if (param_1 != 0x46) {
            if (param_1 == 0x47) {
              return 0x20;
            }
            if (param_1 != 0x49) {
              if (param_1 == 0x4b) {
                return 0x20;
              }
              if (param_1 == 0x4d) {
                return 0x20;
              }
              if (param_1 == 0x4f) {
                return 0x20;
              }
              if (param_1 != 0x50) {
                return 0xffffffff;
              }
            }
          }
switchD_10002374_caseD_17:
          return 0x10;
        }
        if (param_1 != 0x43) {
          if (param_1 == 0x34) {
            return 8;
          }
          if (param_1 == 0x3c) {
            return 0x10;
          }
          if (param_1 == 0x3d) {
            return 0x10;
          }
          if (((param_1 != 0x3e) && (param_1 != 0x3f)) && ((param_1 != 0x40 && (param_1 != 0x41))))
          {
            return 0xffffffff;
          }
        }
switchD_10002374_caseD_15:
        return 0x20;
      }
      if (param_1 == 0x33) {
        return 0x10;
      }
      if (0x1c < param_1) {
        if (param_1 == 0x1d) {
          return 0x10;
        }
        if (param_1 == 0x1e) {
          return 0x10;
        }
        if (param_1 == 0x1f) {
          return 0x20;
        }
        if (param_1 != 0x22) {
          if (param_1 == 0x28) {
            return 0x10;
          }
          if (param_1 == 0x29) {
            return 8;
          }
          if (param_1 == 0x32) {
            return 8;
          }
          return 0xffffffff;
        }
        return 0x20;
      }
      if (param_1 != 0x1c) {
        switch(param_1) {
        case 0x14:
          return 0x18;
        case 0x15:
        case 0x16:
          goto switchD_10002374_caseD_15;
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
          goto switchD_10002374_caseD_17;
        case 0x1b:
          break;
        default:
          return 0xffffffff;
        }
      }
      return 8;
    }
  }
  else if (((((param_1 != 0x32545844) && (param_1 != 0x32595559)) && (param_1 != 0x33545844)) &&
           ((param_1 != 0x34545844 && (param_1 != 0x35545844)))) && (param_1 != 0x59565955)) {
    return 0xffffffff;
  }
  return 0;
}

