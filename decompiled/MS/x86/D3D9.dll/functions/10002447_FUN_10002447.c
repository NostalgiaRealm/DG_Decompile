/*
 * FUN_10002447 at 10002447
 * undefined4 __fastcall FUN_10002447(int param_1)
 * Address ranges: 10002447-100025ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10002447(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  if (param_1 < 0x31495442) {
    if (param_1 == 0x31495441) {
      return 8;
    }
    if (param_1 < 0x3d) {
      if (param_1 != 0x3c) {
        if (param_1 < 0x1f) {
          if (param_1 != 0x1e) {
            switch(param_1) {
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
              break;
            default:
              goto switchD_10002486_default;
            }
          }
        }
        else if (param_1 < 0x29) {
          if ((param_1 != 0x28) && (param_1 != 0x1f)) {
            iVar1 = param_1 + -0x22;
            bVar2 = iVar1 == 0;
LAB_100024a4:
            if ((!bVar2) && (iVar1 != 1)) {
              bVar2 = iVar1 == 2;
              goto LAB_100025af;
            }
          }
        }
        else if (param_1 != 0x29) {
          iVar1 = param_1 + -0x32;
          bVar2 = iVar1 == 0;
          goto LAB_100024a4;
        }
      }
    }
    else if (param_1 < 0x70) {
      if (param_1 != 0x6f) {
        if (param_1 < 0x48) {
          if ((((param_1 != 0x47) && (param_1 != 0x3d)) &&
              ((param_1 != 0x3e && ((param_1 != 0x3f && (param_1 != 0x40)))))) && (param_1 != 0x43))
          {
            bVar2 = param_1 == 0x46;
            goto LAB_100025af;
          }
        }
        else if (((param_1 != 0x49) && (param_1 != 0x4b)) && (param_1 != 0x4d)) {
          iVar1 = param_1 + -0x4e;
          goto LAB_10002532;
        }
      }
    }
    else if ((param_1 != 0x70) && (iVar1 = param_1 + -0x71, iVar1 != 0)) {
LAB_10002532:
      iVar1 = iVar1 + -1;
      bVar2 = iVar1 == 0;
      goto LAB_100024a4;
    }
switchD_10002486_caseD_14:
    uStack_4 = 0;
  }
  else {
    if (param_1 < 0x34545845) {
      if (param_1 != 0x34545844) {
        if (param_1 == 0x31545844) {
          return 8;
        }
        if ((param_1 != 0x32495441) && (param_1 != 0x32545844)) {
          if (param_1 == 0x32595559) {
            return 4;
          }
          if (param_1 != 0x33545844) {
            bVar2 = param_1 == 0x34324644;
            goto LAB_100025af;
          }
        }
      }
    }
    else if (param_1 != 0x35545844) {
      if ((param_1 == 0x36314644) || (param_1 == 0x4c4c554e)) goto switchD_10002486_caseD_14;
      if (param_1 == 0x59565955) {
        return 4;
      }
      bVar2 = param_1 == 0x5a544e49;
LAB_100025af:
      if (!bVar2) {
        return 0xffffffff;
      }
      goto switchD_10002486_caseD_14;
    }
    uStack_4 = 0x10;
  }
switchD_10002486_default:
  return uStack_4;
}

