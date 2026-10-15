/*
 * FUN_10011c3f at 10011c3f
 * undefined4 __fastcall FUN_10011c3f(uint * param_1)
 * Address ranges: 10011c3f-10011cde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10011c3f(uint *param_1)

{
  uint uVar1;
  
LAB_10011c43:
  do {
    uVar1 = *param_1 & 0xffff;
    if (uVar1 < 0x42) {
      if (uVar1 == 0x41) {
LAB_10011ca8:
        param_1 = param_1 + 2;
        goto LAB_10011c43;
      }
      if (uVar1 < 6) {
        if (uVar1 != 5) {
          if (uVar1 == 0) goto LAB_10011cc9;
          if (uVar1 == 1) goto LAB_10011c88;
          if ((uVar1 != 2) && (uVar1 != 3)) {
            if (uVar1 != 4) {
              return 1;
            }
            goto LAB_10011c6f;
          }
        }
      }
      else if ((uVar1 != 8) && (uVar1 != 9)) {
        if (uVar1 == 0x12) goto LAB_10011c6f;
        if (uVar1 != 0x40) {
          return 1;
        }
LAB_10011c88:
        param_1 = param_1 + 3;
        goto LAB_10011c43;
      }
    }
    else {
      if (uVar1 < 0x59) {
        if (uVar1 != 0x58) {
          if (uVar1 == 0x42) goto LAB_10011c88;
          if (uVar1 != 0x50) {
            if (uVar1 != 0x51) {
              if (uVar1 != 0x57) {
                return 1;
              }
              goto LAB_10011ca8;
            }
            param_1 = param_1 + 6;
            goto LAB_10011c43;
          }
        }
LAB_10011c6f:
        param_1 = param_1 + 5;
        goto LAB_10011c43;
      }
      if (uVar1 != 0x59) {
        if (uVar1 == 0xfffd) {
          return 0;
        }
        if (uVar1 != 0xfffe) {
          return 1;
        }
        param_1 = param_1 + (*param_1 >> 0x10);
LAB_10011cc9:
        param_1 = param_1 + 1;
        goto LAB_10011c43;
      }
    }
    param_1 = param_1 + 4;
  } while( true );
}

