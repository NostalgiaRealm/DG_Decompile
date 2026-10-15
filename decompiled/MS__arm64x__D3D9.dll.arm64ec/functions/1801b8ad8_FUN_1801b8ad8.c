/*
 * FUN_1801b8ad8 at 1801b8ad8
 * undefined FUN_1801b8ad8(void)
 * Address ranges: 1801b8ad8-1801b8fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1801b8ad8(longlong param_1,uint *param_2,uint param_3,uint param_4,ulonglong param_5,
                    ulonglong param_6,int param_7,byte param_8,byte param_9,byte param_10,
                    byte param_11)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = (uint)param_5;
  if (((uVar6 - 0x17 & 0xfffffffa) == 0) ||
     (uVar9 = 0, uVar6 == 9 && param_3 != 0x1c || uVar6 == 0xb)) {
    uVar9 = 2;
  }
  if ((uVar6 - 0x46 < 8) && ((0xdbU >> (ulonglong)(uVar6 - 0x46 & 0x1f) & 1) != 0)) {
    uVar8 = 4;
  }
  else {
    uVar8 = 0;
  }
  if ((uVar6 < 0x37) && ((0x40020400010404U >> (param_5 & 0x3f) & 1) != 0)) {
    uVar7 = 0x20;
  }
  else {
    uVar7 = 0;
  }
  if ((uVar6 == 0x38 || uVar6 == 0x21) || (uVar4 = 0, uVar6 == 9 && param_3 == 0x1c)) {
    uVar4 = 0x20;
  }
  uVar1 = (uint)param_6;
  if (((uVar1 - 0x17 & 0xfffffffa) == 0) ||
     (uVar3 = 0, uVar1 == 9 && param_4 != 0x1c || uVar1 == 0xb)) {
    uVar3 = 1;
  }
  if ((uVar1 < 0x37) && ((0x40020400010404U >> (param_6 & 0x3f) & 1) != 0)) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0;
  }
  if ((uVar1 == 0x38 || uVar1 == 0x21) || (uVar5 = 0, uVar1 == 9 && param_4 == 0x1c)) {
    uVar5 = 0x10;
  }
  *param_2 = 0;
  uVar3 = uVar4 | uVar7 | uVar5 | uVar2 | (uint)(uVar6 - 0x44 < 2) << 3 | uVar8 | uVar9 | uVar3;
  uVar9 = 2;
  if ((uVar3 < 0x31) && ((0x1000200040000U >> uVar3 & 1) != 0)) {
    if (*(char *)(param_1 + 0x1cf08) == '\0') {
      uVar9 = 0;
    }
    uVar8 = (uint)param_8 |
            ((uint)param_9 |
            (uVar9 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
            (uint)param_10) << 3) << 1;
    uVar6 = 0x80000025;
    goto LAB_1801b8c64;
  }
  uVar8 = (uint)param_8;
  if (uVar3 == 0) {
    if (uVar1 == 0x3c) {
      if (uVar6 == 0x3c) {
        uVar6 = 0xfff00002;
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar6 = 0xfff00000;
        }
        uVar6 = *(uint *)(&DAT_18022da80 + (ulonglong)param_3 * 4) & 0xf | (uVar6 | param_10) << 0xb
        ;
      }
      else {
        uVar6 = 3;
      }
    }
    else {
      if (*(char *)(param_1 + 0x1cf08) == '\0') {
        uVar9 = 0;
      }
      uVar6 = *(uint *)(&DAT_18022da80 + (ulonglong)param_3 * 4) & 0xf |
              (uVar8 | ((uint)param_9 | (uVar9 | (param_11 | 0xfffc0000) << 2 | (uint)param_10) << 3
                       ) << 1) << 7;
    }
    *param_2 = uVar6;
    if (param_3 != param_4 || -1 < (int)uVar6) {
      return param_2;
    }
    uVar6 = uVar6 | 0x20000;
    goto LAB_1801b8fbc;
  }
  if (uVar3 == 1) {
    if (((&DAT_18022da48)[param_4] == '\0') || ((&DAT_18022da48)[param_3] == '\0')) {
      uVar6 = 2;
    }
    else {
      uVar6 = 0;
    }
    if (*(char *)(param_1 + 0x1cf08) == '\0') {
      uVar9 = 0;
    }
    uVar6 = *(uint *)(&DAT_18022da80 + (ulonglong)param_3 * 4) & 0xf |
            (uVar8 | ((uint)param_9 | (uVar9 | (uVar6 | param_11) << 2 | (uint)param_10) << 3) << 1)
            << 7;
LAB_1801b8e20:
    uVar6 = uVar6 | 0x80000010;
  }
  else {
    uVar7 = (uint)param_8;
    if (uVar3 == 2) {
      if (uVar1 == 0x3c) {
        uVar6 = 10;
        goto LAB_1801b8fbc;
      }
      uVar6 = 3;
      if (param_7 != 0) {
        uVar6 = 4;
      }
      uVar4 = 0xfffc0000;
      if (param_8 != 0 || param_9 != 0) {
        uVar4 = 0xfffc0008;
      }
      if (*(char *)(param_1 + 0x1cf08) == '\0') {
        uVar9 = 0;
      }
      uVar8 = uVar8 | ((uint)param_9 | (uVar9 | (uVar4 | param_11) << 2 | (uint)param_10) << 3) << 1
      ;
      if (uVar7 == param_9 && param_10 == 0) {
        uVar6 = 6;
      }
    }
    else {
      if (uVar3 == 3) {
        uVar6 = 3;
        if (param_7 != 0) {
          uVar6 = 4;
        }
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar9 = 0;
        }
        if (uVar8 == param_9 && param_10 == 0) {
          uVar6 = 6;
        }
        uVar6 = uVar6 | (uVar7 | ((uint)param_9 |
                                 (uVar9 | ((uint)param_11 |
                                          (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                                 (uint)param_10) << 3) << 1) << 7;
        goto LAB_1801b8e20;
      }
      if (uVar3 == 4) {
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar9 = 0;
        }
        uVar8 = uVar7 | ((uint)param_9 |
                        (uVar9 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                        (uint)param_10) << 3) << 1;
        uVar6 = 0x80000006;
      }
      else if (uVar3 == 5) {
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar9 = 0;
        }
        uVar8 = uVar7 | ((uint)param_9 |
                        (uVar9 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                        (uint)param_10) << 3) << 1;
        uVar6 = 0x80000016;
      }
      else {
        if (uVar3 == 8) {
          if (*(char *)(param_1 + 0x1cf08) == '\0') {
            uVar9 = 0;
          }
          uVar6 = ((uint)param_8 |
                  ((uint)param_9 |
                  (uVar9 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                  (uint)param_10) << 3) << 1) << 7 | 0x80000007;
          goto LAB_1801b8fbc;
        }
        if (uVar3 != 9) {
          return param_2;
        }
        if (*(char *)(param_1 + 0x1cf08) == '\0') {
          uVar9 = 0;
        }
        uVar8 = (uint)param_8 |
                ((uint)param_9 |
                (uVar9 | ((uint)param_11 | (uint)(param_8 != 0 || param_9 != 0) << 3) << 2 |
                (uint)param_10) << 3) << 1;
        uVar6 = 0x80000017;
      }
    }
LAB_1801b8c64:
    uVar6 = uVar6 | uVar8 << 7;
  }
LAB_1801b8fbc:
  *param_2 = uVar6;
  return param_2;
}

