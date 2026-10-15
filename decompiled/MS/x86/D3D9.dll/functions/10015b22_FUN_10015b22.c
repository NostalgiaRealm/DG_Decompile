/*
 * FUN_10015b22 at 10015b22
 * undefined4 __fastcall FUN_10015b22(uint * param_1)
 * Address ranges: 10015b22-10015bc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10015b22(uint *param_1)

{
  uint uVar1;
  
LAB_10015b26:
  do {
    uVar1 = *param_1 & 0xffff;
    if (uVar1 < 0x42) {
      if (uVar1 == 0x41) {
LAB_10015b8b:
        param_1 = param_1 + 2;
        goto LAB_10015b26;
      }
      if (uVar1 < 6) {
        if (uVar1 != 5) {
          if (uVar1 == 0) goto LAB_10015bac;
          if (uVar1 == 1) goto LAB_10015b6b;
          if ((uVar1 != 2) && (uVar1 != 3)) {
            if (uVar1 != 4) {
              return 1;
            }
            goto LAB_10015b52;
          }
        }
      }
      else if ((uVar1 != 8) && (uVar1 != 9)) {
        if (uVar1 == 0x12) goto LAB_10015b52;
        if (uVar1 != 0x40) {
          return 1;
        }
LAB_10015b6b:
        param_1 = param_1 + 3;
        goto LAB_10015b26;
      }
    }
    else {
      if (uVar1 < 0x59) {
        if (uVar1 != 0x58) {
          if (uVar1 == 0x42) goto LAB_10015b6b;
          if (uVar1 != 0x50) {
            if (uVar1 != 0x51) {
              if (uVar1 != 0x57) {
                return 1;
              }
              goto LAB_10015b8b;
            }
            param_1 = param_1 + 6;
            goto LAB_10015b26;
          }
        }
LAB_10015b52:
        param_1 = param_1 + 5;
        goto LAB_10015b26;
      }
      if (uVar1 != 0x59) {
        if (uVar1 == 0xfffd) {
          return 0;
        }
        if (uVar1 != 0xfffe) {
          return 1;
        }
        param_1 = param_1 + (*param_1 >> 0x10);
LAB_10015bac:
        param_1 = param_1 + 1;
        goto LAB_10015b26;
      }
    }
    param_1 = param_1 + 4;
  } while( true );
}

