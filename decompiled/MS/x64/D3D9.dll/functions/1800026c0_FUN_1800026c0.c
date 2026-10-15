/*
 * FUN_1800026c0 at 1800026c0
 * undefined8 __fastcall FUN_1800026c0(int param_1)
 * Address ranges: 1800026c0-180002842
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800026c0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 < 0x31495442) {
    if (param_1 == 0x31495441) {
      return 8;
    }
    if (param_1 < 0x3d) {
      if (param_1 != 0x3c) {
        if (param_1 < 0x1f) {
          if (param_1 != 0x1e) {
            if (0x19 < param_1) {
              iVar1 = param_1 + -0x1a;
              goto LAB_1800027b5;
            }
            if (param_1 != 0x19) {
              iVar1 = param_1 + -0x14;
              goto LAB_1800027b0;
            }
          }
        }
        else if (((((param_1 != 0x1f) && (param_1 != 0x22)) && (param_1 != 0x23)) &&
                 ((param_1 != 0x24 && (param_1 != 0x28)))) && (param_1 != 0x29)) {
          iVar1 = param_1 + -0x32;
          bVar3 = iVar1 == 0;
          goto LAB_1800027ba;
        }
      }
    }
    else if (param_1 < 0x70) {
      if (param_1 != 0x6f) {
        if (param_1 < 0x48) {
          if ((((param_1 != 0x47) && (param_1 != 0x3d)) &&
              ((param_1 != 0x3e && ((param_1 != 0x3f && (param_1 != 0x40)))))) && (param_1 != 0x43))
          {
            bVar3 = param_1 == 0x46;
            goto LAB_18000282e;
          }
        }
        else if (((param_1 != 0x49) && (param_1 != 0x4b)) && (param_1 != 0x4d)) {
          iVar1 = param_1 + -0x4f;
          bVar3 = iVar1 == 0;
          goto LAB_1800027ba;
        }
      }
    }
    else {
      iVar1 = param_1 + -0x70;
LAB_1800027b0:
      if (iVar1 != 0) {
        iVar1 = iVar1 + -1;
LAB_1800027b5:
        if (iVar1 != 0) {
          iVar1 = iVar1 + -1;
          bVar3 = iVar1 == 0;
LAB_1800027ba:
          if ((!bVar3) && (iVar1 != 1)) {
            bVar3 = iVar1 == 2;
            goto LAB_18000282e;
          }
        }
      }
    }
LAB_180002830:
    uVar2 = 0;
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
            bVar3 = param_1 == 0x34324644;
            goto LAB_18000282e;
          }
        }
      }
    }
    else if (param_1 != 0x35545844) {
      if ((param_1 != 0x36314644) && (param_1 != 0x4c4c554e)) {
        if (param_1 == 0x59565955) {
          return 4;
        }
        bVar3 = param_1 == 0x5a544e49;
LAB_18000282e:
        if (!bVar3) {
          return 0xffffffff;
        }
      }
      goto LAB_180002830;
    }
    uVar2 = 0x10;
  }
  return uVar2;
}

