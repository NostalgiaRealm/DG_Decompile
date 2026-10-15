/*
 * FUN_1800ac1a8 at 1800ac1a8
 * undefined8 * __fastcall FUN_1800ac1a8(undefined8 * param_1, uint param_2)
 * Address ranges: 1800ac1a8-1800ac430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800ac1a8(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)param_1 = 0x3c;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3e;
  *(undefined8 *)((longlong)param_1 + 4) = 0x3e;
  if (param_2 < 0x16) {
    if (param_2 == 0x15) {
      *(undefined4 *)param_1 = 0x17;
      uVar1 = 0x18;
      goto LAB_1800ac207;
    }
    if (10 < param_2) {
      if (param_2 < 0x11) {
        if (param_2 != 0x10) {
          if (param_2 == 0xb) goto LAB_1800ac1fc;
          if ((param_2 == 0xc) || (param_2 == 0xd)) goto LAB_1800ac27f;
          if (param_2 == 0xe) {
            *(undefined4 *)param_1 = 0x46;
            *(undefined4 *)((longlong)param_1 + 4) = 0x47;
            goto LAB_1800ac429;
          }
          if (param_2 != 0xf) goto LAB_1800ac3ce;
        }
        *(undefined4 *)param_1 = 0x49;
        *(undefined4 *)((longlong)param_1 + 4) = 0x4a;
        goto LAB_1800ac429;
      }
      if ((param_2 == 0x11) || (param_2 == 0x12)) {
        *(undefined4 *)param_1 = 0x4c;
        *(undefined4 *)((longlong)param_1 + 4) = 0x4d;
        goto LAB_1800ac429;
      }
      if (param_2 == 0x13) {
        uVar1 = 0x44;
      }
      else {
        if (param_2 != 0x14) goto LAB_1800ac3ce;
        uVar1 = 0x45;
      }
      *(undefined4 *)param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 4) = uVar1;
      goto LAB_1800ac429;
    }
    if (param_2 != 10) {
      if (param_2 < 6) {
        if (param_2 == 5) {
LAB_1800ac27f:
          *(undefined4 *)param_1 = 0x27;
          uVar1 = 0x2a;
          goto LAB_1800ac207;
        }
        if (param_2 == 0) {
          return param_1;
        }
        if (((param_2 != 1) && (param_2 != 2)) && (iVar2 = param_2 - 3, iVar2 != 0))
        goto LAB_1800ac229;
      }
      else {
        if (param_2 == 6) goto LAB_1800ac27f;
        if (param_2 == 7) {
          return param_1;
        }
        iVar2 = param_2 - 8;
        if (iVar2 == 0) {
          return param_1;
        }
LAB_1800ac229:
        if (iVar2 != 1) {
LAB_1800ac3ce:
          *param_1 = 0;
          goto LAB_1800ac429;
        }
      }
    }
LAB_1800ac1fc:
    *(undefined4 *)param_1 = 0x35;
    uVar1 = 0x39;
LAB_1800ac207:
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  else {
    if (param_2 < 0x21) {
      if (param_2 != 0x20) {
        if (param_2 < 0x1c) {
          if (param_2 == 0x1b) {
            uVar1 = 0x22;
          }
          else {
            if (param_2 == 0x16) {
              *(undefined4 *)param_1 = 9;
              *(undefined4 *)((longlong)param_1 + 0xc) = 0xb;
              *(undefined4 *)((longlong)param_1 + 4) = 0xb;
              return param_1;
            }
            if (param_2 != 0x17) {
              if (param_2 == 0x18) {
                *(undefined4 *)param_1 = 0x21;
                uVar1 = 0x23;
              }
              else {
                if (param_2 != 0x19) {
                  if (param_2 != 0x1a) goto LAB_1800ac3ce;
                  uVar1 = 0x36;
                  goto LAB_1800ac33a;
                }
                *(undefined4 *)param_1 = 0x21;
                uVar1 = 0x25;
              }
              goto LAB_1800ac207;
            }
            uVar1 = 0x38;
          }
        }
        else if (param_2 == 0x1c) {
          uVar1 = 10;
        }
        else if (param_2 == 0x1d) {
          uVar1 = 0x29;
        }
        else if (param_2 == 0x1e) {
          uVar1 = 0x10;
        }
        else {
          if (param_2 != 0x1f) goto LAB_1800ac3ce;
          uVar1 = 2;
        }
LAB_1800ac33a:
        *(undefined4 *)param_1 = uVar1;
        goto LAB_1800ac207;
      }
      *(undefined4 *)param_1 = 0x4f;
      *(undefined4 *)((longlong)param_1 + 4) = 0x50;
    }
    else if (param_2 == 0x21) {
      *(undefined4 *)param_1 = 0x52;
      *(undefined4 *)((longlong)param_1 + 4) = 0x53;
    }
    else if (param_2 == 0x22) {
LAB_1800ac406:
      *(undefined4 *)param_1 = 0x35;
      *(undefined4 *)(param_1 + 2) = 0x37;
      *(undefined4 *)((longlong)param_1 + 4) = 0x38;
    }
    else {
      if (param_2 != 0x23) {
        if ((param_2 != 0x24) && (param_2 != 0x25)) {
          if (param_2 == 0x26) {
            *(undefined4 *)param_1 = 0x27;
            *(undefined4 *)(param_1 + 2) = 0x28;
            *(undefined4 *)((longlong)param_1 + 4) = 0x29;
            goto LAB_1800ac429;
          }
          if (param_2 == 0x27) goto LAB_1800ac406;
          if ((param_2 != 0x28) && (param_2 != 0x29)) goto LAB_1800ac3ce;
        }
        *(undefined4 *)(param_1 + 1) = 0x2f;
      }
      *(undefined4 *)param_1 = 0x2c;
      *(undefined4 *)(param_1 + 2) = 0x2d;
      *(undefined4 *)((longlong)param_1 + 4) = 0x2e;
    }
LAB_1800ac429:
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return param_1;
}

